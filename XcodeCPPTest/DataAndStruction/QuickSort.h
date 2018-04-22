//
//  QuickSort.h
//  XcodeCPPTest
//
//  Created by jackery on 2018/4/22.
//  Copyright © 2018年 jackery. All rights reserved.
//

#ifndef QuickSort_h
#define QuickSort_h

/*
 快速排序
 
 思想：分治法思想
 
 //测试单元
 int array[]={2,6,3,8,3,7,1,4};
 int length=sizeof(array)/sizeof(int);
 quickSort(array, 0, length-1);
 
 
 
*/

void quickSort(int a[],int left, int right)
{
    int i=left,j=right;
    int base=a[left];
    if(i<j) //这个判断别忘掉，否则导致程序崩溃
    {
        while (i < j)
        {
            while(i<j && a[j]>=base)
            j--;
            if(j>i)
            a[i++]=a[j];//a[i]已经赋值给temp,所以直接将a[j]赋值给a[i],赋值完之后a[j],有空位
            while(i<j && a[i]<base)
            i++;
            if(i<j)
            a[j--]=a[i];
            }
            a[i]=base;
            quickSort(a,left,i-1);
            quickSort(a,i+1,right);
    }
}





#endif /* QuickSort_h */
