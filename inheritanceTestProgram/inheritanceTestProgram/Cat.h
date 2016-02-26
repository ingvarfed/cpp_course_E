#ifndef Cat_h__
#define Cat_h__

#include "Animal.h"
class Cat :
	public Animal
{
public:
	Cat(Cat::Gender gender, int color);
	~Cat();
	void feed();

private:
	void meow(float dB);
};

#endif // Cat_h__
