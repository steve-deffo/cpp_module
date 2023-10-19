/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 01:06:54 by desteve           #+#    #+#             */
/*   Updated: 2023/07/09 01:20:13 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain
{
public:
	// Constructors
	Brain();
	Brain(const Brain& other);
	
	// Assignment operator overload
	Brain& operator=(const Brain& rhs);

	// Destructor
	~Brain();

	// Getters
	const std::string& getIdea(int index) const;

private:
	
	std::string _ideas[100];
};