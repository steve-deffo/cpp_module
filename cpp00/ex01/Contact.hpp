/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desteve <desteve@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 05:02:29 by desteve           #+#    #+#             */
/*   Updated: 2023/06/15 16:18:45 by desteve          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{
public:

	Contact();
	~Contact();

	// Getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string	getPhoneNumber() const;
	std::string getSecret() const;
	
	//Setters
	void setFirstName(std::string name);
	void setLastName(std::string name);
	void setNickName(std::string name);
	void setPhoneNumber(std::string number);
	void setSecret(std::string secret);
	
private:

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string	_phoneNumber;
	std::string	_secret;
};

#endif