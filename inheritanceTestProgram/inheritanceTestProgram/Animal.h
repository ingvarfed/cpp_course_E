#ifndef Animal_h__
#define Animal_h__

class Animal
{
public:
	enum class Gender { eMale, eFemale, eUnknown };

	Animal();
	~Animal();

protected:
	double m_age;
	int m_color;
	Animal::Gender m_gender;

	void die();
};

#endif // Animal_h__
