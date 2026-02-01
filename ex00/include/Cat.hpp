/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:22:42 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 19:22:43 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat& other);
		~Cat(void);

		Cat&	operator=(const Cat& other);
		
		void	makeSound(void) const;
};

#endif