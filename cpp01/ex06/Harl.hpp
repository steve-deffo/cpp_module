/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:06:01 by desteve           #+#    #+#             */
/*   Updated: 2023/06/22 15:06:04 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl
{
public:
	// Constructor/Destructor
	Harl(void);
	~Harl(void);

	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};