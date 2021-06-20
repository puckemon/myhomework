#include <iostream>
#include <string>
#include <vector>
#include "class.h"
#include "class.cc"

int destination_comparison(std::string a, jj::Aeroflot &b) {
	if (b.GetPoint() == a) {
		return b.GetNumber();
	}
}

int main() {
	std::string date, time, point, tip;
	int number, n;
	
	std::vector<jj::Aeroflot> a;
	std::cin >> n;
	a.reserve(n);
	for (int i = 0; i < n; i++) {
		std::cin >> point >> number >> tip >> time >> date;
		a.emplace_back(point, number, tip, time, date);
	}
	//for (int i = 0; i < n; i++) {
	//	std::cout << a[i].GetDate()<<'\n';
	//}
	std::string destination;
	std::cin >> destination;
	for (int i = 0; i < a.size(); i++) {
		std::cout << destination_comparison(destination, a[i])<<'\n';
	}
	


}