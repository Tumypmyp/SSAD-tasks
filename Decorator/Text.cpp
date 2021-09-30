//
// Created by Tumypmyp on 30.09.2021.
//

#include "Text.h"

void Text::Draw() {
    std::cout << "[" << text << "](" << size << ")";
}

void Text::Resize(int s) {
    size = s;
}
