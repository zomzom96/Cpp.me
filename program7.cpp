
//Assignement Number: 7
//Decription:  program that displays characteristics of a number 
//Last Changed: 10/26/2016

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//function prototypes

int Round_up(double x);

double Maginitude(double r, double i);

double phase(double r, double i);

const double PI=3.1417;        //PI constant

double fractpart, intpart;    //fractional part and inpart of the user's input

int main()
{

   int userChoice;
   cout<<"Enter 1 to obtain the characteristics of a real number and 2 for a complex number:"<<endl;
   cin>>userChoice;
   //for first choice 
   
   if(userChoice==1){
      
      float real;
      cout<<"\nTo obtain the characteristics of a real number, please enter a whole number:"<<endl;
      cin>>real;

      cout<<"\nThe characteristics of "<<real<<" are as follows:"<<endl;
      cout<<"\nNumber  Integer  Fraction  Round  Floor  Ceil\n";

      
      fractpart = modf (real , &intpart);
      
      cout<<"\n"<<setw(6)<<real<<setw(9)<<intpart<<setw(10)<<fractpart<<setw(7)
          <<Round_up(real)<<setw(7)<<floor(real)<<setw(6)<<Round_up(real)<<endl;
   }
   
   //for second choice 
   else if(userChoice==2){
      
      int realNum;
      int imgNum;
      cout<<"To obtain the characteristics of a complex number, please enter the integer and imaginary part of the number:";
      cin>>realNum>>imgNum;

      cout<<"\nThe characteristics of "<<realNum<<"+("<<imgNum<<")j are as follows:"<<endl;
      cout<<setw(6)<<"\nNumber  Real  Imaginary  Conjugate  Magnitude  Phase(degrees)"<<endl;
      cout<<"\n"<<realNum<<"+("<<imgNum<<")j"<<setw(4)<<realNum<<setw(11)<<imgNum;
      
      if(imgNum>0){
         
         imgNum=(-1)*imgNum;    
         cout<<setw(9)<<realNum<<""<<imgNum<<"j"<<setw(11)<<Maginitude(realNum,imgNum);
      }
      
      else{
         imgNum=(-1)*imgNum; 
         cout<<setw(8)<<realNum<<"+"<<imgNum<<"j"<<setw(11)<<Maginitude(realNum,imgNum);
      }
      
      cout<<fixed<<setprecision(2)<<setw(15)<<phase(realNum,imgNum)<<endl;
   }
   
return 0;

}

//Return round value

int Round_up(double x)
{
  if(fractpart>= 0.5){
     
     return ceil(x);
  }
  
  else{ 
     
     return x;
  }
}

//returns the magnitude of the complex number

double Maginitude(double r, double i)
{
  return sqrt(r*r+i*i);
}

//Returns the phase of the complex number
double phase(double r, double i)
{
  return atan (i/r) * (180/PI) * (-1);
}

	
	
	
	
	
	
	

