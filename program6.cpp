

//Assignement Number: 6

//Decription: Are you Even/ Odd? - Game Problem "Dice"

//Last Changed: 10-13-2016 

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()

{

//Declaring variables
   int num1,num2,sum1,sum2;
   
   char ch;
  
   int seedVal=0;
   
//t is a 'time_t' type variable
    
    time_t t;
	
	seedVal = (unsigned) time (&t);
	
	srand(seedVal);
  
//This loop continue to execute until user enters other than 'y' or 'Y'

	while(true)
		{
		  
		cout<<"\nRolling the Dice!!"<<endl;
		  
		//Getting the two numbers by randomly rolling the dice two times
		num1=rand()%(6)+1;
		num2=rand()%(6)+1;
		  
		//Adding the randomly generated two numbers
		sum1=num1+num2;
		  
		/* Checking if the sum1 is even or not by dividing with 2
		* If yes,Then if block code will be executed
		* If not, then else block code will be executed
		*/

			if(sum1%2==0)
				{
				 
				 //Displaying the message
				 cout<<"You got "<<num1<<" and "<<num2<<". The total is "<<sum1<<" and is even, so Hurray!! you get another chance!"<<endl;
				  
				 //Rolling the two dice for the second time
				 cout<<"\nRolling the Dice!!"<<endl;
				  
				 //Generating the two numbers randomly
				 num1=rand()%(6)+1;
				 num2=rand()%(6)+1;
				  
				 //Displaying the two numbers
				 cout<<"You got "<<num1<<" and "<<num2<<"."<<endl;
				  
				 //calculating the sum
				 sum2=num1+num2;
				  
				 //If the total(sum1+sum2) is even then if block will get executed.
				
				if((sum1+sum2)%2==0)
						{
						
						//Displaying the message  
						cout<<"Total is "<<sum2<<" and grand total is "<<(sum1+sum2)<<"!! It's even, therefore, you WON!!! Congratulations! You secured a total of "<<(sum1+sum2)<<" for this game!"<<endl;
						
						}
			    
			    }
		   
		   else
			   {
				   
				   cout<<"You got "<<num1<<" and "<<num2<<". The total is "<<sum1<<" and is odd. Sorry, you lost this game."<<endl;
			   
			   }
		  
		//Promting the user to play again
		cout<<"\nDo you Want to continue(Y/N):";
		cin>>ch;

			if(ch=='y'||ch=='Y')
			    {

				continue;
				
				}
				
			else
			   {
			   
				break;
			   
			   }
		   }

     
return 0;
}
