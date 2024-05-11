/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 14:45:48 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 14:57:43 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    Phonebook	ph1;
    std::string str;

	while (str != "EXIT" || str != "Exit")
	{
		std::cout << "Enter a command > ";
		std::getline(std::cin, str);
		if (str == "ADD" || str == "add")
			ph1.add();
		else if (str == "SEARCH" || str == "search")
			ph1.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}