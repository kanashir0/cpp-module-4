/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:57:46 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 22:59:41 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain initialized with fresh ideas!" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "A brain with brilliant ideas has been cloned." << std::endl;
	for (int i = 0; i < 100; ++i) {
		_ideas[i] = other._ideas[i];
	}
}

Brain::~Brain(void) {
	std::cout << "Brain disassembled and all ideas vanished into thin air..." << std::endl;
}

Brain&	Brain::operator=(const Brain& other) {
	std::cout << "A brain has been assigned ideas from another brain." << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; ++i) {
			_ideas[i] = other._ideas[i];
		}
	}
	return *this;
}

std::string	Brain::getIdea(int index) const {
	if (index < 0 || index >= 100) {
		return NULL;
	}
	return _ideas[index];
}

void	Brain::setIdea(int index, const std::string idea) {
	if (index < 0 || index >= 100) {
		return ;
	}
	_ideas[index] = idea;
}