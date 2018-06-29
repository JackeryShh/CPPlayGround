//
//  ClassSizeAndVirtualFunction.h
//  XcodeCPPTest
//
//  Created by jackery on 2018/4/22.
//  Copyright © 2018年 jackery. All rights reserved.
//

#ifndef ClassSizeAndVirtualFunction_h
#define ClassSizeAndVirtualFunction_h

class A {
    int n;
    int m;
    virtual void funA(){};
};

class B:public A
{
    int m;
    int hah;
    int heihei;
    int shb;
    virtual void funB(){};

};



#endif /* ClassSizeAndVirtualFunction_h */
