//John Klepeis
//This program outputs wind chill factor when

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void ctof(double& tempctof);//converts temperature from c to f
void ftoc(double& tempftoc);//converts temperature from f to c
double windchill(double tempF, double wind);//finds winchill using the temperature in f and the wind speed

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

	
	if (scale == 'c')//convert to F for use in windchill
		ctof(temp);
		
	WCF = windchill(temp, windspeed); //calculate windchill factor and assign to variable in main

	if (scale == 'c')//convert back to c if needed
		ftoc(WCF);

	cout << fixed << setprecision(1) << "\nThe current wind chill factor is " << WCF << scale << endl;//output results in original scale with 1 decimal

	system("pause");
	return 0;

}

void ctof(double& tempctof) {//receives temp, and sends back new temp
	tempctof = 1.8*tempctof+32;//formula to convert C to F
}

void ftoc(double& tempftoc) {//recieves temp and sends back new temp
	tempftoc = (tempftoc - 32)/1.8;//formula to convert F to C
}

double windchill(double tempF, double wind) {//recieves temperature in F (tempF), wind speed (wind)
	double chill;//wind chill factor to be returned

	chill = 35.74 + 0.6215*tempF - (35.75*pow((wind), 0.16)) + 0.4275*tempF*(pow(wind, 0.16));//computes wind chill factor

	return chill;//returns wind chill factor
}