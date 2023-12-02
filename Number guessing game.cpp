/*                                    TASK 2 -------->  NUMBER GUESSING GAME 

    Program in  C++ to develop a number guessing game                                                                       */
    
    
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std ;

int main()
{
	int game_num, usr_num  ;
	int lower=0, upper=20 ;
	srand(time(NULL));
	game_num = ( rand() % (upper - lower +1) ) + lower ;
	
	cout<<"hey! let's play this game <* | *>   \n\n\n " ;
	cout<<"i have a number in my mind (0-20 ) , guess it!  \n" ;
	cin>>usr_num ;
	
	if(game_num == usr_num)
	   cout<<"yes! u got it \n" ;
	
	else if(game_num > usr_num )
	   cout<<"u r wrong dear, i have hint for u ; my number is greater than this one ,try again! \n "  ;
	
	else if(game_num < usr_num )
	   cout<<"u r wrong dear, i have hint for u ; my number is less than this one ,try again! \n "  ;
	
	
	
	return  0;
}
