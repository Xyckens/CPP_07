#include "iter.hpp"

void	onlyprintE(char c)
{
	if (c == 'E')
		std::cout << "E";
	else
		std::cout << "E";
}

int main(void)
{
	char string[11] = "Era uma vez";
	iter(string, 10, onlyprintE);
	return 0;
}