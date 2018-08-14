//
//  Custumer.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "Custumer.h"
#include <iostream>
using namespace std;

Custumer::Custumer(string name,int age)
{
    m_strName = name;
    m_iAge = age;
    
}
void Custumer::printInfo() const
{
    cout << "名字" << m_strName << endl;
    cout << "年龄" << m_iAge << endl;
    cout << endl;
}
