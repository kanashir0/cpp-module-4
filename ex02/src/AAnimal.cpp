/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:53:44 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/02/01 10:54:16 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Unknown animal") {
	std::cout << "An abstract animal has been created." << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type) {
	std::cout << "An abstract animal has been cloned." << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "An abstract animal has been destroyed." << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other) {
	std::cout << "An abstract animal has been assigned values from another abstract animal." << std::endl;
	if (this != &other)
		_type = other._type;
	return *this;
}

std::string	AAnimal::getType(void) const {
	return _type;
}