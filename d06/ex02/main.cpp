#include <iostream>

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

Base*	generate()
{
	Base*	ret;

	std::cout << "generate choose:";
	switch (rand() % 3) {
		case 0:
			std::cout << "A";
			ret = new A();
			break;
		case 1:
			std::cout << "B";
			ret = new B();
			break;
		case 2:
			std::cout << "C";
			ret = new C();
			break;
	}
	std::cout << std::endl;
	return ret;
}

void identify_from_pointer(Base* p)
{
	A*	a = dynamic_cast<A*>(p);
	B*	b = dynamic_cast<B*>(p);
	C*	c = dynamic_cast<C*>(p);

	std::cout << "Identify from pointer dynamic_cast :" << std::endl;
	if (a != NULL) {
		std::cout << "A" << std::endl;
	} else if (b != NULL) {
		std::cout << "B" << std::endl;
	} else if (c != NULL) {
		std::cout << "C" << std::endl;
	}
}

void	identify_from_reference(Base& p)
{
	std::cout << "Identify from reference dynamic_cast :" << std::endl;
	try {
		A&	a = dynamic_cast<A&>(p);
		std::cout << "A"  << std::endl;
		static_cast<void>(a);
	} catch (std::bad_cast& bc) {
		std::cout << "Exception bad_cast Not A" << std::endl;
	}

	try {
		B&	b = dynamic_cast<B&>(p);
		std::cout << "B"  << std::endl;
		static_cast<void>(b);
	} catch (std::bad_cast& bc) {
		std::cout << "Exception bad_cast Not B" << std::endl;
	}

	try {
		C&	c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
	} catch (std::bad_cast& bc) {
		std::cout << "Exception bad_cast Not C" << std::endl;
	}
}

int main()
{
	srand(time(0));

	Base*	b = generate();

	identify_from_pointer(b);
	identify_from_reference(*b);
	return 0;
}
