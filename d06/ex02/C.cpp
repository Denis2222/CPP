#include "C.hpp"

C::C()
{
}

C::C(const C& src)
{
	*this = src;
}

C::~C()
{
}

C& C::operator=(const C& rhs)
{
	static_cast<void>(rhs);
	return *this;
}
