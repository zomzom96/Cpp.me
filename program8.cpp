//Assignement Number: 8
//Decription: Working with characters 

//**********************************************************************************************//

#include <iostream>

#include <string>

using namespace std;

int main()

{

char line; //variable declaration for characters entered by the user	

int len=0,ch; //len is the number of characters entered by the user, which is going to be incremented by 1 as long as the do-while condition is met

int a=0,e=0,i=0,o=0,u=0; //Intialization of the vowels and their count

int upper=0,lower=0; //number of Upper&lower case letters in the string

cout<<"Enter a message: ";

		do{

            cin.get(line);

            len=len+1;

           

            if(line=='a' || line=='A')

                        a=a+1;

            if(line=='e' || line=='E')

                        e=e+1;

            if(line=='i' || line=='I')

                        i=i+1;

            if(line=='o' || line=='O')

                        o=o+1;

            if(line=='u' || line=='U')

                        u=u+1;

            if(isupper(line))

                        upper=upper+1;

            if(islower(line))

                        lower=lower+1;

           

            } while (line != '\n'); //this line so that the program doesn't count newlines lines

//***********************************************************************************************************************************//
            
            cout<<"Available choices:"<<"\n"<<"1. 	Display length of message"<<endl;

            cout<<"2. 	Display numbers of vowels"<<endl;  //upper&lower case counted together

            cout<<"3. 	Display numbers of upper and lower case letters"<<endl;

            cout<<"4. 	Quit"<<endl;

           
			do{                            //giving the user the menu to choose from

                cout<<"\nEnter the number of your choice:";

                cin>>ch;

				switch(ch)

				{

				case 1: cout<<"Your Message Contain "<<len<<" character(s).\n"<<endl;       //choice 1
				
				cout<<"Available choices:"<<"\n"<<"1. 	Display length of message"<<endl;

				cout<<"2. 	Display numbers of vowels"<<endl;

				cout<<"3. 	Display numbers of upper and lower case letters"<<endl;

				cout<<"4. 	Quit"<<endl;

										break;

				case 2:cout<<"\n\nVowel counts:"<<endl;										//choice 2

										cout<<"A's:"<<a<<", "<<"E's:"<<e<<", "<<"I's:"<<i<<", "<<"O's:"<<o<<", "<<"U's:"<<u<<endl;

										break;

				case 3:cout<<"Number of letters: upper case "<<upper<<", lower case "<< lower<<"."<<endl;		//choice 3

										break;												
				
				default:			 //choice 4 or any other wrong choice
						{ return 0;} //if the user enters anything other than the available choice, then it will return 0
				}

            }while(ch!=4);
            
		  //The return 0 statement is not needed here since we have a Quit option in the menu we prompt the user 
}
