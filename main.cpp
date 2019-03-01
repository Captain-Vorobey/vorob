#include <iosteram>

template <class T>
bool is_even(T a)
{
	return a % 2 == 0;
}

int main()
{
	std::cout << is_even(10) << std::endl;
	return 0;
}
