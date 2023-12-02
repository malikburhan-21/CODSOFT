/*                           TASK 3 ----->   TIC-TAC-TOE   GAME 

    Program in C++  for developing a TIC-TAC-TOE GAME                                                              */
    
    
#include<iostream>
#include<stdlib.h>
using namespace std  ;

char board[3][3]={ {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
char turn = 'X' ;
int row , column ;
bool draw = false ;

void display()                                                          // board display
{
	system("cls");
	cout<<"\t\t\t\t\t TIC  TAC  TOE  GAME  \n\n\n\n\n";
	cout<<"\t Player[X] \n \t Player[O]"<<endl<<endl;
	
	cout<<"\t\t     |     |      \n" ;
	cout<<"\t\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"   \n" ;
	cout<<"\t\t     |     |      \n" ;
	cout<<"\t\t-----|-----|----- \n" ;
	cout<<"\t\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"   \n" ;
	cout<<"\t\t     |     |      \n" ;
	cout<<"\t\t-----|-----|----- \n" ;
	cout<<"\t\t     |     |      \n" ;
	cout<<"\t\t  "<<board[2][0]<<"  |   "<<board[2][1]<<" |  "<<board[2][2]<<"   \n" ;
    cout<<"\t\t     |     |      \n" ;
    
    
}


void player_move()                                            // function for players move 
{
	int choice;
	
	if(turn == 'X')
	    cout<<"\n\t Player[X] turn: ";
	
	if(turn == 'O')
	    cout<<"\n\t Player[O] turn: ";
	 
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			row=0; column=0;
			break;
			
		case 2:
			row=0; column=1;
			break;
			
		case 3:
			row=0; column=2;
			break;
			
		case 4:
			row=1; column=0;
			break;
			
		case 5:
			row=1; column=1;
			break;
			
		case 6:
			row=1; column=2;
			break;
			
		case 7:
			row=2; column=0;
			break;
			
		case 8:
			row=2; column=1;
			break;
			
		case 9:
			row=2; column=2;
			break;
			
		default:
			 cout<<"\n\n\t\t please enter a valid input \n";
			 break;
	}
	
	if(turn == 'X')
	{
		board[row][column] = 'X';
		turn  = 'O' ;
	}
	else if(turn  == 'O')
	{
		board[row][column] = 'O' ;
		turn = 'X' ;
	}
   
   display();
}

bool game_over()                         // function; checking whether anyone won ,unfilled box or game draw 
{
	//    checking the Winner 
	for(int i=0;i<=2;i++)
	  if(board[i][0] == board[i][1]  &&  board[i][0] == board[i][2]  ||  board[0][i] == board[1][i]  &&  board[0][i] == board[2][i] )
	return false;
	
	if(board[0][0] == board[1][1] && board[0][0] == board[2][2]  ||  board[0][2] == board[1][1] && board[0][2] == board[2][0] )
	return false; 
	
	
	// check if any box is not filled 
	
	for(int i=0;i<=2;i++)
	  for(int j=0;j<=2;j++)
	  	if(board[i][j] != 'X'  &&  board[i][j] != 'O' )
	  	return true;

	  
    
    // check if game is draw
    
    draw = true;
    return false ;
	  
}

int main()
{
    char ch;

    do
    {
        while (game_over())
        {
            display();
            player_move();
            game_over();
        }

        if (turn == 'X' && draw == false)
            cout << "Player2 [O] Won !  congratulations  (* ! *) \n";

        else if (turn == 'O' && draw == false)
            cout << "Player1 [X] Won !  congratulations  (* ! *) \n";

        else
            cout << "GAME DRAW !!  ('!') ";

        cout << " \n\n DO U WANT ANOTHER ONE! ('-') --> ( y/n )  \n\n";
        cin >> ch;

        if (ch == 'y')
        {
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < 3; j++)
                    board[i][j] = (i * 3) + j + '1';

            turn = 'X';
            draw = false;
        }
    } while (ch == 'y');

    return 0;
}
	  
	  
 
    
    
