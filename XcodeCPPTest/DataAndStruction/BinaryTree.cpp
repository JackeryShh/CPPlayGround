//
//  BinaryTree.cpp
//  XcodeCPPTest
//
//  Created by jackery on 2018/3/25.
//  Copyright © 2018年 jackery. All rights reserved.
//

#include <stdio.h>
#include "iostream"
#include "BinaryTree.h"
#include <deque>
using namespace std;
CBinaryTree::CBinaryTree():pRoot(nullptr)
{
    cout << "wow,great!" <<endl;
    deque<int> test;
}

CBinaryTree::~CBinaryTree()
{
    
    
    
}

void CBinaryTree::CreateBinaryTree(int nodeNumber)
{
    if (!pRoot) {
        pRoot =new Node;
    }
    int value;
    cin >>value;
    pRoot->data=value;
    pRoot->leftChild=nullptr;
    pRoot->rightChild=nullptr;
    nodeNumber--;
     while(nodeNumber)
    {
        cin >>value;
        _pNode left=new Node;
        left->data=value;
        left->rightChild=nullptr;
        left->leftChild=nullptr;
        pRoot->leftChild=left;
        nodeNumber--;
        
        if(nodeNumber!=0)
        {
             cin >>value;
            _pNode right=new Node;
            right->data=value;
            right->leftChild=nullptr;
            right->rightChild=nullptr;
            pRoot->rightChild=right;
            nodeNumber--;

        }
        
    }
}
