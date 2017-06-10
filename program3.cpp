// File Name: Program3.cpp


//Assignement Number: 3

//Decription: Program that reverses the order of user's input

//Last Changed: 09-14-2016 11:53

# include <iostream>

using namespace std;

int main()

{

int Number, reverse = 0; //the user input is declared as Number and assign value of 0 to reverse
    
cout << "Enter an integer: ";

cin >> Number;

	if (Number<=0) //first warning if the input is Number<=0
		
		{
			cout << "Please enter a valid number; Number>0:" <<endl;

			cin >> Number;      //second chance for the user to input a value
		}
	
	if (Number<=0)	//terminating the program if still the cin Number<=0 

					{

						return 0;
	
					}	    
		
	else {
			while(Number != 0)    //we need the !=0 because it's a while loop
    
					{
						int remainder = Number%10;
						reverse = reverse*10 + remainder; 
						Number= Number/10;   //the Number is going to be approximated because we declared it as an integer
					}	
		 
		 }
			
cout << "The number reversed = " << reverse <<endl;
    
return 0;

}    
