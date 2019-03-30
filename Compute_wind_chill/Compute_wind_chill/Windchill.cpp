#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void ctof(double& temp);
void ftoc(double& temp);
double windchill(double tempF, double wind);

int main() {
	double temp; //temperature
	char scale; //original temperature scale that was entered
	double windspeed; //wind speed in MPH
	double WCF; //wind chill factor


	//collect data
	cout << "Enter the wind speed in MPH: ";
	cin >> windspeed;

	cout << "\nWhat temperature scale are you using (c or f): ";
	cin >> scale;

	cout << "\nEnter the current temperature: ";
	cin >> temp;

	//convert to F for use in windchill
	if (scale == 'c') 
		ctof(temp);
	else;

	WCF = windchill(temp, windspeed); //calculate windchill factor and assign to variable in main

	if (scale == 'c')
		ftoc(temp);
	else;

	cout << fixed << setprecision(1) << "\nThe current wind chill factor is " << WCF << scale;

	system("pause");
	return 0;

}

void ctof(double& temp) {//receives temp, and sends back new temp
	temp = 1.8*temp+32;//formula to convert C to F
}

void ftoc(double& temp) {//recieves temp and sends back new temp
	temp = (temp - 32)*(5 / 9);//formula to convert F to C
}

double windchill(double tempF, double wind) {//recieves temperature in F (tempF), wind speed (wind)
	double chill;//wind chill factor to be returned

	chill = 35.74 + 0.6215*tempF - (35.75*pow((wind), 0.16)) + 0.4275*tempF*(pow(wind, 0.16));//computes wind chill factor

	return chill;//returns wind chill factor
}