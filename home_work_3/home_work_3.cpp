
#include<Windows.h>
#include <iostream>
#include "../dynLib/dynLib.h"
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    myexit::Leaver l;

    std::string name;
    std::cout << "Введите имя: ";
    std::cin >> name;
    l.leaver(name);
}

