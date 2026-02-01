/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:26:36 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 19:29:05 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string		_type;

	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& other);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal& other);

		void			makeSound(void) const;
		std::string		getType(void) const;
};

#endif