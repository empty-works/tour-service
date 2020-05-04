#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {

	std::string name {};
	int population {0};
	double cost {0.0};
};

struct Country {

	std::string name {};
	std::vector<City> cities {};
};

struct Tour {

	std::string name {};
	std::vector<Country> countries {};
};

int main() {

	return 0;
}
