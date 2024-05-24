#ifndef		ARRAY_HPP
# define	ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
	T*				array;
	unsigned int	len;
public:
	Array(): array(new T[0]), len(0) {}
	Array(unsigned int n): array(new T[n]), len(n) {}
	Array(Array const &copy): array(new T[copy.len]), len(copy.len)
	{
		for (unsigned int i = 0; i < copy.len; i++)
			this->array[i] = copy.array[i];
	}

	Array& operator=(const Array &copy)
	{
		if (this != &copy)
		{
			if (array)
				delete [] array;
			len = copy.len;
			array = new T[copy.len];
			for (unsigned int i = 0; i < copy.len(); i++)
				this->array[i] = copy.array[i];
		}
		return (*this);
	}

	class OutOfBoundsException: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Index out of bounds\n");
			}
	};

	T &operator[](unsigned int i)
	{
		if (i >= len)
			throw OutOfBoundsException();
		return (array[i]);
	}

	unsigned int	size()
	{
		return len;
	};
	~Array() { delete [] array;};
};

#endif