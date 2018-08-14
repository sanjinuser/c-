//
//  Tree.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/9.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef Tree_h
#define Tree_h

#include <stdio.h>
#include "NodeTree.h"

//  数组创建的树
/*
class Tree
{
public:
    Tree(int size,int *pRoot);  // 创建树
    ~Tree();         //  销毁树
    int *SearchNode(int nodeIndex); // 根据索引找到节点
    bool AddNode(int nodeIndex,int direction,int *pNode); // 添加节点
    bool DeleNode(int nodeIndex,int *pNode); // 删除节点
    void TreeTraverse(); // 遍历节点
private:
    int *m_pTree;
    int m_iSize;
};
*/

// 链表创建的树
class Tree
{
public:
    Tree();
    ~Tree();
    NodeTree *SearchNode(int nodeIndex); // 根据索引找到节点
    bool AddNode(int nodeIndex,int direction,NodeTree *pNode); // 添加节点
    bool DeleNode(int nodeIndex,NodeTree *pNode); // 删除节点
    void PreoreTraversal();  // 前序遍历
    void InorderTraversal(); // 中序遍历
    void PostorderTraversal(); // 后序遍历
private:
    NodeTree *m_pRoot;
};

#endif /* Tree_h */
