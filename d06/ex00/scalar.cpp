#include <iostream>
#include <iomanip> //std::setprecision

#define precision 1

int		main(int argc, char **argv)
{
	if (argc >= 2)
	{
		int 		alpha;
		int 		length;
		double		doubleval;

		for (int i = 1; i < argc; i++)
		{
			alpha = 0;
			for (int j = 0; argv[i][j]; j++)
				alpha += isalpha(argv[i][j]);
			doubleval = atof(argv[i]);
			length = strlen(argv[i]);
			if (alpha <= 1 && length >= 1 && (isdigit(argv[i][0]) || argv[i][0] == '-' )) {
				if (isprint(doubleval))
					std::cout << "char   : '" << static_cast<char>(doubleval) << "'" << std::endl;
				else
					std::cout << "char   : " << "Non displayable" << std::endl;

				std::cout << "int    : " << static_cast<int>(doubleval) << std::endl;
				std::cout << "float  : " << std::fixed << std::setprecision(precision) << static_cast<float>(doubleval) << "f" << std::endl;
				std::cout << "double : " << static_cast<double>(doubleval) << std::endl;
			} else if (length == 1) {
				std::cout << "char   : '" << argv[i] << "'" << std::endl;
				std::cout << "int    : " << static_cast<int>(argv[i][0]) << std::endl;
				std::cout << "float  : " << std::fixed << std::setprecision(precision) << static_cast<float>(argv[i][0]) << "f" << std::endl;
				std::cout << "double : " << static_cast<double>(argv[i][0]) << std::endl;
			} else {
				std::cout << "char   : Impossible" << std::endl;
				std::cout << "int    : Impossible" << std::endl;
				std::cout << "float  : " << argv[i] << "f" << std::endl;
				std::cout << "double : " << argv[i] << std::endl;
			}
			if (i < argc - 1)
				std::cout << std::endl;
		}
	}

	return 0;
}
