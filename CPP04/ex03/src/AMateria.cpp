/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:06:22 by lagea             #+#    #+#             */
/*   Updated: 2024/10/01 16:54:03 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("")
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria &ref)
{
	*this = ref;
}

AMateria &AMateria::operator=(const AMateria &ref)
{
	if (this != &ref){
		this->_type = ref.getType();
	}
	return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->_type;
}
