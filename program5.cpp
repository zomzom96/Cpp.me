//File name: program5.cpp

//Assignement Number: 5

//Decription: Program that prints a one-month calendar using two values entered by the user 		

//Last Changed: 10-05-2016

# include <iostream>

#include <iomanip>

using namespace std;

int main()

{

int d, m; //d is the day in which the month starts at, m is the number of days in the month

cout << "Enter the number of days in the month:";

cin >>m;
	 
	if(m < 28|| m > 31) //In case the user enters an invalid number of days for the month that is to be posted
	
		{

		do{

		cout << "Invalid input. Please re-enter a valid input!" <<endl;
		cout << "The number of days in the month: ";
		cin >>m;

		} while(m <28|| m > 31);
		
		}

cout <<"Enter day of the week on which month starts (1=Sun, 7=Sat):";

cin >>d;

	if(d<1||d>7) //In case the user enters an invalid input in the day in which the month starts at
		
		{
	
		do{

		cout << "Invalid input. Enter Again!"<<endl;

		cout<<"The day of the week on which the month starts  (1=Sun, 7=Sat):";
		
		cin >>d;
		
		} while(d<1||d>7);
		
		}

cout << endl;				//After successful imput for d && m then this is the code for formatting of the calendar

   
cout << setw (6) << "Sun" << setw(6) << "Mon" << setw(6) << "Tues" << setw(6) << "Wed" << setw(6) << "Thurs" << setw(6) << "Fri" << setw(6) << "Sat" << endl << endl;

	 
	 for(int i = 1; i < d; ++i) 
		
		{
			
		cout << setw(6) << " ";
			
		}
	 
	 for(int i = 1; i <= m; ++i) //If i Is smaller than or equal the number of days in the month then excute and last post increment i by 1
	 
		{
		 
			if((i + d - 2) % 7 == 0)
		
				{
				
				cout << endl;
				
				}
		   
		   cout << setw(6) << i;		//posting the days right aligned 
	   }
   
   cout << endl;
   
   return 0;
		
}
		


