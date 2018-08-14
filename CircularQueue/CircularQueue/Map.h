//
//  Map.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/10.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef Map_h
#define Map_h

#include <stdio.h>
#include "NodeMap.h"
#include <vector>
using namespace std;
class Map
{
public:
    Map(int capacity);
    ~Map();
    bool addNode(NodeMap *pNode);  // 向图中加入顶点
    void reserNode();        // 重置顶点
    bool setValueToMatrixForDirectedGroph(int row,int col,int val = 1); // 为有向图设置邻接矩阵
    bool setValueToMatrixForUnDirectedGroph(int row,int col,int val = 1); // 为无向图设置邻接矩阵
    
    void printMatrix(); // d打印邻接矩阵
    
    void depthFirstTraverse(int nodeIndex); // 深度优先遍历
    void breadthFistTraverse(int nodeIndex); // 广度优先遍历
    
private:
    bool getValueFrommatrix(int row,int col,int &val);   //从矩阵中获取权值
    void breadthFirsttraverseImpl(vector <int> preVec);  //广度优先便利实现函数
private:
    int m_iCapacity;    // 图中最多可以容纳的顶点数
    int m_iNodeCout;     //  已经添加的顶点（节点）个数
    NodeMap *m_pNodeArray;  // 用来存放顶点数组
    int *m_pMatrix;   // 用来存放邻接矩阵
};



#endif /* Map_h */
