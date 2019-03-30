#include <iostream>
#include <cmath>
using namespace std;

void ctof(int& temp);
void ftoc(int& temp);
void windchill(double tempF, double wind, double chill);

int main() {
	double temp; //temperature
	char scale; //temperature scale
	double windspeed; //wind speed in MPH
	double WCF; //wind chill factor

	cout << "Enter the wind speed in MPH: ";
	cin >> windspeed;

	cout << "\nWhat temperature scale are you using (c or f): ";
	cin >> scale;

	cout << "\nEnter the current temperature: ";
	cin >> temp;

}