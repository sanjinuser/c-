//
//  NodeTree.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/10.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef NodeTree_h
#define NodeTree_h

#include <stdio.h>

class NodeTree
{
public:
    NodeTree();
    NodeTree *SearchNode(int nodeIndex);
    void DeleNode();
    void PreoreTraversal();  // 前序遍历
    void InorderTraversal(); // 中序遍历
    void PostorderTraversal(); // 后序遍历
    int index;
    int data;
    NodeTree *pLChild;
    NodeTree *pRChild;
    NodeTree *pParent;
    
};


#endif /* NodeTree_h */
