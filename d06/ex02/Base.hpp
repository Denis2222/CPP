#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:
	virtual ~Base();
	Base();
	Base(const Base& src);

	virtual Base& operator=(const Base& rhs);
};

#endif
