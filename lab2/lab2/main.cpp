//
//  main.cpp
//  lab2
//
//  Created by Huyanh Hoang on 2016. 7. 18..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#include <iostream>
#include "String.hpp"
#include <assert.h>

using namespace std;

void test_constructor_and_print()
{
    cout << endl << "constructor_and_print:" << endl;
    String s("Hello World");
    cout << s << endl;
}

void test_assign() {
    cout << endl << "assignment:" << endl;
    String s("Karlos");
    String s2;
    s2 = s;
    cout << s2 << endl;
    s = "Raven";
    cout << s << endl;
}

void test_index() {
    cout << endl <<"index:" << endl;
    String s("Judith");
    cout << s[4] << endl;
    cout << s[0] << endl;
    //cout << s[100] << endl; // throws error and crashes program
}

void test_size() {
    cout << endl <<"size:" << endl;
    String s("Yuri");
    String s2("");
    
    cout << s.size() << endl;
    cout << s2.size() << endl;
}

void test_reverse() {
    cout << endl <<"reverse:" << endl;
    String s("Jintan");
    String s2("Menma");
    
    cout << s.reverse() << endl;
    cout << s2.reverse() << endl;
}

void test_indexOf() {
    cout << endl <<"indexOf:" << endl;
    String s("Hello World");
    
    cout << s.indexOf("Worl") << endl;
    cout << s.indexOf("d") << endl;
    
    cout << s.indexOf('o') << endl;
    cout << s.indexOf('d') << endl;
}

void test_add() {
    cout << endl <<"concatenate:" << endl;
    String s("Booty");
    String s2(" Blastia");
    cout << s + s2 << endl;
    cout << s2 + s2 << endl;
}

void test_add_assign() {
    cout << endl <<"concatenate and assign:" << endl;
    String s("Yukiatsu");
    String s2("Anaru");
    
    s += s2;
    cout << s << endl;
    
    for (int i = 0; i != 5; i++) {
        s2 += "u";
    }
    cout << s2;
}

void test_bool() {
    cout << endl << "test_bool" << endl;
    String s("Poppo");
    String s2("Tsurumu");
    String s3 = s;
    cout << s << s3 << endl;
    cout << boolalpha;
    
    cout << (s < s2) << endl;
    cout << (s2 < s) << endl;
    assert (s < s2 == true);
    assert (s2 < s == false);
    
    cout << (s == s2) << endl;
    cout << (s2 == s) << endl;
    assert (s == s2 == false);
    assert (s2 == s == false);
    
    cout << (s <= s3) << endl;
    cout << (s3 <= s) << endl;
    assert (s <= s3 == true);
    assert (s3 <= s == true);
    
    cout << (s >= s3) << endl;
    cout << (s3 >= s) << endl;
    assert (s >= s3 == true);
    assert (s3 >= s == true);
}

int main()
{
    test_constructor_and_print();
    test_add();
    test_assign();
    test_index();
    test_size();
    test_reverse();
    test_indexOf();
    test_add();
    test_add_assign();
    test_bool();
    return 0;
}