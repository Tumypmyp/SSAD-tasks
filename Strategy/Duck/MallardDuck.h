//
// Created by Tumypmyp on 29.09.2021.
//

#ifndef STRATEGY_MALLARDDUCK_H
#define STRATEGY_MALLARDDUCK_H


#include "Duck.h"

#include <utility>
#include "../FlyBehavior/FlyWithWings.h"
#include "../QuackBehavior/Quacking.h"

class MallardDuck : public Duck{

public:
    MallardDuck(std::string name = "mallard duck") : Duck(std::move(name)) {
        flyBehavior = new FlyWithWings();
        quackBehavior = new Quacking();
    }
};


#endif //STRATEGY_MALLARDDUCK_H
