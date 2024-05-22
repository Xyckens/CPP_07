#ifndef		ITER_HPP
# define	ITER_HPP

#include <iostream>

template <class myType>
myType iter(myType *array, int N, void (*f)(const myType& array))
{
	for (int i = 0, i < N, i++)
		f(array[i]);
}

#endif