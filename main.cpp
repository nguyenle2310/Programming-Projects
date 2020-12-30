
#include <iostream>

using namespace std;

double apples;
double banana;
double watermeton;
double blueberry;
double wallet = 100;
double userchoice;

void Hello();

int main()
{
    Hello();

    void Hello()
    {
        string userName;
        cout << "What is your name?"<< endl;
        getline(cin, userName);
        cout << "Hello " << userName << "!" << endl;
    }

    while(wallet >= 0)
    {
        cout << "\n\n Welcome to Grocery list \n\n";
        cout << "Menu \n\n";
        cout << "1  Apple      $2 \n";
        cout << "2  Banana     $1 \n";
        cout << "3  Watermelon $3 " << endl;
        cout << "4  Blueberry  $4 \n\n";
        cout << "You have\n";
        cout << apples << "\n apples \n";
        cout << banana << "\n bananas\n";
        cout << watermeton << "\n watermelon\n";
        cout << blueberry << "\n blueberry \n";
        cout << "Your remaining balance is $" << wallet <<  ".\n\n";
        cout << "Type the number of fruit choice or type 0 to check out \n\n";
        cin >> userchoice;

        if (userchoice ==1)
        {
            apples++;
            wallet = wallet - 2;
        }
        if (userchoice ==2)
        {
            banana++;
            wallet = wallet - 1;
        }
        if (userchoice ==3)
        {
            watermeton++;
            wallet = wallet - 3;
        }
        if (userchoice ==4)
        {
            blueberry++;
            wallet = wallet - 4;
        }
        if (userchoice ==0)
        {
            cout << "\n\n You just check out. Thank you for shopping with us! \n\n";
            cout << "Your remaining balance is $" << wallet <<  ".\n\n";
            cin.get();
            return 0;
        }
    }

    cin.get();
    return 0;
}
