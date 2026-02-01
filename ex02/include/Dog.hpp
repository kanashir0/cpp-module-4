/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:53:10 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/02/01 10:53:11 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public AAnimal {
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