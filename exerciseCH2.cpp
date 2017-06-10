

//Decription: Practice program that changes gallons to liters 

//Last Changed: 09-25-2016

# include <iostream>

using namespace std;

int main()

{
	const double liters = 3.78533;  //how many liters are in a Gallon
	
	double Gallons, Liters;
	
	cout << "please enter the number of gallons that you need to convert to liters:" << endl;
	
	cin >> Gallons;
	
	Liters = Gallons*liters;
	
	cout << "Number of liters =" << Liters << endl;
	
return 0;




}
