//
// Created by Tumypmyp on 30.09.2021.
//

#include <valarray>
#include "BorderDecorator.h"

void BorderDecorator::Draw() {
    drawBoarder(borderWidth);
    component->Draw();
    drawBoarder(borderWidth);
}

void BorderDecorator::drawBoarder(int w) {
    for (int i = 0; i < w; i++)
        std::cout << "|";
}

void BorderDecorator::Resize(int s) {
    component->Resize(s);
}

TextView *BorderDecorator::RemoveDecorator() {
    return component;
}
