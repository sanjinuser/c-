//
//  MyQueue.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "MyQueue.h"

#include <iostream>
using namespace std;

MyQueue::MyQueue(int queueCapacity) // 创建队列
{
    m_iQueueCapacity = queueCapacity;
    m_pQueue = new Custumer[m_iQueueCapacity];
    ClearQueue();
}
MyQueue::~MyQueue()   //销毁队列
{
    delete []m_pQueue;
    m_pQueue =  NULL;
}
void MyQueue::ClearQueue()   // 清空队列
{
    m_iHead = 0;
    m_iTail = 0;
    m_iQueueLen = 0;
}
bool MyQueue::QueueEmpty()  // 判空队列
{
    if (m_iQueueLen == 0) {
        return true;
    }else{
        return false;
    }
   // return m_iQueueLen==0?true:false;
}
bool MyQueue::QueueFull() // 判满队列
{
    if (m_iQueueLen == m_iQueueCapacity) {
        return true;
    }
    return false;
}
int MyQueue::QueueLenght()  // 队列长度{
{
    return m_iQueueLen;
}
bool MyQueue::EnQueue(Custumer element) // 新元素入队列
{
    if (QueueFull()) {
        return false;
    }else{
        m_pQueue[m_iTail] = element;
        m_iTail++;
        m_iTail = m_iTail % m_iQueueCapacity;
        m_iQueueLen++;
        return true;
    }
    
}
bool MyQueue::DeQueue(Custumer &element) // 新元素出队列 这里的element 必须是引用
{
    //cout << element << endl;
    if (QueueEmpty()) {
        return false;
    }else{
        element = m_pQueue[m_iHead];
        m_iHead++;
        m_iHead = m_iHead % m_iQueueCapacity;
        m_iQueueLen--;
        return true;
    }
}
void MyQueue::QueueTraverse() // 遍历队列
{
    for (int i = m_iHead; i< m_iQueueLen+m_iHead;i++ ) {
        m_pQueue[i % m_iQueueCapacity].printInfo();
        cout << "前面还有" << (i-m_iHead) << endl;
    }
    cout << endl;
}
