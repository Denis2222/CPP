#include "scalar.hpp"

int main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int i = 1;
		while (argv[i])
		{
			Scalar *scalar = new Scalar(argv[i]);
			if (i < (argc - 1)) std::cout << std::endl;
			i++;
		}
	}
	return (0);
}