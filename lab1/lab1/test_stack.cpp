//
//  test_stack.cpp
//  lab1
//
//  Created by Huyanh Hoang on 2016. 7. 7..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Stack.hpp"

using namespace std;

int main() {
    Stack stack;
    string line;
    
    cout << "Enter your string: ";
    getline(cin, line);
    if(cin.eof()) {
        cout << "end of file";
        return 0;
    } else {
        for (int i = 0; i < line.length(); i++) {
            stack.push(line[i]);
        }
        
        int top = int(line.length()) - 1;
        for (int j = 0; j < line.length(); j++) {
            cout << stack.stack[top];
            stack.pop();
            top--;
        }
        return 0;
    }
    
}