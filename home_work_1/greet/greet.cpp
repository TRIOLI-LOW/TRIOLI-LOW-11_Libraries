#pragma once
#include <iostream>
#include "greet.h"
namespace myexit {

	void Greeter::bie(std::string name_) {
		name = name_;
		std::cout << "Досвидания, " << name << "!" << std::endl;
	};
}