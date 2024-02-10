#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <class T>
void	print(T arg)
{
	std::cout << arg << std::endl;
}

template <class T>
void	iter(T *array, int size, void (*f)(T element))
{
	int	i;

	for (i = 0; i < size; i++)
		f(array[i]);
}


#endif