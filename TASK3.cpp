#include<iostream>
using namespace std;
char player='X';
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,coloumn;
bool tie=false;

void TictactoeBoard()

{
    
    
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "-----------" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    
    
}

void input()
{
    int place;
    if(player=='X')
    {
        cout<<"Player 1,Enter the place number(1-9) ";
    }
    else 
   {
     cout<<"Player 2,Enter the place number(1-9) ";
     
   }
   
   cin>>place;
   
   if(place==1)
   {
       row=0;
       coloumn=0;
   }
   
   else if(place==2)
   {
       row=0;
       coloumn=1;
   }
   
   else if(place==3)
   {
       row=0;
       coloumn=2;
   }
   
   else if(place==4)
   {
       row=1;
       coloumn=0;
   }
   
   else if(place==5)
   {
       row=1;
       coloumn=1;
   }
   
   else if(place==6)
   {
       row=1;
       coloumn=2;
   }
   
   else if(place==7)
   {
       row=2;
       coloumn=0;
   }
   
   else if(place==8)
   {
       row=2;
       coloumn=1;
   }
   
   else if(place==9)
   {
       row=2;
       coloumn=2;
   }
   else 
   {
       cout<<"Number is invalid! Enter number between (1-9)\n";
   }
  
  
  if(player=='X'&&board[row][coloumn]!='X'&&board[row][coloumn]!='O')
  {
      board[row][coloumn]='X';
      player='O';
  }
  else if(player=='O'&&board[row][coloumn]!='X'&&board[row][coloumn]!='O')
  {
      board[row][coloumn]='O';
      player='X';
  }
  else
  {
      cout<<"The place is occupied!!";
      input();
  }
  
  TictactoeBoard();
}

int win()
{
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]||board[0][i]==board[1][i]&&board[1][i]==board[2][i])
        return 1;
        
    }
    if(board[0][0]==board[1][1]&&board[1][1]==board[2][2])
    return 1;
    
    if(board[0][2]==board[1][1]&&board[1][1]==board[2][0])
    return 1;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][j]!='X'&&board[i][j]!='O')
            {
            return false;
            }
        }   
    }
    tie=true;
    return false;
    
}
void resetBoard()
{
    char initialBoard[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = initialBoard[i][j];
        }
    }
    player = 'X';
    tie = false;
}




int main()
{   
    char playAgain;

    do
    {
        cout << "Player 1 plays as X\n";
        cout << "Player 2 plays as O\n";

        while (!win())
        {
            TictactoeBoard();
            input();
        }

        if (tie)
        {
            cout << "It's a draw match!\n";
        }
        else
        {
            if (player == 'X')
            {
                cout << "Player 2 wins!!\n";
            }
            else
            {
                cout << "Player 1 wins!!\n";
            }
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain == 'y' || playAgain == 'Y')
        {
            resetBoard();  // Reset the board for a new game
        }

    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
