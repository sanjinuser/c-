//
//  NodeMap.h
//  CircularQueue
//
//  Created by 于鑫 on 2018/8/10.
//  Copyright © 2018年 于鑫. All rights reserved.
//

#ifndef NodeMap_h
#define NodeMap_h

#include <stdio.h>

class NodeMap
{
public:
    NodeMap(char data = 0);
    char m_cData;
    bool m_bIsVisited; // 标识当前是不是被访问
    
};

#endif /* NodeMap_h */
