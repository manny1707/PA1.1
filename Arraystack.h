//
//  Arraystack.h
//  Project 1
//
//  Created by Manuel Marroquin on 9/30/19.
//  Copyright © 2019 Manuel Marroquin. All rights reserved.
//

#ifndef Arraystack_h
#define Arraystack_h

#include "Stack.h"

template<class Type>
class ArrayStack : public AbstractStack<Type>
{
public:
    ArrayStack() : AbstractStack<Type>() {};
    ArrayStack(int cap) : AbstractStack<Type>(cap) {};
    void push ( Type e ){
        if (this->topvalue == this->capacity-1){
            Type * temp  = new Type[this->capacity];
            for (int i = 0; i < this->capacity; i++){
                temp[i] = this->array[i];
            }
            delete[] this->array;
            this->array = new Type[this->capacity + 10]; //hard coding it to grow by 5 every time it caps
            for (int i = 0; i < this->capacity; i++){
                this->array[i] = temp[i];
            }
            this->capacity = this->capacity + 5;
            this->topvalue++;
            this->array[this->topvalue] = e;
            delete[] temp;
        }
        else {
            this->topvalue++;
            this->array[this->topvalue] = e;
        }
    }

};


#endif /* Arraystack_h */
