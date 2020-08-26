/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:10:00 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/08/26 15:55:59 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:

	SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
	~SuperTrap(void);

	SuperTrap	&operator=(SuperTrap const &rhs);
};

#endif
