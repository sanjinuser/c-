

//
//  Person.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "Person.h"

Person &Person::operator = (Person &person)
{
    this->name = person.name;
    this->phone = person.phone;
    return *this;
}

bool Person::operator == (Person &person)
{
    if (this->name == person.name && this->phone == person.phone) {
        return true;
    }
    return false;
}

ostream &operator << (ostream &out ,Person &person)
{
    out << person.name << "--------" << person.phone << endl;
    return out;
}
