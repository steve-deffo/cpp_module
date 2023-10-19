/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:07:14 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 13:42:40 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string("HI THIS IS BRAIN");
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of string using stringREF: " << &stringREF << std::endl;
	std::cout << "String using stringPTR: '" << *stringPTR << "'" << std::endl;
	std::cout << "String using stringREF: '" << stringREF << "'" << std::endl;
	std::cout << "String using string: '" << string << "'" << std::endl;
}