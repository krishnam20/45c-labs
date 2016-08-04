//
//  String.cpp
//  lab3
//
//  Created by Huyanh Hoang on 2016. 8. 2..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#include "String.hpp"

String::String(const char * s) {
    buf = strdup(s);
}

String::String(const String & s) {
    buf = strdup(s.buf);
}

String String::operator = (const String & s) {
    delete_char_array(buf);
    buf = strdup(s.buf);
    return *this;
}

char & String::operator [] (int index) {
    if (inBounds(index)) {
        return buf[index];
    } else { throw "out of index"; }

}

int String::size() {
    return strlen(buf);
}

String String::reverse() {
    int endIndex = strlen(buf) - 1;
    char reversed[strlen(buf)];
    for (int i = 0; endIndex > -1; i++) {
        reversed[i] = buf[endIndex];
        endIndex--;
    }
    return reversed;
}

int String::indexOf(const char c) {
    char * p = strchr(buf, c);
    return int(p-buf);
}

int String::indexOf(const String pattern) {
    char * p = strstr(buf, pattern.buf);
    return int(p-buf);
}

bool String::operator == (const String s) {
    return String::strcmp(buf, s.buf) == 0;
}

bool String::operator != (const String s) {
    return String::strcmp(buf, s.buf) != 0;
}

bool String::operator > (const String s) {
    return String::strcmp(buf, s.buf) > 0;
}

bool String::operator < (const String s) {
    return String::strcmp(buf, s.buf) < 0;
}

bool String::operator >= (const String s) {
    return String::strcmp(buf, s.buf) >= 0;
}

bool String::operator <= (const String s) {
    return String::strcmp(buf, s.buf) <= 0;
}

String String::operator + (const String s) {
    char * merged;
    merged = new_char_array(strlen(buf) + strlen(s.buf) + 1);
    strcpy(merged, buf);
    String result;
    delete_char_array(result.buf);
    result.buf = merged;
    return result;
}

String String::operator += (const String s) {
    return strcat(buf, s.buf);
}

void String::print(ostream & out) {
    out << buf;
}

void String::read(istream & in) {
    in.getline(buf, strlen(buf));
}

String::~String() {
    delete_char_array(buf);
}

int String::allocations = 0;

ostream & operator << (ostream & out, String str) {
    str.print(out);
    return out;
}

istream & operator >> (istream & in, String & str) {
    str.read(in);
    return in;
}