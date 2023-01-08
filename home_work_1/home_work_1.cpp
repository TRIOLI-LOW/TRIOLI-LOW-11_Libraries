

#include <iostream>
#include "../greet/greet.h"
#include <Windows.h>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    myexit::Greeter gr;
    std::string name;
    std::cin >> name;
    gr.bie(name);
}

