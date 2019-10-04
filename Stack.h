//
//  Header.h
//  Project 1
//
//  Created by Manuel Marroquin on 9/23/19.
//  Copyright © 2019 Manuel Marroquin. All rights reserved.
//

#ifndef ABSTRACT_STACK_H
#define ABSTRACT_STACK_H

# include <iostream>
# include <exception>
//# include "Arraystack.h"
//# include "DoublingStack.h"

using namespace std;

template <class Type>
class AbstractStack
{
protected:
    int capacity;
    int topvalue = -1;
    Type * array;

public:
    AbstractStack() {}
    AbstractStack(int cap) {
        capacity = cap;
        array = new Type[capacity];
    }

    ~AbstractStack() {}

   bool isEmpty(void) {
       if (topvalue == -1){
           return true;
       }
       else {
           return false;
       }
   }

   int size(void) { return topvalue+ 1; }

    Type top() /*throw(exception)*/ {
        if (topvalue != -1){
            return array[topvalue];
        }
        else {
            throw runtime_error("There exists no top value because the list is empty.");
        }
        
    }

   Type pop() /*throw(exception)*/ {
       
       if(topvalue == -1){
           throw runtime_error("Nothing to pop because the list is empty.");
       }
       
       
       if (topvalue != -1){
           Type x = array[topvalue];
           array[topvalue] = 0;
           topvalue -= 1;
           return x;
       }
       else {
           return array[topvalue];
       }
   }
   
    virtual void push (Type e) = 0;
};



#endif
