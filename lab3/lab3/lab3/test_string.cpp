//
//  main.cpp
//  lab3
//
//  Created by Huyanh Hoang on 2016. 8. 2..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#include "String.hpp"
#include <iostream>
using namespace std;

void test_construct() {
    String s("poop");
    String s2("pee");
    cout << s << endl;
    cout << s2 << endl;
}

void test_assign() {
    String s("falco");
    String s2("wulf");
    
    s = s2;
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
    
    cout << "size of Yuri: " << s.size() << endl;
    cout << "size of nothing: " << s2.size() << endl;
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
    cout << endl << "concatenate:" << endl;
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
    cout << s2 << endl;
}

int main() {
    test_construct();
    test_assign();
    test_index();
    test_size();
    test_reverse();
    test_indexOf();
    test_add();
    test_add_assign();
    
    cout << "Number of new allocations minus number of delete deallocations is " << String::allocations << endl;
    return 0;
}
