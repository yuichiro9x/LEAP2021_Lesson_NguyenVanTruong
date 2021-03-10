#include <iostream>

int main(int argc, char** argv) {
	int n, r = 1;
	std::cin>>n;
	for(register int i = n; i > 0; i--){
		r *= i;
	}
	std::cout<<r;;
	return 0;
}
