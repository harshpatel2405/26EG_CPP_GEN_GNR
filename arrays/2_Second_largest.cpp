#include <iostream>
using namespace std;

char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

char player = 'X';

// Draw the board with ASCII UI
void drawBoard()
{
    cout << "\n";
    cout << "     |     |     \n";
    cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "\n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "\n";
    cout << "     |     |     \n\n";
}

// Switch player
void changePlayer()
{
    player = (player == 'X') ? 'O' : 'X';
}

// Place mark on board
bool placeMark(int choice)
{
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = player;
        return true;
    }
    return false;
}

// Check win condition
bool checkWin()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] &&
            board[i][1] == board[i][2])
            return true;

        if (board[0][i] == board[1][i] &&
            board[1][i] == board[2][i])
            return true;
    }

    if (board[0][0] == board[1][1] &&
        board[1][1] == board[2][2])
        return true;

    if (board[0][2] == board[1][1] &&
        board[1][1] == board[2][0])
        return true;

    return false;
}

// Check draw
bool checkDraw()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

int main()
{
    int choice;

    cout << "=============================\n";
    cout << "      TIC TAC TOE GAME       \n";
    cout << "=============================\n";

    drawBoard();

    while (true)
    {
        cout << "Player " << player << ", enter position (1-9): ";
        cin >> choice;

        if (choice < 1 || choice > 9 || !placeMark(choice))
        {
            cout << "❌ Invalid move. Try again.\n";
            continue;
        }

        drawBoard();

        if (checkWin())
        {
            cout << "🎉 Player " << player << " WINS! 🎉\n";
            break;
        }

        if (checkDraw())
        {
            cout << "😐 Game Draw!\n";
            break;
        }

        changePlayer();
    }

    return 0;
}
