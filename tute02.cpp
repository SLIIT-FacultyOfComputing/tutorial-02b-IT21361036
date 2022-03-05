/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/
#include<iostream>
#include<cmath>

using namespace std;

//main function
int main()
{
	double  salary, netSalary;// Variables
	int etype,otHrs, otRate;
	
	cout<<"Enter Employee Type:";//Print the output
	cin>>etype;//read the output
	
	cout<<"Enter Salary:";//Print the output
	cin>>salary;//read the output
	
	cout<<"Enter OtHers :";//Print the output
	cin>>otHrs;//read the output
	
	switch (etype)//switch statement
	{
		case 1 : 	otRate=1000;
				 	break;
				
		
		case 2 :	otRate=1500;
					break;
			
		
		case 3 :	otRate=1700;
					break;
	}
			
	netSalary =  salary + otHrs*otRate;//formular
	
	cout<<"Net Salary is:"<<netSalary;//print the output
	
	return 0;
}
	