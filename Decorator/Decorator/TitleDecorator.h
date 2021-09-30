//
// Created by Tumypmyp on 30.09.2021.
//

#ifndef DECORATOR_TITLEDECORATOR_H
#define DECORATOR_TITLEDECORATOR_H


#include <utility>

#include "../TextView.h"

class TitleDecorator : public TextView {
private:
    TextView *component;
    std::string title;

    void drawTitle();

public:
    TitleDecorator(TextView *c, std::string title) : component(c), title(std::move(title)) {}

    void Draw() override;

    void Resize(int x) override;

    TextView *RemoveDecorator() override;
};


#endif //DECORATOR_TITLEDECORATOR_H
