//
// Created by Tumypmyp on 02.10.2021.
//

#ifndef ADAPTER_DUCK_H
#define ADAPTER_DUCK_H

#include <iostream>
#include <utility>

class Duck {
protected:
    std::string name;
    int index;
    static int cnt;
public:
    virtual void quack() = 0;
    virtual void fly() = 0;
    std::string getName();
    Duck(std::string name = "no name") : name(std::move(name)), index(cnt++){}
};


#endif //ADAPTER_DUCK_H
