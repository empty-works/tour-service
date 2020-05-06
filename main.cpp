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

	std::cout << std::endl;
	std::string ruler {"1234567890123456789012345678901234567890123456789012345678901234567890"};
	std::cout << ruler << std::endl;
	std::cout << std::endl;

	Tour cool_tours
	{"Tour Ticket Prices from San Francisco", 
		{
			{
				"South Korea",
				{
					{"Seoul", 8797979, 400.98},
					{"Busan", 3495295, 424.12},
					{"Incheon", 2898374, 415.54},
					{"Daegu", 2459698, 425.23}
				}
			},
			{
				"Japan",
				{
					{"Tokyo", 8635903, 528.22},
					{"Yokohama", 3648592, 450.25},
					{"Osaka", 2689489, 350.85},
					{"Nagoya", 2285938, 439.02}
				}
			},
			{
				"Philippines",
				{
					{"Quezon City", 2849284, 439.68},
					{"Manila", 1758939, 429.22},
					{"Davao City", 1698385, 358.86},
					{"Caloocan", 1583948, 421.99}
				}
			}			
		}
	};	

	std::cout << std::setw(53) << std::right << cool_tours.name << std::endl;
	std::cout << std::endl;
	std::cout << "Country"; 
	std::cout << std::setw(17) << std::right << "City";
	std::cout << std::setw(31) << std::right << "Population";
	std::cout << std::setw(14) << std::right << "Price";
	std::cout << std::endl;
	std::cout << "----------------------------------------------------------------------" << std::endl;
	for(auto &country : cool_tours.countries) {

		bool is_first {true};	
		for(auto &city : country.cities) {
		
			if(is_first)
				std::cout << std::setw(20) << std::left << country.name;
			else
				std::cout << std::setw(20) << std::left << "";
			is_first = false;
			std::cout << std::setw(25) << std::left << city.name;
			std::cout << std::setw(17) << std::left << city.population;
			std::cout << "\t" << city.cost;
			std::cout << std::endl;
		}
	}		
	std::cout << std::endl;
	return 0;
}
