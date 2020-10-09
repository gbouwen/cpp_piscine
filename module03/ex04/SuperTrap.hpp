/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/26 14:10:00 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/09 11:09:53 by gbouwen       ########   odam.nl         */
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
	SuperTrap(SuperTrap const &src);
	SuperTrap(std::string name);
	~SuperTrap(void);

	SuperTrap	&operator=(SuperTrap const &rhs);
};

#endif
