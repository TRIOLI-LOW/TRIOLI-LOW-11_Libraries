#pragma once
#include <iostream>
#ifdef DYNLIB_EXPORTS
#define DYNLIB_API __declspec(dllexport) 
#else
#define DYNLIB_API __declspec(dllimport)
#endif
// �� ������� dynLib.lib , �������� ������, ������� ���������, ����� � ��������, ��� ������ � ���� ��������

namespace myexit {
	class Leaver {
	public: 
		std::string name;
		DYNLIB_API void leaver(std::string name_);

	};
}

