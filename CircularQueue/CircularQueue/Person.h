//
//  Person.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef Person_h
#define Person_h
#include <string>
#include <stdio.h>
#include <ostream>

using namespace std;

class Person
{
    friend ostream &operator<<(ostream &out ,Person &person);
public:
    string name;
    string phone;
    Person &operator = (Person &person);
    bool operator == (Person &person);
    
};


#endif /* Person_h */
