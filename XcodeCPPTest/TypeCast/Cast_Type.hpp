//
//  Cast_Type.hpp
//  XcodeCPPTest
//
//  Created by jackery on 2018/6/29.
//  Copyright © 2018年 jackery. All rights reserved.
//

#ifndef Cast_Type_hpp
#define Cast_Type_hpp

#include <stdio.h>

class Base{
public:
    Base();
    ~Base();
    virtual void fun();
    void fun2();
    
};


class Child:public Base{
public:
    Child();
    ~Child();
    int a;
    float b;
    void fun1();
};


#endif /* Cast_Type_hpp */
