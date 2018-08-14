//
////
////  MyStack.cpp
////  CircularQueue
////
////  Created by 于鑫 on 2018/8/8.
////  Copyright © 2018年 于鑫. All rights reserved.
////
//
//#include "MyStack.h"
//#include <iostream>
//using namespace std;
//template <typename  T>
//MyStack<T>::MyStack(int size)
//{
//    m_iSize = size;
//    m_pBuffer = new T[m_iSize];
//    m_iTop = 0;
//}
//template <typename  T>
//MyStack<T>::~MyStack()
//{
//    delete []m_pBuffer;
//    m_pBuffer = NULL;
//}
//template <typename  T>
//bool MyStack<T>::stackEmpty()// 判断栈是不是空的
//{
//    if (0 == m_iTop ) {
//        return true;
//    }else{
//        return false;
//    }
//}
//template <typename  T>
//bool MyStack<T>::stackFull() // 判断栈是不是满的
//{
//    if (m_iSize == m_iTop) {
//        return true;
//    }
//    return false;
//}
//template <typename  T>
// void MyStack<T>::clearStack()// 清空栈
//{
//    m_iTop = 0;
//}
//template <typename  T>
//int MyStack<T>::stackLenght() // 已有元素的个数
//{
//    return m_iTop;
//}
//template <typename  T>
//bool MyStack<T>::push(T elem) // 元素入栈 栈顶上升
//{
//    if (stackFull()) {
//        return false;
//    }
//    m_pBuffer[m_iTop] = elem;
//    m_iTop++;
//    return true;
//}
//template <typename  T>
//bool MyStack<T>::pop(T &elem) // 元素出栈 栈顶下降
//{
//    if (stackEmpty()) {
//        return false;
//    }
//    m_iTop--;
//    elem = m_pBuffer[m_iTop];
//    return true;
//}
//template <typename  T>
//void MyStack<T>::stackTraverse(bool isFromBottom) // 遍历栈中的所有元素
//{
//   if (isFromBottom) {
//      for (int i = 0;i < m_iTop;i++ ) {
//          cout << m_pBuffer[i];
//        //  m_pBuffer[i].printCoordinate();
//        //  cout << ",";
//      }
//    }else{
//    for (int i = m_iTop-1;i>=0 ;i-- ) {
//         cout << m_pBuffer[i];
//        // m_pBuffer[i].printCoordinate();
//        // cout << ",";
//     }
//    }
//
//}

