//
//  Tree.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "Tree.h"
#include <iostream>
using namespace std;

// 数组创建的树************************************数组创建的树*********************************
/*
Tree::Tree(int size,int *pRoot)  // 创建树
{
    m_iSize = size;
    m_pTree = new int(size);
    for (int i = 0; i< size; i++) {
         m_pTree[i] = 0;
    }
    m_pTree[0] = *pRoot;
}
Tree::~Tree()         //  销毁树
{
    delete []m_pTree;
    m_pTree = NULL;
}

int *Tree::SearchNode(int nodeIndex) // 根据索引找到节点
{
    if (nodeIndex < 0||nodeIndex >= m_iSize) {
        return NULL;
    }
    if(m_pTree[nodeIndex] == 0){
        return NULL;
    }
    return &m_pTree[nodeIndex];
}

bool Tree::AddNode(int nodeIndex,int direction,int *pNode) // 添加节点
{
    if (nodeIndex < 0||nodeIndex >= m_iSize) {
        return false;
    }
    if(m_pTree[nodeIndex] == 0){
        return false;
    }
    if (direction == 0) {
        if (nodeIndex * 2 + 1 >= m_iSize) {
            return false;
        }
        if(m_pTree[nodeIndex * 2 + 1] != 0){
            return false;
        }
        m_pTree[nodeIndex * 2 + 1] = *pNode;
    }
    if (direction == 1) {
        if (nodeIndex * 2 + 2 >= m_iSize) {
            return false;
        }
        if(m_pTree[nodeIndex * 2 + 2] != 0){
            return false;
        }
        m_pTree[nodeIndex * 2 + 2] = *pNode;
    }
    
    return true;
}

bool Tree::DeleNode(int nodeIndex,int *pNode) // 删除节点
{
    if (nodeIndex < 0||nodeIndex >= m_iSize) {
        return false;
    }
    if(m_pTree[nodeIndex] == 0){
        return false;
    }
    *pNode = m_pTree[nodeIndex];
    m_pTree[nodeIndex] = 0;
    return true;
}
void Tree::TreeTraverse()  // 遍历节点
{
    for (int i = 0; i < m_iSize; i++) {
        cout << m_pTree[i] << " " ;
    }
    cout << endl;
}
*/
// 链表创建的树**************************************链表创建的树*******************************
Tree::Tree()
{
    m_pRoot = new NodeTree();
}
Tree::~Tree()
{
    DeleNode(0, NULL);
   // m_pRoot->DeleNode();  这个只有一个数据成员是可以 多个就不适用
}
NodeTree *Tree::SearchNode(int nodeIndex)
{
   return  m_pRoot->SearchNode(nodeIndex);
}
bool Tree::AddNode(int nodeIndex,int direction,NodeTree *pNode)
{
   NodeTree *temp = SearchNode(nodeIndex);
    if (temp == NULL) {
        return false;
    }
    NodeTree *node = new NodeTree();
    if (node == NULL) {
        return false;
    }
    node->index = pNode->index;
    node->data = pNode->data;
    node->pParent = temp;
    
    if (direction == 0) {
        temp->pLChild = node;
    }
    if (direction == 1) {
        temp->pRChild = node;
    }
    return true;
}
bool Tree::DeleNode(int nodeIndex,NodeTree *pNode)
{
    NodeTree *temp = SearchNode(nodeIndex);
    if (temp == NULL) {
        return false;
    }
    if (pNode != NULL) {
        pNode->data = temp->data;
    }
    temp->DeleNode();
    return true;
}
void Tree::PreoreTraversal() // 前序遍历
{
    m_pRoot->PreoreTraversal();
}
void Tree::InorderTraversal()  // 中
{
    m_pRoot->InorderTraversal();
}
void Tree::PostorderTraversal() // 后
{
    m_pRoot->PostorderTraversal();
}
