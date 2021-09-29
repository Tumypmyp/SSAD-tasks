//
// Created by Tumypmyp on 29.09.2021.
//

#include "Duck.h"

void Duck::Fly() {
    printf("%s: ", name.c_str());
    if (flyBehavior == nullptr) {
        fprintf(stderr, "\tdo not have fly behavior assigned\n");
        return;
    }
    flyBehavior->Fly();
}

void Duck::Quack() {
    printf("%s: ", name.c_str());
    if (quackBehavior == nullptr) {
        fprintf(stderr, "\n\tdo not have quack behavior assigned\n");
        return;
    }
    quackBehavior->Quack();
}

void Duck::Dive() {
    printf("%s: ", name.c_str());
    if (diveBehavior == nullptr) {
        fprintf(stderr, "\n\tdo not have dive behavior assigned\n");
        return;
    }
    diveBehavior->Dive();
}
