#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int rounds, UserChoice, ComputerChoice,UserScore=0,ComputerScore=0;
    char YesOrNo;
    do
    {
        cout << "How many rounds you want to play ? ";
        cin >> rounds;
        cout << "=================================" << endl;
        cout << "          Computer vs You        " << endl;
        cout << "=================================" << endl;

        for (int i = 0; i < rounds; i++)
        {
            cout << "Round:" << i + 1 << endl;
            cout << "========================" << endl;
            cout << "\n\n   Make Your choice" << endl;
            cout << "========================" << endl;
            cout << "[0]:stone\n[1]:paper\n[2]:scissor" << endl;
            cin >> UserChoice;

            ComputerChoice = rand() % 3;
            if (ComputerChoice == 1 && UserChoice == 0 || ComputerChoice == 0 && UserChoice == 2 || ComputerChoice == 2 && UserChoice == 1)
            {
                if (ComputerChoice == 1)
                {
                    cout << "The computer choose paper" << endl;
                }
                else if (ComputerChoice == 0)
                {
                    cout << "The computer choose stone" << endl;
                }
                else
                {
                    cout << "The computer choose scissor" << endl;
                }

                system("color 4F");
                cout << "the computer win , you lose" << endl;
                ComputerScore ++;
            }
            else if (ComputerChoice == 0 && UserChoice == 1 || ComputerChoice == 2 && UserChoice == 0 || ComputerChoice == 1 && UserChoice == 2)
            {
                system("color 2F");
                cout << "you win ,computer lose" << endl;
                UserScore ++;
            }
            else
            {
                system("color 6F");
                cout << "draw " << endl;
            }
        }

        cout << "=================================" << endl;
        cout << "           GAME OVER             " << endl;
        cout << "=================================" << endl;

        cout << "\n Roundes: " << rounds << endl;
        cout << "\n Computer Score: " << ComputerScore << endl;
        cout << "\n User Score: " << UserScore << endl;
        cout << "\n Do you wanna play again?[Y/N]:";
        cin >> YesOrNo;

    } while (YesOrNo == 'y' || YesOrNo == 'Y');
    

    return 0;
}