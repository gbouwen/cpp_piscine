/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 14:26:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/21 17:14:27 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

struct	Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	Data	*data = new Data;
	char	temp[9];
	char	alphaNumeric[] = "0123456789abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; i++)
		temp[i] = alphaNumeric[rand() % (sizeof(alphaNumeric) - 1)];
	data->s1 = temp;
	data->n = rand();
	for (int i = 0; i < 8; i++)
		temp[i] = alphaNumeric[rand() % (sizeof(alphaNumeric) - 1)];
	data->s2 = temp;
	return (reinterpret_cast<void *>(data));
}

Data	*deserialize(void *raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	void *raw = serialize();
	Data *data = deserialize(raw);

	std::cout << "data->s1: " << data->s1 << std::endl;
	std::cout << "data->n: " << data->n << std::endl;
	std::cout << "data->s2: " << data->s2 << std::endl;
	delete (data);
	return (0);
}
