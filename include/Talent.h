#pragma once
#include <iostream>
// Чисто виртуальный класс;
class Talent { public: virtual void ability() = 0; };

//Ниже классы наследники от класса "Talent";
class Swimming : virtual public Talent
{
public:
	// Прототип функции "ability";
	void ability() override;
};

class Dancing : virtual public Talent
{
public:
	// Прототип функции "ability";
	void ability() override;
};

class Counting : virtual public Talent
{
public:
	// Прототип функции "ability";
	void ability() override;
};