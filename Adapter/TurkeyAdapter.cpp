//
// Created by Tumypmyp on 02.10.2021.
//

#include "TurkeyAdapter.h"

void TurkeyAdapter::quack() {
    turkey->gobble();
}

void TurkeyAdapter::fly() {
    for (int i = 0; i < 3; i++)
        turkey->fly();
}
