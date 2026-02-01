/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:52:45 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/02/01 10:52:46 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal {
	private:
		Brain*	_brain;

	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);

		Cat&	operator=(const Cat& other);
		
		void	makeSound(void) const;
		Brain*	getBrain(void) const;
};

#endif