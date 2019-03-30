#include <iostream>
#include <cmath>
using namespace std;

void ctof(double& temp);
void ftoc(double& temp);
void windchill(double tempF, double wind, double chill);

int main() {
	double temp; //temperature
	char scale; //original temperature scale that was entered
	double windspeed; //wind speed in MPH
	double WCF; //wind chill factor
	char newscale;//used to determine what scale the temperature is currently stored as

	//collect data
	cout << "Enter the wind speed in MPH: ";
	cin >> windspeed;

	cout << "\nWhat temperature scale are you using (c or f): ";
	cin >> scale;

	cout << "\nEnter the current temperature: ";
	cin >> temp;

	//convert to F for use in windchill
	if (scale == 'c') {
		ctof(temp);
		newscale = 'f';//used as a flag to know if conversion is needed later
}
	else;


}

void ctof(double& temp) {//receives temp, and sends back new temp
	temp = 1.8*temp+32;//formula to convert C to F
}

void ftoc(double& temp) {//recieves temp and sends back new temp
	temp = (temp - 32)*(5 / 9);//formula to convert F to C
}