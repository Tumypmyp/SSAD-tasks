//
// Created by Tumypmyp on 29.09.2021.
//

#ifndef STRATEGY_DUCK_H
#define STRATEGY_DUCK_H


#include <string>
#include <utility>
#include "../FlyBehavior/FlyBehavior.h"
#include "../QuackBehavior/QuackBehavior.h"
#include "../DiveBehavior/DiveBehavior.h"

class Duck {
protected:
    std::string name;
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
    DiveBehavior* diveBehavior;
public:
    Duck(std::string name, FlyBehavior *f = nullptr, QuackBehavior* q = nullptr, DiveBehavior* d = nullptr)
        : name(std::move(name)), flyBehavior(f), quackBehavior(q), diveBehavior(d){
    }
    void Fly();
    void Quack();
    void Dive();
};


#endif //STRATEGY_DUCK_H
