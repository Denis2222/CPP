#include "scalar.hpp"

Scalar::Scalar(std::string const &arg) : arg(arg)
{
	this->doAction();
}

Scalar::~Scalar(void)
{
}

Scalar::Scalar(Scalar const &cpy) : arg(cpy.arg)
{
	std::cout << "One Scalar was copied from another" << std::endl;
	*this = cpy;
}

Scalar &Scalar::operator= (Scalar const &emp)
{
	std::cout << "Data from a Scalar assigned to another" << std::endl;
	return (*this);
}

void Scalar::doAction(void)
{
	int alpha = 0, length = 0;
	double doubleval = 0;
	for (int j = 0; this->arg[j]; j++)
	alpha += isalpha(this->arg[j]);
	doubleval = atof(this->arg.c_str());
	length = strlen(this->arg.c_str());
	if (alpha <= 1 && length >= 1 && (isdigit(this->arg[0]) || this->arg[0] == '-' )) {
		if (isprint(doubleval))
			std::cout << "char   : '" << static_cast<char>(doubleval) << "'" << std::endl;
		else
			std::cout << "char   : " << "Non displayable" << std::endl;
		std::cout << "int    : " << static_cast<int>(doubleval) << std::endl;
		std::cout << "float  : " << std::fixed << std::setprecision(precision) << static_cast<float>(doubleval) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(doubleval) << std::endl;
	} else if (length == 1) {
		std::cout << "char   : '" << this->arg << "'" << std::endl;
		std::cout << "int    : " << static_cast<int>(this->arg[0]) << std::endl;
		std::cout << "float  : " << std::fixed << std::setprecision(precision) << static_cast<float>(this->arg[0]) << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(this->arg[0]) << std::endl;
	} else {
		std::cout << "char   : Impossible" << std::endl;
		std::cout << "int    : Impossible" << std::endl;
		std::cout << "float  : " << this->arg << "f" << std::endl;
		std::cout << "double : " << this->arg << std::endl;
	}
}