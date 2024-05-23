#include "iter.hpp"

int main(void)
{
	char string[12] = "Era uma vez";
	iter(string, 10, print<char>);
	iter(string, 10, increment<char>);
	iter(string, 10, print<char>);
	std::cout << "\n\t\tBreak\n";

	int numbers[5] = {5, 1, 4, 6, 3001};
	iter(numbers, 5, print<int>);
	iter(numbers, 5, increment<int>);
	iter(numbers, 5, print<int>);

	return 0;
}