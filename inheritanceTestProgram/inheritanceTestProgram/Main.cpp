#include <iostream>
#include "Cat.h"

int main()
{
	Cat Kali(Cat::Gender::eMale, 0xFF8040FF);
	Kali.feed();
	system("PAUSE");
	return 0;
}
