//
//  Coordinate.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/8.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef Coordinate_h
#define Coordinate_h

#include <stdio.h>
#include <ostream>
using namespace std;

class Coordinate
{
    friend ostream &operator << (ostream &out,Coordinate &coor);
public:
    Coordinate(int x = 0,int y = 0);
    void printCoordinate();
    bool operator==(Coordinate &coor); // 运算符重载
    
private:
    int m_iX;
    int m_iY;
};


#endif /* Coordinate_h */
