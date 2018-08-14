
//
//  Map.cpp
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/10.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#include "Map.h"
#include <iostream>
using namespace std;

Map::Map(int capacity)
{
    m_iCapacity = capacity;
    m_iNodeCout = 0;
    m_pNodeArray = new NodeMap[m_iCapacity];
    m_pMatrix = new int[m_iCapacity * m_iCapacity];
    memset(m_pMatrix, 0,m_iCapacity * m_iCapacity * sizeof(int));
}

Map::~Map()
{
    delete []m_pNodeArray;
    delete []m_pMatrix;
}
bool Map::addNode(NodeMap *pNode)
{
    m_pNodeArray[m_iNodeCout].m_cData = pNode->m_cData;
    m_iNodeCout++;
    return true;
}
void Map::reserNode()
{
    for (int i = 0; i < m_iNodeCout; i++) {
        m_pNodeArray[i].m_bIsVisited = false;
    }
}
bool Map::setValueToMatrixForDirectedGroph(int row,int col,int val) // 为有向图设置邻接矩阵
{
    if (row < 0 || row >= m_iCapacity) {
        return false;
    }
    if (col < 0 || col >= m_iCapacity) {
        return false;
    }
    m_pMatrix[row * m_iCapacity + col] = val;
    return true;
}
bool Map::setValueToMatrixForUnDirectedGroph(int row,int col,int val) // 为无向图设置邻接矩阵
{
    if (row < 0 || row >= m_iCapacity) {
        return false;
    }
    if (col < 0 || col >= m_iCapacity) {
        return false;
    }
    m_pMatrix[row * m_iCapacity + col] = val;
    m_pMatrix[col * m_iCapacity + row] = val;
    return true;
}
bool Map::getValueFrommatrix(int row,int col,int &val) //从矩阵中获取权值
{
    if (row < 0 || row >= m_iCapacity) {
        return false;
    }
    if (col < 0 || col >= m_iCapacity) {
        return false;
    }
    val = m_pMatrix[row + m_iCapacity + col];
    return true;
}
void Map::printMatrix()   // d打印邻接矩阵
{
    for (int i = 0; i < m_iCapacity; i++) {
        for (int k = 0; k < m_iCapacity; k++) {
            cout << m_pMatrix[i * m_iCapacity + k] << " ";
        }
        cout << endl;
    }
}
void Map::depthFirstTraverse(int nodeIndex) // 深度优先遍历
{
    int value = 0;
    cout << m_pNodeArray[nodeIndex].m_cData << endl;
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    
    for (int i = 0; i < m_iCapacity; i++) {
        getValueFrommatrix(nodeIndex, i, value);
        if (value == 1) {
            if (m_pNodeArray[i].m_bIsVisited) {
                continue;
            }else{
                depthFirstTraverse(i);
            }
        }else{
            continue;
        }
    }
}
void Map::breadthFistTraverse(int nodeIndex) // 广度优先遍历
{
    cout << m_pNodeArray[nodeIndex].m_cData << " ";
    m_pNodeArray[nodeIndex].m_bIsVisited = true;
    vector<int> currentVec; // vector 标准模板库
    currentVec.push_back(nodeIndex);
    breadthFirsttraverseImpl(currentVec);
}

void Map::breadthFirsttraverseImpl(vector <int> preVec)  //广度优先便利实现函数
{
    int value = 0;
    vector<int>curVec;
    for (int j = 0; j < (int)preVec.size(); j++)
    {
        for (int i = 0; i < m_iCapacity; i++) {
            getValueFrommatrix(preVec[j], i, value);
            if (value != 0) {
                if (m_pNodeArray[i].m_bIsVisited) {
                    continue;
                }else{
                    cout << m_pNodeArray[i].m_cData << " ";
                    m_pNodeArray[i].m_bIsVisited = true;
                    
                    curVec.push_back(i); // 保存
                    
                }
            }
        }
    }
    if (curVec.size() == 0) {
        return;
    }else{
        breadthFirsttraverseImpl(curVec);
    }
}
