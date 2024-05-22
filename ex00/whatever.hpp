#ifndef		WHATEVER_HPP
# define	WHATEVER_HPP

#include <iostream>

template <class myType>
myType min (myType a, myType b)
{
	if (a < b)
		return a;
	else
		return b;
}

template <class myType>
myType max (myType a, myType b)
{
 return (a>b?a:b);
}

template <class myType>
void	swap(myType &a , myType &b)
{
	myType tmp = b;
	b = a;
	a = tmp;
}

#endif