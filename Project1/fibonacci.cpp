#include <iostream>


class Fibonacci
{
public:
	int a, b, c;
	void generate(int);
};

void Fibonacci::generate(int n)		

// To access a global variable when there is a local variable with same name

{
	a = 0;
	b = 1;
	std::cout << a << " " << b;
	for (int i = 1; i < n - 2; i++)
	{
		c = a + b;
		std::cout << c;
		a = b;
		b = c;
	}
}

int main()
{
	std::cout << " " << std::endl;
	std::cout << " :";
	int n;
	std::cin >> n;

	Fibonacci fibonacci;
	fibonacci.generate(n);

	return 0;
}