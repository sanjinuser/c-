//
//  MyStack.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef MyStack_h
#define MyStack_h
#include "Coordinate.h"
#include <stdio.h>
using namespace std;

template <typename T>
class MyStack{
public:
    MyStack(int size); // 分配内存初始化栈控件 设置栈容量 和栈顶
    ~MyStack();  // 回收栈空间内存
    bool stackEmpty(); // 判断栈是不是空的
    bool stackFull(); // 判断栈是不是满的
    void clearStack(); // 清空栈
    int stackLenght();  // 已有元素的个数
    bool push(T elem); // 元素入栈 栈顶上升
    bool pop(T &elem); // 元素出栈 栈顶下降
    void stackTraverse(bool isFromBottom); // 遍历栈中的所有元素
private:
    T *m_pBuffer; // 栈空间指针
    int m_iSize; // 栈容量
    int m_iTop; // 栈顶 栈中元素个数
};

template <typename  T>
MyStack<T>::MyStack(int size)
{
    m_iSize = size;
    m_pBuffer = new T[m_iSize];
    m_iTop = 0;
}
template <typename  T>
MyStack<T>::~MyStack()
{
    delete []m_pBuffer;
    m_pBuffer = NULL;
}
template <typename  T>
bool MyStack<T>::stackEmpty()// 判断栈是不是空的
{
    if (0 == m_iTop ) {
        return true;
    }else{
        return false;
    }
}
template <typename  T>
bool MyStack<T>::stackFull() // 判断栈是不是满的
{
    if (m_iSize == m_iTop) {
        return true;
    }
    return false;
}
template <typename  T>
void MyStack<T>::clearStack()// 清空栈
{
    m_iTop = 0;
}
template <typename  T>
int MyStack<T>::stackLenght() // 已有元素的个数
{
    return m_iTop;
}
template <typename  T>
bool MyStack<T>::push(T elem) // 元素入栈 栈顶上升
{
    if (stackFull()) {
        return false;
    }
    m_pBuffer[m_iTop] = elem;
    m_iTop++;
    return true;
}
template <typename  T>
bool MyStack<T>::pop(T &elem) // 元素出栈 栈顶下降
{
    if (stackEmpty()) {
        return false;
    }
    m_iTop--;
    elem = m_pBuffer[m_iTop];
    return true;
}
template <typename  T>
void MyStack<T>::stackTraverse(bool isFromBottom) // 遍历栈中的所有元素
{
    if (isFromBottom) {
        for (int i = 0;i < m_iTop;i++ ) {
            cout << m_pBuffer[i];
            //  m_pBuffer[i].printCoordinate();
            //  cout << ",";
        }
    }else{
        for (int i = m_iTop-1;i>=0 ;i-- ) {
            cout << m_pBuffer[i];
            // m_pBuffer[i].printCoordinate();
            // cout << ",";
        }
    }
    
}


#endif /* MyStack_h */
