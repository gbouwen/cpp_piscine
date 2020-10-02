/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gbouwen <gbouwen@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 16:43:44 by gbouwen       #+#    #+#                 */
/*   Updated: 2020/10/02 11:30:22 by gbouwen       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <deque>
#include <list>

void	subjectMain(void)
{
	MutantStack<int> mStack;

	mStack.push(17);
	std::cout << "pushed 17 to stack" << std::endl;

	std::cout << "mStack.top(): " << mStack.top() << std::endl;
	std::cout << "size: " << mStack.size() << std::endl;

	mStack.pop();
	std::cout << "pop" << std::endl;
	std::cout << "size: " << mStack.size() << std::endl;

	mStack.push(3);
	std::cout << "pushed 3 on stack" << std::endl;
	mStack.push(5);
	std::cout << "pushed 5 on stack" << std::endl;
	mStack.push(737);
	std::cout << "pushed 737 on stack" << std::endl;
	mStack.push(0);
	std::cout << "pushed 0 on stack" << std::endl;
	std::cout << "size: " << mStack.size() << std::endl;

	MutantStack<int>::iterator it = mStack.begin();
	MutantStack<int>::iterator ite = mStack.end();

	++it;
	--it;
	std::cout << "printing with iterator: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mStack);
	return ;
}

void	extraMain(void)
{
	MutantStack<std::string>	mStack;

	mStack.push("world");
	std::cout << "pushed 'world' on stack" << std::endl;
	mStack.push("hello");
	std::cout << "pushed 'hello' on stack" << std::endl;

	MutantStack<std::string>::const_reverse_iterator	crit = mStack.rbegin();
	MutantStack<std::string>::const_reverse_iterator	crite = mStack.rend();

	std::cout << "printing with const_reverse_iterator:" << std::endl;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		crit++;
	}
	std::cout << "---" << std::endl;

	MutantStack<std::string>  mStack2 = mStack;
	std::cout << "used overloaded assignation operator" << std::endl;

	MutantStack<std::string>::reverse_iterator	rit = mStack2.rbegin();
	MutantStack<std::string>::reverse_iterator	rite = mStack2.rend();
	std::cout << "printing with reverse_iterator" << std::endl;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		rit++;
	}

	return ;
}

void	extraMainTwo(void)
{
	MutantStack<int>	mStack;

	mStack.push(5);
	std::cout << "pushed 5 on stack" << std::endl;
	mStack.push(10);
	std::cout << "pushed 10 on stack" << std::endl;

	MutantStack<int>		mStack2(mStack);
	std::cout << "used copy constructor" << std::endl;

	MutantStack<int>::iterator	it = mStack.begin();
	MutantStack<int>::iterator	ite = mStack.end();
	std::cout << "printing with iterator: " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << "---" << std::endl;
	MutantStack<int>::const_iterator	cit = mStack.begin();
	MutantStack<int>::const_iterator cite = mStack.end();
	std::cout << "printing with const_iterator: " << std::endl;
	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		cit++;
	}
	return ;
}

int main()
{
	std::cout << "--- Testing subject main ---" << std::endl;
	subjectMain();
	std::cout << "----------------------------" << std::endl;
	std::cout << "--- Testing extra main ---" << std::endl;
	extraMain();
	std::cout << "--------------------------" << std::endl;
	std::cout << "--- Testing extra main 2---" << std::endl;
	extraMainTwo();
	std::cout << "--------------------------" << std::endl;

	return (0);
}
