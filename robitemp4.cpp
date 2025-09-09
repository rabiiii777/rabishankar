#include <iostream>
using namespace std ;
//this code is developed by  Rabi 
int main() {
	char choice ;
	double temp , converted ;
	cout << "temperature conversion program \n";
	cout << "choose conversion type :\n";
	cout << "C-convert celsius to fahrenheit \n";
	cout << "F-convert fahrenheit to celsius \n";
	cout << "Enter your choice(C/F):";
	cin >> choice;
	if (choice == 'C'|| choice == 'c'){
		cout << "enter temperature in celsius: ";
	cin >> temp;
	converted = (temp * 9.0 / 5.0)+ 32;
	cout << temp << " C = " << converted << " F " << endl;
}
    else if (choice == 'F' || choice == 'f') {
    	cout << "enter temperature in fahrenheit:";
    	cin >> temp ;
    	converted = (temp - 32)* 5.0 / 9.0;
    	cout << temp << " F =" << converted << " C " << endl;
	}
	else {
		cout << "invalid choice ! Please enter c or F." << endl;
	}
    return 0;
}
