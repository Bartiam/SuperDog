#pragma once
#include <iostream>
// ����� ����������� �����;
class Talent { public: virtual void ability() = 0; };

//���� ������ ���������� �� ������ "Talent";
class Swimming : virtual public Talent
{
public:
	// �������� ������� "ability";
	void ability() override;
};

class Dancing : virtual public Talent
{
public:
	// �������� ������� "ability";
	void ability() override;
};

class Counting : virtual public Talent
{
public:
	// �������� ������� "ability";
	void ability() override;
};