#include <iostream>
#include "something.h"

long long mp::fibonachi(long long n) {
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return 1;
	}
	return mp::fibonachi(n - 1) + mp::fibonachi(n - 2);
}
void mp::testpointers(int& k, int i) {
	i++;
	k++;
	std::cout << k <<'\n'  << i<<'\n';
}
