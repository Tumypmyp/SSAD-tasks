//
// Created by Tumypmyp on 30.09.2021.
//

#include "TitleDecorator.h"

void TitleDecorator::Resize(int x) {
    component->Resize(x);
}

void TitleDecorator::Draw() {
    drawTitle();
    component->Draw();
}

void TitleDecorator::drawTitle() {
    std::cout << "{" << title << "}\n";
}

TextView *TitleDecorator::RemoveDecorator() {
    return component;
}
