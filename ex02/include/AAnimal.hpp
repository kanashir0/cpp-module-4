/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:51:50 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/02/01 10:51:49 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#define RESET	"\033[0m"
#define YELLOW	"\033[33m"
#define MAGENTA	"\033[35m"

class AAnimal {
	protected:
		std::string		_type;
		
	public:
		AAnimal(void);
		AAnimal(const AAnimal& other);
		virtual ~AAnimal(void);

		AAnimal&	operator=(const AAnimal& other);
		
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif