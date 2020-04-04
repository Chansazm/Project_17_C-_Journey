#include <iostream>
using namespace std;

const float MAX_TURN = .5;
const int MAX_CHIPS = 100;

int main()
{
    bool player1Turn = true;
    bool gameOver = false;
    int chipsInPile = 0;
    int chipsTaken = 0;
    string playerName[2];
    cout << "Player 1, please enter your name: \n";
    cin >> playerName[0];
    cout << "Player 2, please enter your name: \n";
    cin >> playerName[1];
    int ticTacToe[3][3];

    srand(time(0));

    chipsInPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round will start with " << chipsInPile << " Chips in the pile\n";
    cout << "You can take up to " << static_cast<int>(MAX_TURN * chipsInPile) << endl;

    return 0;
}