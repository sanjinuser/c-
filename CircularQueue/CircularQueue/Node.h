//
//  Node.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef Node_h
#define Node_h

#include <stdio.h>
#include "Person.h"
class Node
{
public:
    Person data; //  数据域
    Node *next; // 指针域
    void printNode(); 
    
};


#endif /* Node_h */
