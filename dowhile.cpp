#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int userchoice = 0;
    do
    {
        cout << "Hello welcome to my menu\n";
        cout << "Please choose one of the following options \n";
        cout << "1. Continue\n";
        cout << "2. Quit \n";
        cin >> userchoice;
    } while (userchoice == 1);
}