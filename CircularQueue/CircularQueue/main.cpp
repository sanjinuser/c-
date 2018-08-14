//
//  main.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include <iostream>
#include "MyQueue.h"
#include "Custumer.h"
#include "MyStack.h"
#include "Coordinate.h"
#include "List.h"
#include "NodeList.h"
#include "Tree.h"
#include "NodeTree.h"
#include "Map.h"

using namespace std;

#define BINARY 2
#define OCTONARY 8
#define HEXAECIMAL 16

int main(int argc, const char * argv[]) {
    // insert code here...
/*
 数据结构---环形队列 *******************************************************
*/
    
//    MyQueue *queue = new MyQueue(4);
//    queue->EnQueue(10);
//    queue->EnQueue(11);
//    queue->EnQueue(12);
//    queue->EnQueue(13);
//   // queue->EnQueue(14);
//
//    queue->QueueTraverse();
//
//    cout << endl;
//
//    int ele = 0;
//    queue->DeQueue(ele);
//    cout << endl;
//    cout << ele << endl;
//
//    queue->DeQueue(ele);
//    cout << endl;
//    cout << ele << endl;
//    cout << endl;
//
//    queue->QueueTraverse();
//
//    queue->ClearQueue();
//
//    queue->QueueTraverse();
//    cout << endl;
//
//    queue->EnQueue(14);
//    queue->EnQueue(15);
//    queue->QueueTraverse();
//
//    delete queue;
//    queue = NULL;
//
    
//    MyQueue *p = new MyQueue(4);
//    Custumer c1("zhangsan",4);
//    Custumer c2("lisi",5);
//    Custumer c3("wangwu",6);
//
//    p->EnQueue(c1);
//    p->EnQueue(c2);
//    p->EnQueue(c3);
//
//    p->QueueTraverse();
//
//    Custumer c4("",0);
//    p->DeQueue(c4);
//
//    c4.printInfo();
//
//    p->QueueTraverse();
////
    /* 数据结构-----栈 ****************************************************
     */
//    MyStack *sta = new MyStack(5);
//    
//    cout << sta->stackLenght() << endl;
//    
//    sta->push(Coordinate(1,2));// 底
//    sta->push(Coordinate(2,4));
//    sta->push(Coordinate(3,6)); // 顶
//    
//    cout << sta->stackLenght() << endl;
//    sta->stackTraverse(true);
//    
//    Coordinate elem = 3;
//    sta->pop(elem);
//    
//    cout << endl;
//    cout << &elem << endl;
//    
//    sta->stackTraverse(true);
//    
//   // sta->clearStack();
//    
//    cout << sta->stackLenght() << endl;
//    
//    
//    if(sta->stackEmpty()){
//        cout << "栈为空" << endl;
//    }
//    if (sta->stackFull()) {
//        cout << "栈为满" << endl;
//    }
//    delete sta;
//    sta = NULL;
    
    // 通用模板 栈
    
//    MyStack<char> *psta = new MyStack<char>(5);
////    psta->push(Coordinate(1,2));
////    psta->push(Coordinate(3,5));
//
//    psta->push('f');
//
//    psta->stackTraverse(true);
//    cout << endl;
//
    // 栈应用---数制转化
//    char num[] = "0123456789ABCDEF";
//    MyStack<int> *sts = new MyStack<int>(30);
//
//    int N = 1348;
//    cout << "输入一个数字:";
//    cin >> N;
//
//    int mod = 0;
//
//    while (N != 0) {
//
//        mod = N % HEXAECIMAL;
//        sts->push(mod);
//        N = N / HEXAECIMAL;
//    }
//
//   // sts->stackTraverse(false);
////    for (int i = sts->stackLenght()-1; i>=0; i--) {
////
////    }
//    int elem =0;
//    while (!sts->stackEmpty()) {
//        sts->pop(elem);
//        cout << num[elem];
//    }
//    cout << endl;
//    delete sts;
//    sts = NULL;
//
    
    // 栈应用 括号匹配
    //  字符串 【()】 [()[()]]
//
//    MyStack<char> *pstack = new MyStack<char>(30);
//    MyStack<char> *pneedstack = new MyStack<char>(30);
//
//    char str[] = "[[]()]";
//    char currentNeed = 0;
//    for (int i= 0; i < strlen(str); i++) {
//        if (str[i] != currentNeed) {
//            pstack->push(str[i]);
//            switch (str[i]) {
//                case '[':
//                {
//                    if (currentNeed != 0) {
//                        pneedstack->push(currentNeed);
//                    }
//                    currentNeed = ']';
//                }
//                    break;
//                case '(':
//                {
//                    if (currentNeed != 0) {
//                        pneedstack->push(currentNeed);
//                    }
//                    currentNeed = ')';
//                }
//                    break;
//                default:{
//                    cout << "字符串括号不匹配" << endl;
//                    return 0;
//                }
//                    break;
//            }
//        }else{
//            char elem;
//            pstack->pop(elem);
//            if(pneedstack->pop(currentNeed)){
//                currentNeed = 0;
//            }
//        }
//    }
//
//    if (pstack->stackEmpty()) {
//        cout << "字符串括号匹配" << endl;
//    }else{
//        cout << "字符串括号不匹配" << endl;
//
//    }
//
//    delete pstack;
//    delete pneedstack;
//    pstack = NULL;
//    pneedstack = NULL;
//
    /*
     线性表************************************************************8
    */
    //  顺序表   3 5 7 2 9 1 8
    // 前驱  后继
//    List *list1 = new List(10);
//
////    int lenght = list1->ListLenght();
////    cout << lenght << endl;
//
//    Coordinate e1(3,5);
//    Coordinate e2(5,7);
//    Coordinate e3(7,9);
////    Coordinate e4 = 2;
////    Coordinate e5 = 9;
////    Coordinate e6 = 1;
////    Coordinate e7 = 8;
//    Coordinate temp(0,0);
//
//    list1->ListInsert(0,&e1);
//    list1->ListInsert(1,&e2);
//    list1->ListInsert(2,&e3);
//
//    list1->ListTraverse();
    
//    list1->ListInsert(3,&e4);
//    list1->ListInsert(4,&e5);
//    list1->ListInsert(5,&e6);
//    list1->ListInsert(2,&e7);
    
   // list1->ListTraverse();
//
//    int temp;
//    list1->GetElem(0, &temp);
//    cout << temp << endl;
//
//    cout << list1->LocateElem(&temp) << endl;
//
//    int temp;
//    list1->NextElem(&e4, &temp);
//    cout << temp <<endl;
//    
//    list1->PriorElem(&e4, &temp);
//    cout << temp <<endl;
    
//    int temp = 0;
//    list1->ListDelete(2, &temp);
//    //cout << "**" << temp << endl;
//
//    if (!list1->listEmpty()) {
//        cout << "不为空" << endl;
//    }
//
//    int lenght1 = list1->ListLenght();
//    cout << lenght1 << endl;
//
//    list1->ClearList();
//
//    if (list1->listEmpty()) {
//        cout << "为空" << endl;
//    }
    

    
   // list1->ListTraverse();
    
//    delete list1;
//    list1 = NULL;

//
//    NodeList *plist = new NodeList();
//
//    Node node1;
//    node1.data.name = "ttt1";
//    node1.data.phone = "111";
//
//    Node node2;
//    node2.data.name = "tttt2";
//    node2.data.phone = "2222";
//
//
////    Node node3;
////    node3.data = 5;
////
////    Node node4;
////    node4.data = 6;
//
//    plist->ListInsertHeader(&node1);
//    plist->ListInsertHeader(&node2);
////    plist->ListInsertHeader(&node3);
////    plist->ListInsertHeader(&node4);
//
//    plist->ListInsertTail(&node1);
//    plist->ListInsertTail(&node2);
////    plist->ListInsertTail(&node3);
////    plist->ListInsertTail(&node4);

//    Node node5;
//    node5.data = 7;
//
//    plist->ListInsert(4, &node5);
    
    
//    Node temp;
////    plist->ListDelete(1, &temp);
////    cout << "删除" << temp.data << endl;
//
//    plist->PriorElem(&node3, &temp);
//    cout << "取出来前驱" << temp.data << endl;
//
//    Node temp1;
//    plist->NextElem(&node3, &temp1);
//    cout << "取出来后继" << temp1.data << endl;
//
 //   plist->ListTraverse();
  
//    delete plist;
//    plist = NULL;
    
    /*
     链表  通讯录简单实现
     */
    
    /*
   ********************************  树  *********************************************
     
     */
    //  数组实现的二叉树
//
//    int root = 3;
//    Tree *pTree = new Tree(10,&root);
//
//    int node1 = 5;
//    int node2 = 8;
//    int node3 = 2;
//    int node4 = 6;
//    int node5 = 9;
//    int node6 = 7;
//
//    pTree->AddNode(0, 0, &node1);
//    pTree->AddNode(0, 1, &node2);
//    pTree->AddNode(1, 0, &node3);
//    pTree->AddNode(1, 1, &node4);
//    pTree->AddNode(2, 0, &node5);
//    pTree->AddNode(2, 1, &node6);
//
//    pTree->TreeTraverse();
//
//    int *temp =  pTree->SearchNode(2);
//    cout << *temp << endl;
//
//    int temp1;
//    pTree->DeleNode(3, &temp1);
//    cout << temp1 << endl;
//    pTree->TreeTraverse();
//
//    delete pTree;
//    pTree = NULL;
//
    // 链表实现的二叉树
    /*
       （0）
  5(1)       8(2)
2(3) 6(4)  9(5)  7(6)
    */
    
//    NodeTree *node1 = new NodeTree();
//    node1->data = 5;
//    node1->index = 1;
//
//    NodeTree *node2 = new NodeTree();
//    node2->data = 8;
//    node2->index = 2;
//
//    NodeTree *node3 = new NodeTree();
//    node3->data = 2;
//    node3->index = 3;
//
//    NodeTree *node4 = new NodeTree();
//    node4->data = 6;
//    node4->index = 4;
//
//    NodeTree *node5 = new NodeTree();
//    node5->data = 9;
//    node5->index = 5;
//
//    NodeTree *node6 = new NodeTree();
//    node6->data = 7;
//    node6->index = 6;
//
//    Tree *tree = new Tree();
//
//    tree->AddNode(0, 0, node1);
//    tree->AddNode(0, 1, node2);
//
//    tree->AddNode(1, 0, node3);
//    tree->AddNode(1, 1, node4);
//
//    tree->AddNode(2, 0, node5);
//    tree->AddNode(2, 1, node6);
//
//    tree->PreoreTraversal();
//    cout << endl;
////    tree->InorderTraversal();
////    cout << endl;
////    tree->PostorderTraversal();
////    cout << endl;
//
//    tree->DeleNode(2, NULL);
//    // tree->DeleNode(5, NULL);
//
//    tree->PreoreTraversal();
//    cout << endl;
//
//    delete tree;
//    tree = NULL;
//
    
    /*
     * 图***************************************图**********************************
       存储方式 1 邻接矩阵（数组）  2 邻接表（链表） 3 十字链表（链表）  4 邻接多重表（链表）
     */
    /*
          A
        /   \
       B     D
      /  \  /  \
     C    F G - H
      \  /
        E
     
     */
    
    
    
    
    //std::cout << "Hello, World!\n";
    return 0;
}
































