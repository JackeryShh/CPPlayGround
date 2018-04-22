//
//  main.cpp
//  XcodeCPPTest
//
//  Created by jackery on 2018/3/25.
//  Copyright © 2018年 jackery. All rights reserved.
//

#include <iostream>
#include <stack>
#include "vector"
#include "BinaryTree.h"
#include "lamda.h"
#include "FindMissingNumber.h"

#include "QuickSort.h"
using namespace std;

bool IsBiarySearchTree(vector<int> array)
{
    int length=array.size();
    if(length ==0)
    {
        return false;
    }
    if (length==1) {
        return true;
    }
    int index=0,leftEnd=0;
    int root=array[length-1];
    //查找左子树与右子树的分界点
    for (index=0; index< length; index++) {
        if(array[index]>root)
        {
            leftEnd=index;
            break;
        }
    }
    
    
    
    for(int j=index+1;j<length;j++)
    {
        if(array[j] < root)
         return false;
    }
    bool left;
    vector<int>leftChildTree;
    leftChildTree.assign(array.begin(),array.begin()+leftEnd+1);
    left=IsBiarySearchTree(leftChildTree);
    
    bool right;
    vector<int>rightChildTree;
    rightChildTree.assign(array.begin(),array.begin()+length-leftEnd-1);
    right=IsBiarySearchTree(leftChildTree);

    
    return left && right;
    
    
}

//合并两个有序数组

void MergeArray(vector<int>& A,vector<int>& B,vector<int>&result)
{
    int k=0,i=0,j=0;
    while (i<A.size() && j<B.size()) {
        if(A[i]<B[j])
            result[k++]=A[i++];
        else
            result[k++]=B[j++];
    }
    while (i<A.size()) {
        result[k++]=A[i++];
    }
    while (j<B.size()) {
        result[k++]=B[j++];
    }
}

int main(int argc, const char * argv[]) {
    
 
   
    return 0;
}




