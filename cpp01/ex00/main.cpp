/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 08:21:11 by desteve           #+#    #+#             */
/*   Updated: 2023/06/17 08:21:15 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie1("zombie1");
	Zombie *zombie2 = newZombie("zombie2");
	zombie1.announce();
	zombie2->announce();
	randomChump("zombie3");
	delete zombie2;
}