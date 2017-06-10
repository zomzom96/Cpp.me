

//Assignement Number: 4

//Decription: Program that calculates the FACTORIAL or FIBBONACCI series of integer n 

//Last Changed: 09-25-2016 8:15 PM

# include <iostream>

using namespace std;

int main()

{ 

cout << "Enter a choice:"<< endl << "1- Factorial of number n" << endl <<"2- Fibonacci series with n integers, beyond the seed values"<<endl;
		
char x;
		
cin >> x;
		
switch (x)
			
		{

		case '1': 	//The user here chooses the first operation "Finding Factorial"	
					
			{
					
			int num,factorial=1;

			cout<<"Enter a nonzero positive integer, n:  ";

			cin>> num;

			if ( num >= 0 )
							
				{

				for(int a=1; a<=num; a++)
	
					{
					
					factorial=factorial*a;

					}

				cout<<"Factorial of "<< num << " is "<< factorial<<endl;
						
				}		
							
			else 		//If the user enters a number <= 0
								
				{ 
				
				cout << "Sorry! The value of n has to be greater than zero." << endl;
							
				return 0; 
						
				}
			
			}
			
			break;

//If the user chooses to perform the 2nd operation "Finding Fibonacci series"			

		case '2':
			
			{
			
			int n, firstTerm = 1, secondTerm = 1, nextTerm;
									
			cout << "Enter nonzero positive integer, n that is greater than 2 to generate Fibonacci series: ";
									
			cin >> n;
								
			if (n>2) 
					
				{

				cout << "Fibonacci Series: " << firstTerm << "  " << secondTerm << "  ";
										
				for (int i = 1; i <= n; ++i) 
										
					{
						nextTerm = firstTerm + secondTerm;
													
						cout << nextTerm << "  ";
													
						firstTerm = secondTerm;
													
						secondTerm = nextTerm;
						
			 
					}
			
				}
								
			else // If the user enters n <= 2
			
				{
										
				cout << "Sorry! The value of n has to be greater than 2." << endl;
									
				}
			
			cout << endl;	//If I don't include this the series and the next command will be printed on the same line					
			
			} 
								
			break;

//If the user enters a number that is not from the menu of operations offered by the program in the beginning of the main
				
		default: cout << "**********" << "\n\n" << "Sorry wrong choice" << "\n\n" << "**********"<< endl;
		
		}
		
return 0;
		
}
	
