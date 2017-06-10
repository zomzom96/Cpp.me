# include <iostream>

using namespace std;

int main (void)

{

int Result;
//the result of performing the mathematical operation on the two numbers inserted by the user

int X, Y;
// the two numbers attempted to be entered by the user

int Operation_Type;
// Operation type 

cin >> X;
cin >> Y;

cout <<"Please Choose an Operation Type from the list 1. Addition, 2. Subtraction, 3.Multiplication, 4. Division": endl;

cin >>Operation_Type;

//In case the user chooses a number outside our interval of options

if((Operation_Type>4)&&(Opertion_Type<=0))

{

cout << "is an invalid option. Choices were 1,2,3 and 4. Quiting program:" <<Operation_Type<< : endl ;

}

//In case the user chooses one of our valid operations
 
if((Operation_Type>0)&&(Opertion_Type<=4))

{

if Operation_Type=1 //Addition

{

Result = X + Y;

   cout << "Value of Result is :" << Result << endl ;
}

else if Operation_Type=2 //Subtraction

{

Result = X - Y

   cout << "Value of Result is  :" << Result << endl ;
}

else if Opertion Type=3 //Multiplication

{

Result = X * Y;

   cout << "Value of Result is :" << Result << endl ;
}

else if Operation_Type=4 //Division 

{

else if Y=0 //If the denominator is zero

{

cout << "The number X / Y cannot be found because cannot divide by zero.": endl;

}

Result = X / Y;

   cout << "Value of Result is  :" << Result << endl;
}

return 0;
}
