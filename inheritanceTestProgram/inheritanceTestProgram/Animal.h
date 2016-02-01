#ifndef Animal_h__
#define Animal_h__

class Animal
{
public:
	enum class Gender { Male, Female, Unknown };
	
	Animal();
	~Animal();

private:
	double age;
	const Animal::Gender mGender;
};

#endif // Animal_h__
