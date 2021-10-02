//
// Created by Tumypmyp on 02.10.2021.
//

#ifndef ADAPTER_WILDTURKEY_H
#define ADAPTER_WILDTURKEY_H


#include "Turkey.h"

#include <utility>

class WildTurkey : public Turkey {
public:
    void gobble() override;

    void fly() override;

    WildTurkey(std::string name = "no name") : Turkey(std::move(name)) {}
};


#endif //ADAPTER_WILDTURKEY_H
