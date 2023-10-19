/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:55:29 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 18:32:19 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie
{
public:

	// Constructor/Destructor
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	// S
	void setName(std::string name);
	void announce( void ) const;

private:

	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);