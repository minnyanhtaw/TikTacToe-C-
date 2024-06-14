#include <iostream>
#include <conio.h>
using namespace std;
int ch;
bool winner = true;
char mark;
char square[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player = 1;
void box();
int choice(int);
int main()
{
    char ans = 'y';

    do
    {
        for (int i = 1; i <= 9; i++)
        {

            box();
            choice(ch);
            player = ((i + 1) % 2) ? 1 : 2;
            if (square[0] == 'X' && square[1] == 'X' && square[2] == 'X')
            {
                winner = true;
                break;
            }
            if (square[0] == 'O' && square[1] == 'O' && square[2] == 'O')
            {
                winner = false;
                break;
            }
            if (square[3] == 'X' && square[4] == 'X' && square[5] == 'X')
            {
                winner = true;
                break;
            }
            if (square[3] == 'O' && square[4] == 'O' && square[5] == 'O')
            {
                winner = false;
                break;
            }
            if (square[6] == 'X' && square[7] == 'X' && square[8] == 'X')
            {
                winner = true;
                break;
            }
            if (square[6] == 'O' && square[7] == 'O' && square[8] == 'O')
            {
                winner = false;
                break;
            }
            if (square[0] == 'X' && square[3] == 'X' && square[6] == 'X')
            {
                winner = true;
                break;
            }
            if (square[0] == 'O' && square[3] == 'O' && square[6] == 'O')
            {
                winner = false;
                break;
            }
            if (square[1] == 'X' && square[4] == 'X' && square[7] == 'X')
            {
                winner = true;
                break;
            }
            if (square[1] == 'O' && square[4] == 'O' && square[7] == 'O')
            {
                winner = false;
                break;
            }
            if (square[2] == 'X' && square[5] == 'X' && square[8] == 'X')
            {
                winner = true;
                break;
            }
            if (square[2] == 'O' && square[5] == 'O' && square[8] == 'O')
            {
                winner = false;
                break;
            }
            if (square[0] == 'X' && square[4] == 'X' && square[8] == 'X')
            {
                winner = true;
                break;
            }
            if (square[0] == 'O' && square[4] == 'O' && square[8] == 'O')
            {
                winner = false;
                break;
            }
            if (square[2] == 'X' && square[4] == 'X' && square[6] == 'X')
            {
                winner = true;
                break;
            }
            if (square[2] == 'O' && square[4] == 'O' && square[6] == 'O')
            {
                winner = false;
                break;
            }
        }
        system("cls");
        if (winner == true)
        {
            cout << "Congratulation!\nPlayer 1, You are the winner." << endl;
        }
        else if (winner == false)
        {
            cout << "Congratulation!\nPlayer 2, You are the winner." << endl;
        }
        else
        {
            cout << "Game Draw." << endl;
        }
        cout << "Do you want to play again (y/n)?";
        cin >> ans;

        for (int i = 0; i < 9; i++)
        {
            square[i] = '0' + (i + 1);
        }
        player = 1;
        winner = true;
    } while (ans == = "y" || ans == = "Y");
    return 0;
}

void box()
{
    system("cls");
    cout << "Tic Tac Toe Game\nPlayer 1 = 'X'\nPlayer 2 = 'O'" << endl
         << endl;
    cout << square[0] << "  | " << square[1] << " | " << square[2] << endl;
    cout << "___" << "|" << "___" << "|" << "___" << endl;
    cout << square[3] << "  | " << square[4] << " | " << square[5] << endl;
    cout << "___" << "|" << "___" << "|" << "___" << endl;
    cout << square[6] << "  | " << square[7] << " | " << square[8] << endl;
}

// Choice //

int choice(int n)
{

    mark = (player == 1) ? 'X' : 'O';

    cout << "Player " << player << ", please choice ";
    cin >> n;

    if (n == 1 && square[0] == '1')
    {
        square[0] = mark;
    }
    else if (n == 2 && square[1] == '2')
    {
        square[1] = mark;
    }
    else if (n == 3 && square[2] == '3')
    {
        square[2] = mark;
    }
    else if (n == 4 && square[3] == '4')
    {
        square[3] = mark;
    }
    else if (n == 5 && square[4] == '5')
    {
        square[4] = mark;
    }
    else if (n == 6 && square[5] == '6')
    {
        square[5] = mark;
    }
    else if (n == 7 && square[6] == '7')
    {
        square[6] = mark;
    }
    else if (n == 8 && square[7] == '8')
    {
        square[7] = mark;
    }
    else if (n == 9 && square[8] == '9')
    {
        square[8] = mark;
    }
    return n;
}