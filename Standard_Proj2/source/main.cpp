#include <iostream>

int fibonacci(int n)
{
	if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int first = 0;
    int second = 1;
    int current = 0;

    for (int i = 1; i < n; ++i) {
         current = first + second;
         first = second;
         second = current;
    }
	return current;
    
}

int main(int argc, char** argv)
{
    for(int i = 1; i < argc; ++i)
    {
        std::cout << argv[i] << '\n';
    }

    std::cout << fibonacci(3) << '\n';

    std::cout << std::endl;
	return 0;
}
