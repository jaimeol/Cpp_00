/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:56:47 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 12:05:58 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

std::string	add_spaces(int n)
{
	std::string	str;
	
	while (n--)
		str.append(" ");
	return (str);
}

std::string	fix_format(std::string str, long unsigned max)
{
	if (str.size() > max)
	{
		str.resize(max);
		str[str.size() - 1] = '.';
	}
	return (str);
}

