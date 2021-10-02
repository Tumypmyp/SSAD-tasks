#include <iostream>
#include <vector>
#include "Turkey/WildTurkey.h"
#include "Duck/MallardDuck.h"
#include "TurkeyAdapter.h"

int main() {
    std::vector<Duck *> ducks = {new MallardDuck("mal"), new MallardDuck("sol"), new MallardDuck("dol")};
    std::vector<Turkey *> turkeys = {new WildTurkey("fin"), new WildTurkey("pin")};

    std::cout << "\n\ttesting ducks and turkeys:\n";
    std::cout << "ducks: ";
    for (auto p: ducks)
        std::cout << p->getName() << ", ";
    std::cout << "\nturkeys: ";
    for (auto p: turkeys)
        std::cout << p->getName() << ", ";
    std::cout << "\n";

    std::cout << "\n\ttesting TurkeyAdapter:\n";
    std::vector<Duck *> birds;
    birds.insert(birds.end(), ducks.begin(), ducks.end());
    for (auto p: turkeys)
        birds.push_back(new TurkeyAdapter(p));

    for (auto p: birds) {
        if (!p) {
            std::cout << ".\n";
            continue;
        }
        std::cout << p->getName() << "->fly() - ";
        p->fly();
        std::cout << "\n";
    }
    return 0;
}
