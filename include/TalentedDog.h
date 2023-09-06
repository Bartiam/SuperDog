#pragma once
#include "Talent.h"
#include <string>
#include <vector>

class Dog
{
private:
	// ���������� "name" � "age" ��� �������� ������� ������ Dog;
	std::string name;
	float age;
	// ������ ��������, ������� ���� � ������;
	std::vector<Talent*> talents;
	// �������� ������ "is_correct_name()" ����������� ������������ ����� ����� ������;
	bool is_correct_name(const std::string& name);
public:
	// �������� ������������ ������;
	Dog(const std::string& name, const float& age);
	// �������� ������ �������� ��������;
	void learning_talent(Talent* talent);
	// �������� ������ ������ ���������� �� ������ ������;
	void print_talents();
};