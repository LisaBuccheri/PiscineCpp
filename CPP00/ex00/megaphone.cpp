/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbuccher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:07:41 by lbuccher          #+#    #+#             */
/*   Updated: 2022/04/27 17:07:46 by lbuccher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(int argc, char **argv)
{
	size_t	i;
	int		j = 0;
	char	c;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (++j < argc)
		{
			i = -1;
			while (++i < strlen(argv[j]))
			{
				c = toupper(argv[j][i]);
				std::cout << c;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
