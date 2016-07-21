//
//  String.cpp
//  lab2
//
//  Created by Huyanh Hoang on 2016. 7. 18..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#include <iostream>
#include "String.hpp"
using namespace std;

String::String(const char * s) {
    strcpy(buf, s);
}

String::String(const String & s) {
    strcpy(buf, s.buf);
}

String String::operator = (const String & s) {
    return strcpy(buf, s.buf);
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
    String copy = buf;
    return String::strcat(copy.buf, s.buf);
}

String String::operator += (const String s) {
    return strcat(buf, s.buf);
}

void String::print(ostream & out) {
    out << buf;
}

void String::read(istream & in) {
    in.getline(buf, MAXLEN);
}

String::~String() {
    
}

ostream & operator << (ostream & out, String str) {
    str.print(out);
    return out;
}

istream & operator >> (istream & in, String & str) {
    str.read(in);
    return in;
}