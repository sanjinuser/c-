
//
//  NodeTree.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/10.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "NodeTree.h"
#include <iostream>
using namespace std;

NodeTree::NodeTree(){
    index = 0;
    data = 0;
    pLChild = NULL;
    pRChild = NULL;
    pParent = NULL;
}
NodeTree *NodeTree::SearchNode(int nodeIndex)
{
    if (this->index == nodeIndex) {
        return this;
    }
    NodeTree *temp = NULL;
    if (this->pLChild != NULL) {
        if (this->pLChild->index == nodeIndex) {
            return this->pLChild;
        }else{
          temp =  this->pLChild->SearchNode(nodeIndex);
            if (temp != NULL) {
                return temp;
            }
        }
    }
    if (this->pRChild != NULL) {
        if (this->pRChild->index == nodeIndex) {
            return this->pRChild;
        }else{
           temp = this->pRChild->SearchNode(nodeIndex);
            return temp;
        }
    }
    return NULL;
}
void NodeTree::DeleNode()
{
    if (this->pLChild != NULL) {
        this->pLChild->DeleNode();
    }
    if (this->pRChild != NULL) {
        this->pRChild->DeleNode();
    }
    if (this->pParent != NULL) {
        if(this->pParent->pLChild == this)
        {
            this->pParent->pLChild = NULL;
        }
        if(this->pParent->pRChild == this)
        {
            this->pParent->pRChild = NULL;
        }
    }
    delete this;
}
void NodeTree::PreoreTraversal()  // 前序遍历
{
    cout << this->index << "   " << this->data << endl;
    if (this->pLChild != NULL) {
        this->pLChild->PreoreTraversal();
    }
    if (this->pRChild != NULL) {
        this->pRChild->PreoreTraversal();
    }
}
void NodeTree::InorderTraversal() // 中序遍历
{
    if (this->pLChild != NULL) {
        this->pLChild->InorderTraversal();
    }
    cout << this->index << "   " << this->data << endl;
    if (this->pRChild != NULL) {
        this->pRChild->InorderTraversal();
    }
}
void NodeTree::PostorderTraversal() // 后序遍历
{
    if (this->pLChild != NULL) {
        this->pLChild->PostorderTraversal();
    }
    if (this->pRChild != NULL) {
        this->pRChild->PostorderTraversal();
    }
    cout << this->index << "   " << this->data << endl;
}




