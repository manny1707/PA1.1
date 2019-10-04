//
//  LinkedList.h
//  Project 1
//
//  Created by Manuel Marroquin on 9/30/19.
//  Copyright © 2019 Manuel Marroquin. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h
#include "node.h"
template <class type>
class LinkedList {
public:
    Node<type> *head;
    Node<type> *tail;
    int capacity  = 0;
    
    
    LinkedList(){
        head = nullptr;
        
    }
    
    ~LinkedList(){
        Node<type> * current = this->head;
        while (current != nullptr){
            Node<type> * deleteNode = current;
            current = current->next;
            delete deleteNode;
        }
        head = nullptr;
    }
    
    
    void push(int e){
        Node<type> * newNode = new Node<type>(e);
        if (head == nullptr ){head = newNode; capacity+= 1;} // no nodes
        else{ //all other nodes
            newNode->next = head;
            head = newNode;
            capacity += 1;
        }
        
        
        
    }
    type top(){
        if (head != nullptr){
        return head->data;
        }
        else {
           throw runtime_error("There exists no top value because the list is empty.");
        }
    }
    type pop()
    {
        if (head != nullptr){
            Node<type> *temp = new Node<type>();
        temp = head;
        type e = temp->data;
        head = head->next;
        delete temp;
            --capacity;
        return e;
        
        }
        else {
            throw runtime_error("Nothing to pop because the list is empty.");
        }
    }
    
    int size(){
        return capacity;
    }
    
    bool isEmpty(){
        if (head == nullptr){
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
    

    
};

#endif /* LinkedList_h */
