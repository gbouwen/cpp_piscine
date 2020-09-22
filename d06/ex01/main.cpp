/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/18 14:26:52 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/09/22 17:55:18 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>

struct	Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	char	*data = new char[20];
	char	alphaNumeric[] = "0123456789abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 8; i++)
		data[i] = alphaNumeric[rand() % (sizeof(alphaNumeric) - 1)];
	*reinterpret_cast<int *>(data + 8) = rand();
	for (int i = 12; i < 20; i++)
		data[i] = alphaNumeric[rand() % (sizeof(alphaNumeric) - 1)];
	return (reinterpret_cast<void *>(data));
}

Data	*deserialize(void *raw)
{
	Data		*data = new Data();
	char		*temp;

	temp = static_cast<char *>(raw);
	data->s1 = std::string(temp).substr(0, 8);
	temp += 8;
	memcpy(&data->n, temp, sizeof(int));
	temp += 4;
	data->s2 = std::string(temp).substr(0, 8);
	return (data);
}

void	checkAllocatedBytes(void *raw)
{
	char	*temp = reinterpret_cast<char *>(raw);

	temp = reinterpret_cast<char *>(raw);
	int size = 0;
	for (int i = 0; temp[i]; i++)
		size += sizeof(temp[i]);
	std::cout << "Allocated " << size << " bytes on memory address: " << &temp << std::endl;
	return ;
}

int	main(void)
{
	srand(time(NULL));
	void *raw = serialize();
	checkAllocatedBytes(raw);
	Data *data = deserialize(raw);

	std::cout << "data->s1: " << data->s1 << std::endl;
	std::cout << "data->n: " << data->n << std::endl;
	std::cout << "data->s2: " << data->s2 << std::endl;
	delete (data);
	delete (reinterpret_cast<char *>(raw));
	return (0);
}
