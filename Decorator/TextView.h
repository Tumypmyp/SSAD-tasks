//
// Created by Tumypmyp on 30.09.2021.
//

#ifndef DECORATOR_TEXTVIEW_H
#define DECORATOR_TEXTVIEW_H

#include <string>
#include <iostream>

class TextView {
public:
    virtual void Draw() = 0;

    virtual void Resize(int x) = 0;

    virtual TextView *RemoveDecorator();
};


#endif //DECORATOR_TEXTVIEW_H
