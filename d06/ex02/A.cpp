#include "A.hpp"

A::A()
{
}

A::A(const A& src)
{
	*this = src;
}

A::~A()
{
}

A& A::operator=(const A& rhs)
{
	static_cast<void>(rhs);
	return *this;
}
