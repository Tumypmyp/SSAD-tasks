//
// Created by Tumypmyp on 30.09.2021.
//

#ifndef DECORATOR_TEXT_H
#define DECORATOR_TEXT_H

#include <utility>

#include "TextView.h"

class Text : public TextView {
public:
    Text(std::string text = "no text", int size = 10) : text(std::move(text)), size(size) {}

    void Draw() override;

    void Resize(int x) override;

private:
    std::string text{};
    int size;
};


#endif //DECORATOR_TEXT_H
