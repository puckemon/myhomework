#include <iostream>
#include "something.h"
#include "something.cc"

int main(){

	long long n;

std::cin >> n;

std::cout << mp::fibonachi(n) << '\n';

int a = 4;
int b = 4;

mp::testpointers(a, b);

std::cout << a << '\n' << b << '\n';

return 0;
}