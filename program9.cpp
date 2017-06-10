//Assignement Number: 9
//Decription: Snake and Ladder game 

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

#define DESTINATION 30 
                      // defining the winning position of the game

int dice() {
   srand(time(NULL)); 
                      
                      // used for seeding in order to get
                      
                      // different random values each time
   
   return (rand()%6 +1); 
                     
                      // since %6 gives 0 to 5, so add 1.
}

int snake(int n) {
			
                   {  //Starting the block of conditions for snakes
					
					if (n == 17)
					   return 4;
					else if (n == 19)
						return 7;
					else if (n == 21)
						return 9;
					else if (n == 27)
						return 1;
				   } //end of the block of conditions
  
   return 0;   //if none of the conditions are satisfied 
}

int ladder(int n) {
				    
				    {   //start of the block of conditions for ladder function
						
				    if (n == 3)
					   return 22;
					else if (n == 5)
						return 8;
					else if (n == 11)
						return 26;
					else if (n == 20)
						return 29;
					} 	//End of the block of conditions for the ladder function
   
   return 0;    //Return statement to exit the function if none of the conditions are satisfied 
}

int main () {
   
   int currentPos = 1;  // Player starts the game at 1
   int value; 			// The number we get on the dice
   int count = 0;       // To keep track of the number of dice rolls
   char choice;

   choice = 'N';        // By default consider choice as NO
                        // so if the user hits return without entering Y or y then the program is going to exit
   
   do {
           if (choice == 'Y' || choice == 'y') {
           
           value = dice();
           
           count++; // increment the number of dice rolls
           
           cout << "The dice reads " << value <<".\n";
           
           currentPos += value;
           
           if (currentPos > DESTINATION) { // check if current position (the new calculated position after rolling dice) is above 30
           
               cout << "Sorry! It\'s a very high number, Roll the dice again!\n";
           
               currentPos -= value; // substract the previous value
           }
           
           else if (currentPos == 3 || currentPos == 5 || currentPos == 11 || currentPos == 20) { // check for ladder
           
               currentPos = ladder(currentPos);
           
               cout << "You are on a ladder to " << currentPos << "!! Yaay!\n";
           }
           
           else if (currentPos == 17 || currentPos == 19 || currentPos == 21 || currentPos == 27) { // check for snake
           
               currentPos = snake(currentPos);
           
               cout << "Oops the snake just bit you!! Sorry, you are now at " << currentPos << ".\n";
           }
           
           else if (currentPos == DESTINATION) { // check if destination has been reached
           
               cout << "Yaay!! You have successfully reached your destination and you took " << count << " tries to reach there.\nCongratulations.\nDo you want to play again? Enter ‘y’ or ‘Y’ to continue.\n";
			   
			   currentPos =0, count=0;  	//setting the current position and count to 0 again
											//so if the player decides to playAgain it doesn't
											//use the previous values of the count and currentPos
               
               cin >> choice;
           
           if (choice == 'N' || choice == 'n') // if user enters N, then exit
           
                   break;
           } //end of else if 
           
           else {
           
                 cout << "You are now at " << currentPos << "!!!\n"; // this is used if ladder, snake and destination not encountered
				
				}
       }
       
       cout << "Rolling the dice! Enter 'Y' or 'y' to roll! "<<endl;
       
       cin >> choice;
   
   } while (choice == 'Y' || choice == 'y');
   
   cout << "Goodbye!\n";
   
   return 0;
}
