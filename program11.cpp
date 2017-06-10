/*
Assignement Number: 11

Decription:   Write a C++ program to obtain the Mid_term and Final exam scores for 10 students
				(Student 1 to Student 10) from the user and then compute and print the following:
				1. Total score, where Total score = 40% (Mid_term) + 60%(Final).
				2. Maximum score in Mid-Term exam and the corresponding student
				3. Maximum score in Final exam and the corresponding student
				
Last Changed: 11/25/2016 */

/*-----------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------------------------------*/

#include<iostream>

using namespace std;

//Function that calculates total score

void calculateTotalScore(double MidTerm[], 
						 double FinalExam[])
											{
												int i;
												
												double total;
												
												cout << "\n\n Total Score of all students in the class: \n";
												
												//Iterating over scores
												
												for(i=0; i<10; i++)
																{
																	
																	//Calculating total score as Total = 40% (Mid_term) + 60%(Final)
																	total = ( (40/100.0) * (MidTerm[i]) ) + ( (60/100.0) * (FinalExam[i]) );
																	
																	//Printing result
																		if( total > 0 )
																					{
																						cout << "\n Student " << (i+1) << " : " << total;
																					}
																}
												cout << "\n\n";
											}

//Function that finds the maximum mid term score

void findMaxMidTermScore(double MidTerm[])
											{
												int i, max=0;
												
												//Iterating over midterm scores												
												for(i=0; i<10; i++)
																{	
												
												//Updating max score index
												if(MidTerm[i] > MidTerm[max])
																			{
																				max = i;
																			}
																}
												
												//Printing max mid term score details
												cout << "\n\n Maximum score in Mid-term exam is " << MidTerm[max] << 
														" and was scored by Student " << (max+1) << " \n\n";
											}

//Function that finds the maximum Final exam score

void findFinalExamScore(double FinalExam[])

											{
											   int i, max=0;
											   
											   //Iterating over final exam scores
											   for(i=0; i<10; i++)
																{
																   //Updating max score index
																   if(FinalExam[i] > FinalExam[max])
																									{
																										max = i;
																									}
																}
											   
											   //Printing max final exam score details
											   cout << "\n\n Maximum score in Final exam exam is " << FinalExam[max] << 
													   " and was scored by Student " << (max+1) << " \n\n";
											}


/*-----------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------------------------------------------*/

//Main function

int main()
			{   
				double MidTerm[10]={0}, FinalExam[10]={0};
				double mid=0, finalScore=0;
				int i, k, z, y;

//Iterating over 10 students
			for(i=0; i<10; i++)
							{
								   //Reading scores
								   cout << "\n\n Please enter the Mid-term and Final scores for student " << (i+1) << ": \n";
								   cin >> mid >> finalScore;
								   
								   //validating both midterm and finalscores
								   
								   k=0;
								   
								   if ( ( (mid < 0 || mid >100) && (finalScore < 0 || finalScore > 100) ) && k<=1 )
													   
													   {
														   cout << "\n Sorry, the scores have to be in the range of 0 to 100." 
																<< "Please enter the scores again: " << endl;
																
														   cin >> mid >>finalScore;
														   k++;
														   
														   if( ( (mid < 0 || mid >100) && (finalScore < 0 || finalScore > 100) ) )
																															{
																															
																															k++;
																															
																															}
													   }
								   
								   if (k > 1)
										   {
											   MidTerm[i]=0;
											   FinalExam[i]=0;
											   mid = 0;
											   finalScore = 0;
										   }

								   else
										{
										  MidTerm[i]=mid;
										  FinalExam[i]=finalScore;
										}
								   
								   //Validating mid term score
								   
								   z=0;
								   
								   if( (mid < 0 || mid > 100) && z <= 1 && k!=1 )
															   {
																   cout << "\n Sorry, the scores have to be in the range of 0 to 100." 
																		<< "Please enter the Mid-Term score again: ";
																   cin >> mid;
																   z++;
																   
																   
																   if( (mid < 0 || mid > 100) && z <= 1)
																									{
																										z++;
																									}
															   }
															   
								   //Assigning value to mid term score
								   
								   if(z > 1)
										   {
											 MidTerm[i] = 0;
										   }
								   
								   else
										{
									      MidTerm[i] = mid;
								        }
								  
								  
								  
								   //Validating final exam score
								  
								   y=0;
								  
								   if( (finalScore < 0||finalScore > 100) && y <= 1 && k!=1)
																	   {
																		   cout << "\n Sorry, the scores have to be in the range of 0 to 100." 
																				<< "Please enter the Final Exam score again: ";
																		   cin >> finalScore;
																		   
																		   y++;
																		   
																		   
																		   if( (finalScore < 0||finalScore > 100) )
																												{
																												  y++;
																												}
																	   }
								   
								   //Updating final exam score details
								   if(y > 1)
										   {
											   FinalExam[i] = 0;
										   }
								   else
									   {
										   FinalExam[i] = finalScore;
									   }//end of else
							   }//end of for loop that iterates over the 10 students

   //Calculating total scores
   calculateTotalScore(MidTerm, FinalExam);
   
   //Finding maximum midterm score
   findMaxMidTermScore(MidTerm);
   
   //Finding maximum final exam score
   findFinalExamScore(FinalExam);
   
   cout << "\n\n";
   
   return 0;
}
