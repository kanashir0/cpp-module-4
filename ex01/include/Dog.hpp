/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:55:40 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 22:55:41 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal {
	private:
		Brain*	_brain;

	public:
		Dog(void);
		Dog(const Dog& other);
		~Dog(void);

		Dog&	operator=(const Dog& other);
		
		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif