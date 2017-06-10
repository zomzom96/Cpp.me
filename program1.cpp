// File Name: Program1.cpp


//Assignement Number: 1

//Decription: Program that converts student grades from percentage to letter grade

//Last Changed: 08-31-2016 12:04

# include <iostream>

using namespace std;

int main()
{

int grade_num;

            //identifying the grade number as an integer

cout<< "Please enter numerical grade in percentage:"<< endl;

cin>> grade_num;

            //each grade letter interval
    while ((grade_num<0)||(grade_num>100))

    {

        cout<< "Invalid Input"<< endl;
        cout<< "Please enter a valid numerical grade (0<=grade<=100)"<< endl;
        cin>> grade_num;

    }


    if((grade_num>=0)&&(grade_num<=80))

    {

        cout<< "The student has secured a grade letter of F"<< endl;

    }

    else if ((grade_num>=81)&&(grade_num<=86))

    {

        cout<< "The student has secured a grade letter of D"<< endl;

    }

    else if ((grade_num==87)||(grade_num==88))

    {

        cout<< "The student has secured a grade letter of C"<< endl;

    }

    else if ((grade_num==89)||(grade_num==90))

    {

        cout<< "The student has secured a grade letter of B"<< endl;

    }

    else if((grade_num>=91)&&(grade_num<=100))

    {

        cout<< "The student has secured a grade letter of A"<< endl;

    }

return 0;

}
