//
// Created by Tumypmyp on 02.10.2021.
//

#ifndef ADAPTER_TURKEYADAPTER_H
#define ADAPTER_TURKEYADAPTER_H


#include "Duck/Duck.h"
#include "Turkey/Turkey.h"

class TurkeyAdapter : public Duck {
    Turkey *turkey;
public:
    void quack() override;

    void fly() override;
    TurkeyAdapter(Turkey* turkey) : Duck(turkey->getName()), turkey(turkey){}
//    void ge

};


#endif //ADAPTER_TURKEYADAPTER_H
