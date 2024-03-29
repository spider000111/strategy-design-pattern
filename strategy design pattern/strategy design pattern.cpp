// strategy design pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "duck.h"
#include "IQuackBehaviour.h"

int main()
{
    std::cout << "Hello World!\n";
    
    IQuackBehaviour *me = new SpecialQuackA();
    me->quack();
    IQuackBehaviour *me2 = new SpecialQuackB();
    me2->quack();
    IQuackBehaviour *me3 = new SpecialQuackC();
    me3->quack();

    printf("-------------------------------------------------\n");
    duck my_duckA(me);
    my_duckA.quack_duck();

    duck my_duckB(me2);
    my_duckB.quack_duck();

    duck my_duckC(me3);
    my_duckC.quack_duck();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
