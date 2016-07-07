//
//  Stack.hpp
//  lab1
//
//  Created by Huyanh Hoang on 2016. 7. 5..
//  Copyright © 2016년 Huyanh Hoang. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#define STACK_CAPACITY 1000
#include <iostream>
#include <stdexcept>

using namespace std;

class Stack {
    int index; // represents the top of the stack
public:
    Stack() {
        index = -1;
    }
    char stack[STACK_CAPACITY];
    void push(char c) {
        if (isFull()) {
            throw invalid_argument("stack full");
        }
        index++;
        stack[index] = c;
    }
    char pop() {
        if (isEmpty()) {
            throw invalid_argument("stack empty");
        }
        char topElement = stack[index];
        stack[index] = NULL;
        index--;
        return topElement;
    }

    char top() {
        if (isEmpty()) {
            throw invalid_argument("stack is empty");
        }
        return stack[index];
    }
    bool isEmpty() {
        return index == -1;
    }
    bool isFull() {
        return index >= 1000;
    }
    ~Stack() {};
};

#endif /* Stack_hpp */
