//Assignement Number: 10
//Decription:   program to obtain three numbers from the user and order them in ascending and descending order
//Last Changed: 11/12/2016

#include <iostream>
using namespace std;

// Method to get user input
void getUserInput(double &x, double &y, double &z);

// Method to arrange three numbers in ascending order
void ascending(double &x, double &y, double &z);

// Method to arrange three numbers in descending order
void descending(double &x, double &y, double &z);

// Method to print three numbers
void print(double x, double y, double z);

// Method to swap two numbers
void swap(double &a, double &b);

int main(){

			double x, y, z;

			getUserInput(x, y, z);

			ascending(x, y, z);

			cout<<"Re-ordering them in the ascending order, we get:"<<endl;
			print(x, y, z);

			descending(x, y, z);

			cout<<"Re-ordering them in the descending order, we get:"<<endl;
			print(x, y, z);

			return 0;
}

// Functions definations
void getUserInput(double &x, double &y, double &z){
													cout<<"Enter three numbers"<<endl;
													cin>>x>>y>>z;
}

void ascending(double &x, double &y, double &z){
													if (x > y) swap(x, y);
													if (y > z) swap(y, z);
													if (x > y) swap(x, y);
}

void descending(double &x, double &y, double &z){
													if (x < y) swap(x, y);
													if (y < z) swap(y, z);
													if (x < y) swap(x, y);
}

void print(double x, double y, double z){
											cout<<x<<" "<<y<<" "<<z<<endl;
}

void swap(double &a, double &b){
									double temp = a;  //we've created and set Temp here so we can swap 
									a = b;		      //the two values of a and b as the following
									b = temp; 
}
