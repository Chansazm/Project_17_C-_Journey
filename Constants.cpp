#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_CHIPS = 100;

int main()
{

    bool player1Turn = true;
    bool gameover = false;

    int chipsInPile = 0;
    int chipsTaken = 0;

    srand(time(0));
    chipsInPile = (rand() % MAX_CHIPS) + 1;
    cout << "This round will start with  " << chipsInPile << " Chips in the pile\n";
    cout << "You can only take " << (chipsInPile * .5) << endl;

    return 0;
}