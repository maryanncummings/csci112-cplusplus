/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stack.h
 * Author: k57h721
 *
 * Created on April 4, 2019, 11:10 AM
 */

#ifndef STACK_H
#define STACK_H

#define SIZE 40
#define EMPTY -1

class stack {
public:
    stack();
    void push(int);
    int pop();
    bool isEmpty();
    bool isFull();
    void displayItems();
     
private:
    int nums[SIZE];
    int top;
};

#endif /* STACK_H */

