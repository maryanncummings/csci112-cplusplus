/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.cpp
 * Author: k57h721
 * 
 * Created on April 4, 2019, 11:10 AM
 */
#include <iostream>
using namespace std;
#include "stack.h"

stack::stack() {
    top = EMPTY;
    
}

void stack::push(int num) {
    nums[++top] = num;
    
}

int stack::pop() {
    
    return nums[top--];
    
    
}

bool stack::isEmpty() {
    if (top == EMPTY) {
        return true;
    }
    else {
        return false;
    }
}

bool stack::isFull() {
    if (top == SIZE) {
        return true;
    }
    else {
        return false;
    }
}

void stack::displayItems() {
    if (!isEmpty()) {
        for (int i = top; i >= 0; --i) {
            cout << "stack element: " << nums[i] << endl;
        }
    }
}   
    

