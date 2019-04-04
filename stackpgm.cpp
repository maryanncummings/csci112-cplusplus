/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: k57h721
 *
 * Created on April 4, 2019, 11:10 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include "stack.h"
/*
 * 
 */
int main(int argc, char** argv) {
    stack stk;
    stk.push(2);
    stk.push(1);
    stk.displayItems();
    cout << "popping off one: " << stk.pop() << endl;
    if (!stk.isEmpty()) {
        cout << "popping off another: " << stk.pop() << endl;
    }
    if (stk.isEmpty()) {
        cout << "Stack is now empty\n";
    }
    return 0;
}

