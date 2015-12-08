#include <iostream>

int main(int argc, char const *argv[]) {
	std::cout << "cout\n";
	printf("printf\n");
	cpp();
	return 0;
}

void cpp() {
	for (int C = 0; C < 12; C++) {
		std::cout<< "C++;\n";
	}
}
