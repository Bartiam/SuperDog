#pragma once
#include "Talent.h"
#include <string>
#include <vector>

class Dog
{
private:
	// Переменные "name" и "age" для создания объекта класса Dog;
	std::string name;
	float age;
	// Вектор талантов, которые есть у собаки;
	std::vector<Talent*> talents;
	// Прототип метода "is_correct_name()" проверяющий правильность ввода имени собаки;
	bool is_correct_name(const std::string& name);
public:
	// Прототип конструктора класса;
	Dog(const std::string& name, const float& age);
	// Прототип метода изучения талантов;
	void learning_talent(Talent* talent);
	// Прототип метода вывода информации по умения собаки;
	void print_talents();
};