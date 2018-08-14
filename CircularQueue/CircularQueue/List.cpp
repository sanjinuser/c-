//
//  List.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "List.h"
#include <iostream>
using namespace std;

List::List(int size)   // 构造函数
{
    m_iSize = size;
    m_pList = new Coordinate[m_iSize];
    m_iLenght = 0;
}
List::~List()        // 析构销毁函数
{
    delete []m_pList;
    m_pList = NULL;
}
void List::ClearList()   // 清空
{
    m_iLenght = 0;
}
 bool List::listEmpty()  // 判空
{
    if (m_iLenght == 0) {
        return true;
    }
    else{
        return false;
    }
   // return m_iLenght==0?true:false;
}
int List::ListLenght()  // 长度
{
    return m_iLenght;
}
 bool List::GetElem(int i,Coordinate *e) // 获取当前下标数据
{
    if(i < 0 || i>=m_iSize)
    {
        return false;
    }else{
        *e =  m_pList[i];
        return true;
    }
}
int List::LocateElem(Coordinate *e)
{
    for (int i = 0; i < m_iLenght; i++) {
        if (m_pList[i] == *e){  
            return i;
        }
    }
    return -1;
}
bool List::PriorElem(Coordinate *currentElem,Coordinate*preElem)// 获得前驱
{
    int temp = LocateElem(currentElem);
    if (temp == -1) {
        return false;
    }else{
        if (temp == 0) {
            return false;
        }else{
            *preElem = m_pList[temp-1];
            return true;
        }
    }
}
bool List::NextElem(Coordinate *currentElem,Coordinate*nextElem)// 获得指定元素的后继
{
    int temp = LocateElem(currentElem);
    if (temp == -1) {
        return false;
    }else{
        if (temp == m_iLenght-1) {
            return false;
        }else{
            *nextElem = m_pList[temp+1];
            return true;
        }
    }
}
void List::ListTraverse() // 遍历
{
    for (int i = 0; i < m_iLenght; i++) {
        cout << m_pList[i] << endl;
       // m_pList[i].printCoordinate();
    }
    cout << endl;
   // cout << "打印" << m_pList[0];
}
bool List::ListInsert(int i,Coordinate *e)   // 插入一个元素
{
    if (i < 0||i > m_iLenght) {
        return false;
    }
    for (int k = m_iLenght-1; k >= i; k--) {
        m_pList[k+1] = m_pList[k];
    }
    m_pList[i] = *e;
    m_iLenght++;
    //cout << "插入" << m_pList[i];
    return true;
}
bool List::ListDelete(int i,Coordinate *e)  // 删除一个元素
{
    if (i < 0||i >= m_iLenght) {
        return false;
    }
    *e = m_pList[i];
    for (int k = i+1; k < m_iLenght;k++) {
        m_pList[k-1] = m_pList[k];
    }
    m_iLenght--;
    return true;
}
