//
//  FindMissingNumber.h
//  XcodeCPPTest
//
//  Created by jackery on 2018/4/21.
//  Copyright © 2018年 jackery. All rights reserved.
//

/*
 测试单元：TEST UNIT
 
 int array[]={2,3,4,5,6};
 int missingNumber=FindMissingNumber(array, 1, 6);
 cout <<missingNumber <<endl;
 
 
 */

#ifndef FindMissingNumber_h
#define FindMissingNumber_h

int FindMissingNumber(const int* list,int start,int end)
{
    int sum1=0,sum2=0;
    int index=0;
    int arraylenth=end-start+1;
    while (index < arraylenth) {
        sum1 +=(start+index);
        index++;
    }
    
    for (int i=0; i<(arraylenth-1); i++) {
        sum2 +=list[i];
    }
    return (sum1-sum2);
}



#endif /* FindMissingNumber_h */
