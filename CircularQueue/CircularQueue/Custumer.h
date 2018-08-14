//
//  Custumer.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef Custumer_h
#define Custumer_h

#include <string>
using namespace std;

class Custumer {
public:
    Custumer(string name="",int age=0);
    void printInfo() const;
private:
    string m_strName;
    int m_iAge;
};
#endif /* Custumer_h */
