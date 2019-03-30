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

void ctof(int& temp) {//receives temp, and sends back new temp
	temp = 1.8*temp+32;//formula to convert C to F
}

void ftoc(int& temp) {//recieves temp and sends back new temp
	temp = (temp - 32)*(5 / 9);//formula to convert F to C
}