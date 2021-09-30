#include <iostream>
#include "TextView.h"
#include "Text.h"
#include "Decorator/BorderDecorator.h"
#include "Decorator/TitleDecorator.h"

int main() {
    std::cout << "\n\n\tText component testing:\n";
    TextView *text = new Text("Lorem ipsum dolor sit amet, consectetur adipiscing elit.");
    text->Draw();

    std::cout << "\n\n\tborder decorator testing:\n";
    text = new BorderDecorator(text);
    text->Draw();

    std::cout << "\n\n\ttitle decorator testing:\n";
    text = new TitleDecorator(text, "The Book of Mormon");
    text->Draw();

    std::cout << "\n\n\ttitle decorator testing 2:\n";
    TextView *text2 = new BorderDecorator(new TitleDecorator(new Text("Hello there."), "message"));
    text2->Resize(30);
    text2->Draw();

    std::cout << "\n\n\tremove border decorator testing:\n";
    TextView *text3 = text2->RemoveDecorator();
    text3->Draw();
    std::cout << "\n";
    TextView *text4 = text->RemoveDecorator();
    text4->Draw();

    return 0;
}
