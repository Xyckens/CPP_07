#ifndef		ITER_HPP
# define	ITER_HPP

#include <iostream>

template <class myType>
void	print(myType& c)
{
	std::cout << "Look: " << c << std::endl;
}

template <class myType>
void increment(myType& c)
{
	c++;
}

template <class myType>
void iter(myType *array, int N, void (*f)(myType& array))
{
	for (int i = 0; i < N; i++)
		f(array[i]);
}

#endif