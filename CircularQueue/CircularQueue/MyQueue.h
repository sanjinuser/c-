//
//  MyQueue.hpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//




#ifndef MyQueue_h
#define MyQueue_h

#include <stdio.h>
#include "Custumer.h"

class MyQueue
{
public:
    
    MyQueue(int queueCapacity); // 创建队列
    virtual ~MyQueue();   //销毁队列
    void ClearQueue();   // 清空队列
    bool QueueEmpty();   // 判空队列
    bool QueueFull();    // 判满队列
    int QueueLenght();   // 队列长度
    bool EnQueue(Custumer element); // 新元素入队列
    bool DeQueue(Custumer &element); // 新元素出队列
    void QueueTraverse(); // 遍历队列
private:
    Custumer *m_pQueue;   // 队列数组指针
    int m_iQueueLen;  // 队列元素个数
    int m_iQueueCapacity;  // 队列数组容量
    int m_iTail;    // 队尾
    int m_iHead;     // 队头
};

#endif /* MyQueue_h */
