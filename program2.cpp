//File Name: program2.cpp

//Assignment Number: 2
//Description: A program that calculates thes average of all numbers entered by a user
//Last Changed:

#include <iostream>
using namespace std;
int main (void)

{
    float sum = 0,average = 0, input; 
    int count = 0, Number_of_positive_values=0, Number_of_negative_values=0; //declaring the variable data types & initial values
	
	cout.setf(ios::fixed); 
    cout.setf(ios::showpoint);
    cout.precision(3);
    
	while (input !=0)
	{
    cout << "Enter a number: ";
    cin >> input;
	if (input !=0)

		{

			{
				if (input > 0)
				Number_of_positive_values = Number_of_positive_values + 1;
			}
			
			{
				if (input < 0)
				Number_of_negative_values = Number_of_negative_values + 1;
			}
			count = count + 1;
		}      
      
			sum = input + sum; //the sum of all numbers entered
	}
    
    // Get average and print it
    average = sum / count;
    cout << "Number of positive values: " <<Number_of_positive_values<< endl;
    cout << "Number of negative values: " <<Number_of_negative_values<< endl;
    cout << "The average is: " << average << endl;
    
    
     
     
    return 0;
}	
