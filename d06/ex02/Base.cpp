#include "Base.hpp"

Base::~Base()
{
}


Base::Base()
{
}

Base::Base(const Base& src)
{
	*this = src;
}


Base& Base::operator=(const Base& rhs)
{
	static_cast<void>(rhs);
	return *this;
}
