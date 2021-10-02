//
// Created by Tumypmyp on 02.10.2021.
//

#ifndef ADAPTER_MALLARDDUCK_H
#define ADAPTER_MALLARDDUCK_H


#include "Duck.h"

#include <utility>

class MallardDuck : public Duck {
    void quack() override;
    void fly() override;

public:
    MallardDuck(std::string name = "no name") : Duck(std::move(name)){}
};


#endif //ADAPTER_MALLARDDUCK_H
