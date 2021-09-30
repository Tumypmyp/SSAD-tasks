//
// Created by Tumypmyp on 30.09.2021.
//

#ifndef DECORATOR_BORDERDECORATOR_H
#define DECORATOR_BORDERDECORATOR_H


#include "../TextView.h"

class BorderDecorator : public TextView {
private:
    TextView *component;
    int borderWidth;

    void drawBoarder(int w);

public:
    BorderDecorator(TextView *c, int b = 2) : component(c), borderWidth(b) {}

    void Draw() override;

    void Resize(int s) override;

    TextView *RemoveDecorator() override;
};


#endif //DECORATOR_BORDERDECORATOR_H
