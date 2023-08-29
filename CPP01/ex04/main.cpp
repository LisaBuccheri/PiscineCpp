#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::string		str;
	std::string		s1;
	std::string		s2;
	size_t			i = 0;

	if (argc != 4)
	{
		std::cout << "ERROR wrong number of arguments: ./replace filename s1 s2" << std::endl;
		return (1);
	}

	ifs.open(argv[1]);

	if (!ifs.is_open())
	{
		std::cout << "ERROR: open file" << std::endl;
		return (1);
	}

	s1 = argv[2];
	s2 = argv[3];

	if (s1.length() == 0 || s2.length() == 0)
	{
		std::cout << "ERROR: emprty string" << std::endl;
		return (1);
	}

	std::ofstream	ofs((std::string)argv[1] + ".replace");

	while (getline(ifs, str))
	{
		i = str.find(s1);
		while (i < (str.length() - 1))
		{
			str.erase(i, s1.length());
			str.insert(i, s2);
			i = str.find(s1, i + s2.length());
		}
		ofs << str << std::endl;
	}
	return (0);
}
