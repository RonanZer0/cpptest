#include <windows.h>
#include <stdio.h>
#include <iostream>

#include "func.cpp"

int main(int argc, char const *argv[]) {
	std::cout << "cout\n";
	printf("printf\n");
	cpp(12);
	system("PAUSE");
	return 0;
}
