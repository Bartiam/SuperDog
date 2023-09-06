#include "TalentedDog.h"

int main()
{
	Dog* aBiggerDog = new Dog("Rex", 1.5);

	std::vector<Talent*> talents;
	talents.emplace_back(new Swimming);
	talents.emplace_back(new Dancing);
	talents.emplace_back(new Counting);

	for (int i = 0; i < talents.size(); ++i)
		aBiggerDog->learning_talent(talents[i]);

	aBiggerDog->print_talents();

	delete aBiggerDog;

	return 0;
}