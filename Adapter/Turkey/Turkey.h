//
// Created by Tumypmyp on 02.10.2021.
//

#ifndef ADAPTER_TURKEY_H
#define ADAPTER_TURKEY_H

#include <iostream>
#include <utility>

class Turkey {
    std::string name;
public:
    virtual void gobble() = 0;
    virtual void fly() = 0;
    Turkey(std::string name = "no name") : name(std::move(name)){}
    std::string getName();
};


#endif //ADAPTER_TURKEY_H
