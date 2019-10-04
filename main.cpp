//
//  main.cpp
//  Project 1
//
//  Created by Manuel Marroquin on 9/23/19.
//  Copyright © 2019 Manuel Marroquin. All rights reserved.
//

#include "DoublingStack.h"
#include "Arraystack.h"
#include "LinkedList.h"
#include <iostream>
#include <exception>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();
    ArrayStack<int> stack(10);
    //DoubleStack<int> stack(1);
    //LinkedList<int> stack;

    
    for (int i = 0; i < 1000000; ++i){
        stack.push(i);
    }

    cout << stack.size() << endl;
    
    try{ cout << stack.top() << endl; }
       
    catch(exception& e) { cout << e.what() << endl; }
    
    try{ cout <<stack.pop() << endl; }
    
    catch(exception& e) { cout << e.what() << endl;}
    
    
//    LinkedList<int> stack;
//
//
//    cout << stack.isEmpty() << endl;

//    cout << stack.pop() << endl;
//    cout << stack.top() << endl;
//    cout << stack.isEmpty() << endl;
//    cout << stack.size() << endl;
//
//    timer.stop();
//    cout << timer.seconds() << endl;
    
    auto finish = chrono::high_resolution_clock::now();
    auto elapsed = finish - start;
    cout << "Elapsed time: " << elapsed.count() << " nano seconds \n" << endl;
    return 0;
}
