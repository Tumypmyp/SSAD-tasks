//
// Created by Tumypmyp on 02.10.2021.
//

#include "Duck.h"

int Duck::cnt = 0;

std::string Duck::getName() {
    return name + "(" + std::to_string(index) + ")";
}
