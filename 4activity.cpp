// Justine C. Escueta
// COE 251
// Prof: Engr. Marlon Bagara
 
// Switch Statement
 
// Libraries
#include <iomanip> // Library for fixed decimal places
#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <process.h>
 
// Namespace std
using namespace std;
 
// gotoxy
void gotoxy (int,int);
void clrscr();
void gotoxy(int x,int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	cout.flush();
	dwCursorPosition.X=x;
	dwCursorPosition.Y=y;
	hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}
void clrscr()
{
	system("cls");
}

// Main Function
int main ()
{
	// Declaration of Variables
		string _name, _sec; 
		char _ans; 
		int _sub, _totalcs;
		float _ave, _spercent, score = 0;
		
	// Header
	gotoxy(20, 2); cout<<"M U L T I P L E  C H O I C E S";
	gotoxy(6 ,3); cout<<"---------------------------------------------------------";
	gotoxy(6 ,6); cout<<"---------------------------------------------------------";
	gotoxy(6 ,10); cout<<"---------------------------------------------------------";
	
	// Print for Name and Section
	gotoxy(6, 4); cout<<"Name: "; 
	gotoxy(6, 5); cout<<"Section: ";
	
	// Print for Instructions
	gotoxy(6, 7); cout<<"Instructions: ";
	gotoxy(26, 8); cout<<"Programming - 1 ";
	gotoxy(26, 9); cout<<"Calculus ---- 2 ";
	
	// Input for Name and Section
	gotoxy(12, 4); getline(cin, _name);
	gotoxy(15, 5); getline(cin, _sec);
	
	// Input for the Subject
	gotoxy(30, 12); cout<<"1 or 2 ? "; cin>>_sub;
	
	// Switch
	switch(_sub) 
	{
			// P R O G R A M M I N G
		
		case 1: // Case for programming
			gotoxy(23, 12); cout<<"P R O G R A M M I N G"; // Header
			
			gotoxy(6, 14); cout<<"1. Which data type is used to store whole numbers? "; // 1st Question and Choices
			gotoxy(10, 16); cout<<"a. float";
			gotoxy(10, 17); cout<<"b. int";
			gotoxy(10, 18); cout<<"c. double";
			gotoxy(57, 14); cin>>_ans; // Input for the Answer
			
			switch(_ans) // inswitch for 1st question
			{
				case 'b':case 'B': // Correct answer
					gotoxy(10, 20);cout<<"CORRECT"; // Print for correct answer
					score++; // Plus 1 to score if correct
					break;
					default:
					gotoxy(10, 20);cout<<"INCORRECT"; // Print incorrect if the answer is incorrect
					break;	  
			}
			
			gotoxy(6, 22); cout<<"2. What symbol is used for comment in C++ ?"; // 2nd Question and Choices
			gotoxy(10, 24); cout<<"a. // ";
			gotoxy(10, 25); cout<<"b. << ";
			gotoxy(10, 26); cout<<"c. >> ";
			gotoxy(50, 22); cin>>_ans; // Input for answer
			
			switch(_ans) // inswitch for 2nd question
			{
				case 'a': case 'A': // Correct answer
					gotoxy(10, 28); cout<<"CORRECT"; // Print for correct answer
					score++; // Plus 1 if the answer is correct
					break;
					default:
					gotoxy(10, 28); cout<<"INCORRECT"; // Print if the answer is incorrect
					break;
			}
			
			gotoxy(6, 30); cout<<"3. What symbol is used together with cout?"; // 3rd Question and Choices
			gotoxy(10, 32); cout<<"a. || ";
			gotoxy(10, 33); cout<<"b. >> ";
			gotoxy(10, 34); cout<<"c. << ";
			gotoxy(49, 30); cin>>_ans; // Input for answer
			
			switch(_ans) // inswitch for 3rd question
			{
				case 'c': case 'C': // Correct Answer
					gotoxy(10, 36); cout<<"CORRECT"; // Print for correct answer
					score++; // Plus 1 if the answer is correct
					break;
					default:
					gotoxy(10, 36); cout<<"INCORRECT"; // Print Incorrect if the answer is incorrect
					break;
			}
			
			gotoxy(6, 38); cout<<"4. What is symbol used together with cin? "; // 4th Questions and Choices
			gotoxy(10, 39); cout<<"a. && ";
			gotoxy(10, 40); cout<<"b. {} ";
			gotoxy(10, 41); cout<<"c. >> ";
			gotoxy(48, 38); cin>>_ans; // Input for the answer
			
			switch(_ans) // inswitch for 4th question
			{
				case 'c': case 'C': // Correct answer
					gotoxy(10, 43); cout<<"CORRECT"; // Print for correct answer
					score++;
					break;
					default:
					gotoxy(10, 43); cout<<"INCORRECT"; // Print for incorrect answer
					break;
			}
			
			gotoxy(6, 45); cout<<"5. What is a block of code that can be reused? "; // 5th question and Choices
			gotoxy(10, 46); cout<<"a. function ";
			gotoxy(10, 47); cout<<"b. loops ";
			gotoxy(10, 48); cout<<"c. libraries ";
			gotoxy(53, 45); cin>>_ans; // Input for answer
			
			switch(_ans) // Inswitch for 5th question
			{
				case 'a': case 'A': // Correct Answer
					gotoxy(10, 50); cout<<"CORRECT"; // Print for correct answer
					score++; // Plus 1 to score if the answer is correct
					break;
					default:
					gotoxy(10, 50); cout<<"INCORRECT"; // Print if the answer is incorrect
					break;
		    }
		    
			// Line 
			gotoxy(6, 51); cout<<"---------------------------------------------------------";
			gotoxy(6, 58); cout<<"---------------------------------------------------------";
			
			// Variable Initialization for score percentage
			_spercent = (score/5) * 100;
			
			// Output for score and percent score
			gotoxy(20, 53); cout<<"Total Score = " <<score;
			gotoxy(20, 54); cout<<"Percentage Score = "<<fixed<<setprecision(2)<<_spercent<<" %";
			
			// If statement and output if whether student is failed or passed
			if(_spercent >= 75) // Condition if passed
			{
				gotoxy(25, 56); cout<<"PASSED, CONGRATS!"; // Output if passed
			}
			else // else statement for failed
			{
				gotoxy(19, 56); cout<<"FAILED, BETTER LUCK NEXT TIME"; // Output if failed
			}	
			
		break;
			
			// C A L C U L U S
			
		case 2: // Case for CALCULUS
		    
			gotoxy(26, 12); cout<<"C A L C U L U S"; // Header
		    gotoxy(6, 14); cout<<"1. Calculus is mainly divided into two branches. These are:"; // 1st question and choices
		    gotoxy(10, 16); cout<<"a. Derivatives and Integrals";
		    gotoxy(10, 17); cout<<"b. Algebra and Geometry";
		    gotoxy(10, 18); cout<<"c. Limits and Functions";
		    gotoxy(66, 14); cin>>_ans; // Input answer
		    
		    switch(_ans) { // Inswitch for 1st question
		        case 'a': case 'A': // Correct answer
		            gotoxy(10, 20); cout<<"CORRECT"; // Output if correct
		            score++; // Plus 1 if the answer is correct
		            break;
		        default:
		            gotoxy(10, 20); cout<<"INCORRECT"; // Output if incorrect
		            break;
		    }
		    
		    gotoxy(6, 22); cout<<"2. The derivative of a function represents:"; // 2nd question and choices
		    gotoxy(10, 24); cout<<"a. The slope or rate of change";
		    gotoxy(10, 25); cout<<"b. The total area under a curve";
		    gotoxy(10, 26); cout<<"c. The original function";
		    gotoxy(50, 22); cin>>_ans; // Input for answer
		    
		    switch(_ans) { // Inswitch for 2nd question
		        case 'a': case 'A': // Correct Answer
		            gotoxy(10, 28); cout<<"CORRECT"; // Output if correct
		            score++; // Plus 1 if the answer is correct
		            break;
		        default:
		            gotoxy(10, 28); cout<<"INCORRECT"; // Output if incorrect
		            break;
		    } 
		    
		    gotoxy(6, 30); cout<<"3. The integral of a function is generally used to find:"; // 3rd Question and Choices
		    gotoxy(10, 32); cout<<"a. The maximum slope of a curve";
		    gotoxy(10, 33); cout<<"b. The area under a curve";
		    gotoxy(10, 34); cout<<"c. The limit of a function";
		    gotoxy(64, 30); cin>>_ans; // Input for the answer
		    
		    switch(_ans) { // Inswitch for 3rd question
		        case 'b': case 'B': // Correct answer
		            gotoxy(10, 36); cout<<"CORRECT"; // Ouput if correct
		            score++; // Plus 1 if the answer is correct
		            break;
		        default:
		            gotoxy(10, 36); cout<<"INCORRECT"; // Output if incorrect
		            break;
		    }
		
		    gotoxy(6, 38); cout<<"4. The concept of a limit is important in calculus because it:"; // 4th question and choices
		    gotoxy(10, 39); cout<<"a. Explains how functions behave near a point";
		    gotoxy(10, 40); cout<<"b. Gives the maximum value of a curve";
		    gotoxy(10, 41); cout<<"c. Determines the average rate of change";
		    gotoxy(69, 38); cin>>_ans; // Input for the answer
		    
		    switch(_ans) { // Inswitch for 4th question
		        case 'a': case 'A': // Correct Answer
		            gotoxy(10, 43); cout<<"CORRECT"; // Print if correct
		            score++; // Plus 1 if the answer is correct
		            break;
		        default:
		            gotoxy(10, 43); cout<<"INCORRECT"; // Print if incorrect
		            break;
		    }
		
		    gotoxy(6, 45); cout<<"5. Who developed Calculus?"; // 5th question and choices
		    gotoxy(10, 46); cout<<"a. Newton and Leibniz";
		    gotoxy(10, 47); cout<<"b. Einstein and Gauss";
		    gotoxy(10, 48); cout<<"c. Euclid and Pythagoras";
		    gotoxy(33, 45); cin>>_ans; // Input for answer
		    
		    switch(_ans) { // Inswitch for 5th question
		        case 'a': case 'A': // Correct Answer
		            gotoxy(10, 50); cout<<"CORRECT"; // Print if correct
		            score++; // Plus 1 if the answer is correct
		            break;
		        default:
		            gotoxy(10, 50); cout<<"INCORRECT"; // Print if incorrect
		            break;
		    }
		
			// Line 
			gotoxy(6, 51); cout<<"---------------------------------------------------------";
			gotoxy(6, 58); cout<<"---------------------------------------------------------";
			
			// Variable Initialization for score percentage
			_spercent = (score/5) * 100;
			
			// Output for score and percent score
			gotoxy(20, 53); cout<<"Total Score = " <<score;
			gotoxy(20, 54); cout<<"Percentage Score = "<<fixed<<setprecision(2)<<_spercent<<" %";
			
			// If statement and output if whether student is failed or passed
			if(_spercent >= 75) // Condition if passed
			{
				gotoxy(25, 56); cout<<"PASSED, CONGRATS!"; // Output if passed
			}
			else // else statement for failed
			{
				gotoxy(19, 56); cout<<"FAILED, BETTER LUCK NEXT TIME"; // Output if failed
			}	
				
		break;
			
		default:
			gotoxy(24, 12); cout<<"O U T  O F  R A N G E"; // Print if out of range
			break;
	}
			
	getch();
}