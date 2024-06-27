#include <iostream>

int main (int ac, char **av) {
	int i = 1;
	size_t j = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = toupper(av[i][j]);
			std::cout << av[i][j];
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}