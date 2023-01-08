#include <iostream>
#include "dynLib.h"

using namespace myexit;
 void Leaver::leaver(std::string name_) {
	name = name_;
	std::cout << "До свидания " << name << "!\n";
}
