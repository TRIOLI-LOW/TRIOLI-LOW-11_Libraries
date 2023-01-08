#pragma once
#include <iostream>
#ifdef DYNLIB_EXPORTS
#define DYNLIB_API __declspec(dllexport) 
#else
#define DYNLIB_API __declspec(dllimport)
#endif
// не создает dynLib.lib , добавлял макрос, обыскал интеренет, пишут в основном, что только в этом проблема

namespace myexit {
	class Leaver {
	public: 
		std::string name;
		DYNLIB_API void leaver(std::string name_);

	};
}

