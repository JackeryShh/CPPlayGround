//
//  BinaryTree.h
//  XcodeCPPTest
//
//  Created by jackery on 2018/3/25.
//  Copyright © 2018年 jackery. All rights reserved.
//

#ifndef BinaryTree_h
#define BinaryTree_h
#include <iostream>


typedef struct TreeNode{
    int data;
    TreeNode* leftChild;
    TreeNode* rightChild;
}Node,*_pNode;

class CBinaryTree{
    
public:
    CBinaryTree();
    void CreateBinaryTree(int nodeNumber);
    ~CBinaryTree();
    
    _pNode pRoot;

};

#endif /* BinaryTree_h */
