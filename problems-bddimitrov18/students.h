#pragma once
#include<string>
struct STUDENT {
	size_t id;
	std::string name;
	std::string surname;
	int age;
	int grade;

	std::string getFullName();
};