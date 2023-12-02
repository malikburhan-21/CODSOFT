/*                                       TASK 1 ---->  SIMPLE CALCULATOR

   program in  C++  for a calculator ( +,-,*,/ )  by allowing user to input two no's and choose an operator to perform.   */


#include<iostream>
using namespace std ;

int main()
{
	double num1, num2 ;
	char op;
    cout<<"enter two numbers \n" ;
	cin>>num1>>num2 ;	
	cout<<"enter an operator ( +, -, *, / )  \n "  ;
	cin>>op ;
	
	switch(op)
	{
		case '+' :
			cout<<num1<<op<<num2<<"="<<num1+num2 ;
			break;
		
		case '-' :
	    	cout<<num1<<op<<num2<<"="<<num1-num2 ;
	    	break;
		
		case '*' :
		 
	        cout<<num1<<op<<num2<<"="<<num1*num2 ;
		    break;
			
		case '/' :
		 
		     cout<<num1<<op<<num2<<"="<<num1/num2 ;
	          break;
	       
	    default:
	    	cout<<"entered wrong operator";
	}
	
	return  0;
 } 
