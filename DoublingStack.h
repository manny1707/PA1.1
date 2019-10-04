//
//  DoublingStack.h
//  Project 1
//
//  Created by Manuel Marroquin on 9/30/19.
//  Copyright © 2019 Manuel Marroquin. All rights reserved.
//

#ifndef DoublingStack_h
#define DoublingStack_h
#include "Stack.h"

template<class Type>
class DoubleStack : public AbstractStack<Type>
{
public:
    DoubleStack() : AbstractStack<Type>() {};
    DoubleStack(int cap) : AbstractStack<Type>(cap) {};
    void push ( Type e ){
        if (this->topvalue == this->capacity-1){
            Type *temp = new Type[this->capacity];
            
            for (int i = 0; i < this->capacity; i++){
                temp[i] =  this->array[i];
            }
            //delete[] this->array; //WHY CANT I DELETE THE PREVIOUS ARRAY
            this->array = new Type[this->capacity * 2];
            for (int i = 0; i < this->capacity; i++){
                this->array[i] = temp[i];
            }
            this->capacity = this->capacity * 2;
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

#endif /* DoublingStack_h */
