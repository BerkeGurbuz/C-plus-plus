#include <iostream>
using namespace std;

int board[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
char turn = 'X';
int choice, row, column;
bool draw = false;



void Display_Board()
{

    system("cls");
    cout << endl << endl;
    cout << "\t\t******************************************************************************************\n\n";
    cout << "\t\t =======  =======   =======  =======     ==        =======   =======    ======     =======" << endl;
    cout << "\t\t    =        =     =            =       =  =      =             =      =      =    =" << endl;
    cout << "\t\t    =        =    =             =      =    =    =              =     =        =   =" << endl;
    cout << "\t\t    =        =    =             =     ========   =              =     =        =   =======" << endl;
    cout << "\t\t    =        =    =             =    =        =  =              =     =        =   =" << endl;
    cout << "\t\t    =        =     =            =   =          =  =             =      =      =    =" << endl;
    cout << "\t\t    =     =======   =======     =  =            =  =======      =       ======     =======" << endl;
    cout << "\n\n\t\t*******************************************************************************************";
    cout << "\n\n\t\t\t\tPLAYER1 [X]\n";
    cout << "\n\t\t\t\tPLAYER2 [O]\n\n\n";

    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  \n";
    cout << "\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  \n";
    cout << "\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t     |     |     " << endl;
    cout << "\t\t\t  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  \n";
    cout << "\t\t\t     |     |     " << endl;
}

void Player_turn() 
{
    if (turn == 'X')
        cout << "Player 1 choice: ";
    if (turn == 'O')
        cout << "Player 2 choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1: row = 0; column = 0; break;
        case 2: row = 0; column = 1; break;
        case 3: row = 0; column = 2; break;
        case 4: row = 1; column = 0; break;
        case 5: row = 1; column = 1; break;
        case 6: row = 1; column = 2; break;
        case 7: row = 2; column = 0; break;
        case 8: row = 2; column = 1; break;
        case 9: row = 2; column = 2; break;

        default:
            cout << "Please enter a number between 1 and 9.";
            break;    
    }

    if (turn == 'X' && board[row][column]!='X' && board[row][column] != 'O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }

    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }

    else
    {
        cout << "BOX IS ALREADY FILL PLEASE TRY AGAIN ";
        Player_turn();
    }
        
    Display_Board();
}

bool Game_Over()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;
    }

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;
    draw = true;
    return false;
    
    
}


int main()
{
    while (Game_Over())
    {
        Display_Board();
        Player_turn();
        Game_Over();
    }
    
    if (turn == 'X' && draw == false)
    {
        cout << "PLAYER2 [O] WINS !! congratulations \n";
    }
    else if (turn == 'O' && draw == false)
    {
        cout << "PLAYER1 [x] WINS !! congratulations \n";

    }
    else
    {
        cout << "GAME DRAW !! \n";
    }
    
}


