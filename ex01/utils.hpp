/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare <jolivare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 11:57:51 by jolivare          #+#    #+#             */
/*   Updated: 2024/05/11 12:01:49 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP
# include <iostream>

std::string	add_spaces(int n);

std::string	fix_format(std::string str, long unsigned max);

int	search_ui(Contact contacts[8]);

#endif