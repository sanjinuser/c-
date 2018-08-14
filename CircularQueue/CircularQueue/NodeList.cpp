//
//  NodeList.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "NodeList.h"

NodeList::NodeList()  // 构造函数
{
    m_pList = new Node;
   // m_pList->data = 0;
    m_pList->next = NULL;
    m_iLenght = 0;
}
NodeList::~NodeList()
{
    ClearList();
    delete m_pList;
    m_pList = NULL;
}
bool NodeList::listEmpty()
{
    if (m_iLenght == 0) {
        return true;
    }else{
        return false;
    }
}
int NodeList::ListLenght()
{
    return m_iLenght;
}
void NodeList::ClearList()
{
    Node *currentNode = m_pList->next;
    while (currentNode != NULL) {
        Node *temp =  currentNode->next;
        delete currentNode;
        currentNode = temp;
    }
    m_pList->next = NULL;
}

bool NodeList::ListInsertHeader(Node *pNode)
{
    Node *temp = m_pList->next;
    Node *newNode = new Node;
    if (newNode == NULL) {
        return false;
    }
    newNode->data = pNode->data;
    m_pList->next = newNode;
    newNode->next = temp;
    m_iLenght++;
    return true;
}
bool NodeList::ListInsertTail(Node *pNode)
{
    Node *currenNode = m_pList; // 头结点
    while (currenNode->next != NULL) {
        currenNode = currenNode->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL) {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = NULL;
    currenNode->next = newNode;
    m_iLenght++;
    return true;
}
bool NodeList::ListInsert(int i, Node *pNode)
{
    if (i < 0 || i > m_iLenght) {
        return false;
    }
    Node *currentNode = m_pList; // 头结点
    for (int k = 0; k < i; k++) {
        currentNode = currentNode->next;
    }
    Node *newNode = new Node;
    if (newNode == NULL) {
        return false;
    }
    newNode->data = pNode->data;
    newNode->next = currentNode->next;
    currentNode->next = newNode;
    
    m_iLenght++;
    return true;
}

bool NodeList::ListDelete(int i, Node *pNode)
{
    if (i < 0 || i >= m_iLenght) {
        return false;
    }
    Node *curerntNode = m_pList; // 头结点
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++) {
        currentNodeBefore = curerntNode;
        curerntNode = curerntNode->next;
    }
    currentNodeBefore->next = curerntNode->next;
    pNode->data = curerntNode->data;
    delete curerntNode;
    curerntNode = NULL;
    
    m_iLenght--;
    return true;
}
bool NodeList::GetElem(int i, Node *pNode)
{
    if (i < 0 || i >= m_iLenght) {
        return false;
    }
    Node *curerntNode = m_pList; // 头结点
    Node *currentNodeBefore = NULL;
    for (int k = 0; k <= i; k++) {
        currentNodeBefore = curerntNode;
        curerntNode = curerntNode->next;
    }
    pNode->data = curerntNode->data;
    return true;
}
int NodeList::LocateElem(Node *pNode)
{
   Node *curerntNode = m_pList; // 头结点
    int count = 0;
    while (curerntNode->next != NULL) {
        curerntNode = curerntNode->next;
        if(curerntNode->data == pNode->data){
            return count;
        }
        count ++;
    }
    return -1;
}
bool NodeList::PriorElem(Node *pcurrentNode, Node *preNode)
{
    Node *tempNode = NULL;
    Node *curerntNode = m_pList; // 头结点
    while (curerntNode->next != NULL) {
        tempNode = curerntNode;
        curerntNode = curerntNode->next;
        if(curerntNode->data == pcurrentNode->data){
            if (tempNode == m_pList) {
                return false;
            }else{
                preNode->data = tempNode->data;
                return true;
            }
        }
    }
    return false;
}
bool NodeList::NextElem(Node *pcurrentNode, Node *pnextNode)
{
    Node *curerntNode = m_pList; // 头结点
    while (curerntNode->next != NULL) {
        curerntNode = curerntNode->next;
        if(curerntNode->data == pcurrentNode->data){
            if (curerntNode->next == NULL) {
                return false;
            }else{
                pnextNode->data = curerntNode->next->data;
                return true;
            }
        }
    }
    return false;
}
void NodeList::ListTraverse()
{
    Node *currentNode = m_pList;
    while (currentNode->next != NULL) {
        currentNode = currentNode->next;
        currentNode->printNode();
    }
}

