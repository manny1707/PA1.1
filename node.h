//
//  node.h
//  Project 1
//
//  Created by Manuel Marroquin on 9/30/19.
//  Copyright © 2019 Manuel Marroquin. All rights reserved.
//

#ifndef node_h
#define node_h
template <class Type>
struct Node{
    
    Node * next;
    Type data;
    Node (): data(0), next(nullptr){}
    Node (Type e): data(e),next(nullptr){}
    ~Node(){}
    
};


#endif /* node_h */
