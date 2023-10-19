/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:20:48 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 09:09:23 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie
{
public:

	// C/D
	Zombie(std::string name);
	~Zombie(void);

	// G
	void announce( void ) const;
private:

	std::string _name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif