#ifndef SCALAR_HPP
# define SCALAR_HPP

#include <iostream>
#include <iomanip>

class Scalar
{
public:
	Scalar(std::string const &arg);
	Scalar(Scalar const &cpy);
	Scalar &operator= (Scalar const &emp);
	~Scalar();
	void doAction();
private:
	std::string const &arg;
};

# define precision 1

#endif