//
//  Header.h
//  XcodeCPPTest
//
//  Created by jackery on 2018/6/29.
//  Copyright © 2018年 jackery. All rights reserved.
//

#ifndef Header_h
#define Header_h

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


#endif /* Header_h */
