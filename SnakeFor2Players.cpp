#include<iostream>
#include<string.h>
#include<time.h>
#include <cstdlib>
#define MAX_NUM 6
using namespace std;
int randomfunc(int &score);
int main()
{
int p1_score=0,p2_score=0;
cout<<endl;
cout<<endl;
cout<<"========================================"<<endl;
cout<<endl;
cout<<"\t\t\t\t SNAKE AND LADDER GAME \t\t\t\t"<<endl;
cout<<endl;
cout<<"========================================"<<endl;
cout<<endl;
cout<<"\t\t\tdesigned by bennyyy\t\t\t"<<endl;
cout<<"========================================"<<endl;
int i;
string player1,player2;

srand(time(0));

cout<<"enter the name of  player 1"<<endl;
cin>>player1;
cout<<"enter the name of the player 2 "<<endl;
cin>>player2;
cout<<"the position of player1 and player2 is 0 initially"<<endl;

while(p1_score<30)
{

cout<<player1<<" It is your turn press any key to play "<<endl;
cin.get();
randomfunc(p1_score);
cout<<"your score is "<<p1_score<<endl;
cout<<player2<<"it is your turn press any key to play"<<endl;
cin.get();
randomfunc(p2_score);
cout<<"your score is "<<p2_score<<endl;

}
if(p1_score>p2_score)
{
cout<<player1<<"is the winner"<<endl;
}
if(p2_score>p1_score)
{
cout<<player2<<"is the winner"<<endl;
}
if(p1_score==p2_score)
{
cout<<"match is draw"<<endl;
}
}
int randomfunc(int &score)
{
int random;
random=rand()%MAX_NUM;
cout<<"your number is "<<random<<endl;
score=random+score;
switch(score)
{
case 98 :score=28;
     cout<<"you ran into a snake!"<<endl;

    break;
case 95 :score=24;
cout<<"you ran into a snake!"<<endl;

break;
case 92 :score=51;
cout<<"you ran into a snake!"<<endl;

break;
case 83 :score=19;
cout<<"you ran into a snake!"<<endl;

break;
case 73 :score=1;
cout<<"you ran into a snake!"<<endl;

break;
case 69 :score=33;
cout<<"you ran into a snake!"<<endl;

break;
case 64 :score=36;
cout<<"you ran into a snake!"<<endl;

break;
case 59 :score=17;
cout<<"you ran into a snake!"<<endl;

break;
case 55 :score=7;
cout<<"you ran into a snake!"<<endl;

break;
case 52 :score=11;
cout<<"you ran into a snake!"<<endl;

break;
case 48 :score=9;
cout<<"you ran into a snake!"<<endl;

break;
case 46 :score=5;
cout<<"you ran into a snake!"<<endl;

break;
case 44 :score=22;
cout<<"you ran into a snake!"<<endl;

break;
case 8 :score=26;
cout<<"luckyyy boy u got ladder"<<endl;

break;
case 21 :score=82;
cout<<"luckyyy boy u got ladder"<<endl;

break;
case 43 :score=77;
 cout<<"luckyyy boy u got ladder"<<endl;

break;
case 50 :score=91;
cout<<"luckyyy boy u got ladder"<<endl;

break;
case 54 :score=93;
cout<<"luckyyy boy u got ladder"<<endl;

break;
case 62 :score=96;
cout<<"luckyyy boy u got ladder"<<endl;

break;
case 66 :score=87;
cout<<"luckyyy boy u got ladder"<<endl;

break;
case 80 :score=100;
cout<<"luckyyy boy u got ladder"<<endl;

}
return score;
}
