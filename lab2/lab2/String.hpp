//
//  String.hpp
//  lab2
//
//  Created by Huyanh Hoang on 2016. 7. 18..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef String_hpp
#define String_hpp

#include <iostream>

using namespace std;

#define MAXLEN 128
class String
{
public:
    /// Both constructors should construct
    /// this String from the parameter s
    String(const char * s = "");
    String(const String & s);
    String operator = (const String & s);
    char & operator [] (int index);
    int size();
    String reverse(); // does not modify this String
    int indexOf(const char c);
    int indexOf(const String pattern);
    bool operator == (const String s);
    bool operator != (const String s);
    bool operator > (const String s);
    bool operator < (const String s);
    bool operator <= (const String s);
    bool operator >= (const String s);
    /// concatenates this and s to return result
    String operator + (const String s);
    /// concatenates s onto end of this
    String operator += (const String s);
    void print(ostream & out);
    void read(istream & in);
    ~String();
private:
    bool inBounds(int i)
    {
        return i >= 0 && i < strlen(buf);
    }// HINT: some C string primitives you should define and use
    static int strlen(const char *s) {
        int index = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            index++;
        }
        return index;
    }
    static char * strcpy(char *dest, const char *src) {
        int i = 0;
        for (; src[i] != '\0'; i++) {
            dest[i] = src[i];
        }
        dest[i] = '\0';
        return dest;
    }
    static char * strcat(char *dest, const char *src) {
        int startIndex = strlen(dest);
        int size = strlen(src);
        for (int i = 0; i < size; i++) {
            int current = startIndex + i;
            dest[current] = src[i];
            dest[current + 1] = '\0'; // terminate with null
        }
        return dest;
    }
    static int strcmp(const char *left, const char *right) {
        int size;
        int lenl = strlen(left), lenr = strlen(right);
        bool sameSize = lenl == lenr;
        char smaller;
        if (sameSize) {
            size = lenl;
        } else {
            smaller = lenl < lenr ? *left : *right;
            size = min(lenl, lenr);
        }
        for (int i = 0; i < size; i++) {
            if (left[i] > right[i]) {
                return 1;
            } else if (left[i] < right[i]) {
                return -1;
            }
        }
        // strings should be equal at this point, if one is longer then the shorter one is returned
        if (lenl == lenr) {
            return 0;
        } else if (lenl < lenr) {
            return -1;
        } else {
            return 1;
        }
    }
    static int strncmp(const char *left, const char *right, int
                       n) {
        for (; n != 0 && *left != '\0' && *right != '\0'; n--, left++, right++) {
            if (*left > *right) {
                return 1;
            } else if (*right > *left) {
                return -1;
            }
        }
        return 0;
    }
    static char * strchr(const char *str, int c) {
        int i = 0;
        for (; str[i] != '\0'; i++) {
            if (char(c) == str[i]) {
                return (char *)str+i;
            }
        }
        return NULL;
    }
    static char * strstr(const char *haystack, const char
                         *needle) {
        if (haystack[0] == '\0') { return (char *)haystack; } // zero length
        int index = 0; // post increment increments the startIndex by 1 more after finding substring, so we need index -1
        const char * startIndex = needle;
        for (int i = 0; *haystack != '\0'; haystack++, i++) {
//            cout << "haystack: " << *haystack << " ";
//            cout << "needle: " << *needle << endl;
            if (*needle == *haystack) {
//                cout << "found a substring" << endl;
                if (*(haystack + 1) == '\0') { return (char *)(haystack - index); } // check if looking for -1 index
                index++; // start counting
                needle++;
            } else if (*needle == '\0') { // end of needle
//                cout << "reached end of needle, return pointer to " << *(haystack - index) << endl;
                return (char *)(haystack - index);
            } else { // next characters don't match, so reset the needle
                needle = startIndex;
            }
        }
        return NULL; // string not found
    }
    char buf[MAXLEN]; // array for the characters in this string
    // DO NOT store the ‘logical’ length of this string
    // use the null ‘\0’ terminator to mark the end
};
ostream & operator << (ostream & out, String str);
istream & operator >> (istream & in, String & str);

#endif /* String_hpp */
