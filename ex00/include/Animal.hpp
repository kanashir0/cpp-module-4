/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:10:18 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 19:15:59 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# define RESET	"\033[0m"
# define RED		"\033[31m"
# define GREEN	"\033[32m"

class Animal {
	protected:
		std::string		_type;
		
	public:
		Animal(void);
		Animal(const Animal& other);
		virtual ~Animal(void);

		Animal&	operator=(const Animal& other);
		
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif