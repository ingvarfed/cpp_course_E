#include "Cat.h"

#include <iostream>

using namespace std;


Cat::Cat(Cat::Gender gender, int color)
{
	m_gender = gender;
	m_color = color;
	m_age = 0;
}

Cat::~Cat()
{
}

void Cat::feed()
{
	meow(3.3);
}

void Cat::meow(float dB)
{
	cout << "meow";
	for (int i = 0; i < dB; ++i)
	{
		cout << "!";
	}
	cout << "\n";
}
