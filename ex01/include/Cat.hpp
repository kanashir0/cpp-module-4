/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:53:45 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 22:53:47 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal {
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