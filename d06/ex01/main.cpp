#include <iostream>

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};


void*	serialize()
{
	static char alnum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

	Data	*ret = new Data;
	for (int i = 0; i < 8; ++i) {
		ret->s1 += alnum[rand() % sizeof(alnum)];
	}
	ret->n = rand() % INT_MAX - (INT_MAX / 2);
	for (int i = 0; i < 8; ++i) {
		ret->s2 += alnum[rand() % sizeof(alnum)];
	}
	return ret;
}

Data*	deserialize(void* raw)
{
	Data*	ret = reinterpret_cast<Data*>(raw);
	return ret;
}

int	main()
{
	srand(time(0));
	void	*s = serialize();
	std::cout << "Before:" << std::endl;
	std::cout << ((Data*)s)->s1 << std::endl << ((Data*)s)->n << std::endl << ((Data*)s)->s2 << std::endl << std::endl;

	std::cout << "After:" << std::endl;
	Data*	d = deserialize(s);
	std::cout << d->s1 << std::endl << d->n << std::endl << d->s2 << std::endl;
	delete d;
	return 0;
}
