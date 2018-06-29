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

#include "ClassSizeAndVirtualFunction.h"

#include "CastTypeTestUnit.h"
using namespace std;

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
    
 
    class A a;
    int sizeA=sizeof(A);
    class B b;
    int sizeB=sizeof(b);
    
    int ai;
    int sizeInt=sizeof(ai);
   
    CTypeCast::Dynamic_Cast_TestUnit();
    
    return 0;
}




