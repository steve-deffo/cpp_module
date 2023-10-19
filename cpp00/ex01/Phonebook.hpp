/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:04:09 by desteve           #+#    #+#             */
/*   Updated: 2023/06/13 17:15:35 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class Phonebook
{
public:

	// C & D
	Phonebook();
	~Phonebook();

	// G
	Contact getContact(int index) const;
	int		getCount() const;

	// S
	void setContact(Contact contact);

private:

	static int		_count;

	Contact _contacts[8];
	int		_index;
};

#endif