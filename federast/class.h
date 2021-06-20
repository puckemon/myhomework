#include<string>

#ifndef MY_AEROFLOT
#define MY_AEROFLOT
namespace jj {
	class Aeroflot {
	public:
		Aeroflot(std::string a, int b, std::string c, std::string d, std::string e) : point(a), number(b), tip(c), time(d), date(e) {};
		~Aeroflot() {};
		//Aeroflot() {};
		std::string GetPoint();
		std::string GetDate();
		std::string GetTime();
		int GetNumber();
	private:
		std::string point;
		int number;
		std::string tip;
		std::string time;
		std::string date;
	};
} //namespace end

#endif