//
//  List.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
#include "Coordinate.h"

class List
{
public:
    List(int size);   // 构造函数
    ~List();         // 析构销毁函数
    void ClearList();   // 清空
    bool listEmpty();  // 判空
    int ListLenght();   // 长度 
    bool GetElem(int i,Coordinate *e); // 获取当前下标数据
    int  LocateElem(Coordinate *e);  //寻找第一个满足e的数据元素的位序
    bool PriorElem(Coordinate *currentElem,Coordinate *preElem);// 获得指定元素的前驱
    bool NextElem(Coordinate *currentElem,Coordinate *nextElem);// 获得指定元素的后继
    bool ListInsert(int i,Coordinate *e);   // 插入一个元素
    bool ListDelete(int i,Coordinate *e);  // 删除一个元素
    void ListTraverse();  // 遍历
private:
    Coordinate *m_pList;      //  指针
    int m_iSize;       //  存储空间大小
    int m_iLenght;      //  长度
};


#endif /* List_h */
