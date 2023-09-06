#include "TalentedDog.h"
// Реализация метода проверки правильности ввода имени;
bool Dog::is_correct_name(const std::string& name)
{
	if (name.empty()) return false;
	if (name[0] < 'A' || name[0] > 'Z') return false;
	for (int i = 1; i < name.length(); ++i)
		if (name[i] < 'a' || name[i] > 'z') return false;
	return true;
}
// Реализация конструктора класса "Dog". Позваляет установить имя и возраст собаки в правильном виде;
Dog::Dog(const std::string& name, const float& age)
{
	if (!is_correct_name(name) || age < 0 || age > 15)
		std::cerr << "Error! Incorrect input data. " << std::endl;
	else
	{
		this->name = name;
		this->age = age;
	}
}
// Реализация метода изучения талантов собакой;
void Dog::learning_talent(Talent* talent) { talents.emplace_back(talent); }
// Реализация метода вывода в консоль текущих умений собаки;
void Dog::print_talents()
{
	if (talents.empty())
		std::cout << "The dog has not talents. " << std::endl;
	else
	{
		for (int i = 0; i < talents.size(); ++i)
		{
			std::cout << "The dog can: ";
			talents[i]->ability();
		}
	}
}