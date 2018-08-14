//
//  NodeList.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//  单链表
#ifndef NodeList_h
#define NodeList_h

#include <stdio.h>
#include "Node.h"
class NodeList
{
public:
    NodeList();   // 构造函数
    ~NodeList();         // 析构销毁函数
    void ClearList();   // 清空
    bool listEmpty();  // 判空
    int ListLenght();   // 长度
    bool GetElem(int i, Node*pNode); // 获取当前下标数据
    int  LocateElem(Node *pNode);  //寻找第一个满足e的数据元素的位序
    bool PriorElem(Node *pcurrentNode,Node *preNode);// 获得指定元素的前驱
    bool NextElem(Node *pcurrentNode,Node *pnextNode);// 获得指定元素的后继
    bool ListInsert(int i,Node *pNode);   // 插入一个元素
    bool ListDelete(int i,Node *pNode);  // 删除一个元素
    bool ListInsertHeader(Node *pNode);   // 插入一个元素头部
    bool ListInsertTail(Node *pNode);  // 插入一个元素尾部
    void ListTraverse();  // 遍历
private:
    Node *m_pList;      //  指针
   // int m_iSize;       //  存储空间大小  这个顺序表需要 链表就不需要要了
    int m_iLenght;      //  长度
};


#endif /* NodeList_h */
