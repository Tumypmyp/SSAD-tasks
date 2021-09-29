
#include <string>
#include <cstdio>
#include "Duck/Duck.h"
#include "Duck/MallardDuck.h"
#include "FlyBehavior/FlyWithWings.h"
#include "FlyBehavior/FlyNoWay.h"
#include "QuackBehavior/Quacking.h"
#include "QuackBehavior/MuteSqueak.h"
#include "QuackBehavior/Squeak.h"
#include "DiveBehavior/DiveWithTail.h"
#include "DiveBehavior/DiveNoWay.h"

int main() {
    printf("\n\tsimple duck testing:\n");
    Duck* duck1 = new Duck("duck1", new FlyWithWings(), new Quacking());
    Duck* duck2 = new Duck("duck2", new FlyNoWay(), new MuteSqueak());
    duck1->Fly();
    duck2->Fly();
    duck1->Quack();
    duck2->Quack();

    printf("\n\tmallard duck testing:\n");
    MallardDuck duck;
    duck.Fly();
    duck.Quack();

    printf("\n\tno behavior testing\n");
    Duck duck3("duck3");
    duck3.Quack();

    printf("\n\tdive Behavior testing\n");
    Duck duck4("diving duck", new FlyWithWings, new Squeak(), new DiveWithTail());
    duck4.Fly();
    duck4.Quack();
    duck4.Dive();

    printf("\n\tno dive Behavior testing\n");
    Duck duck5("not diving duck", new FlyWithWings, new MuteSqueak, new DiveNoWay());
    duck5.Fly();
    duck5.Quack();
    duck5.Dive();
    return 0;
}
