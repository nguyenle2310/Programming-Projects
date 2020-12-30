#include <iostream> // import libraries
using namespace std; // header and body

// declare the identifiers

double apples;
double banana;
double watermeton;
double blueberry;
double wallet = 100;
int userchoice;
string userName;

void hello()
    {
        cout << "What is your name?"<< endl;
        getline(cin, userName);
        cout << "HELLO " << userName << "!\n\n";
    }

int main()
{
    hello();     //call out the hello function

    while(wallet >= 0)
    {
        cout << "\n\n Welcome to the Grocery Menu \n\n";
        cout << "Menu \n\n";
        cout << "1  Apple      $2 \n";
        cout << "2  Banana     $1 \n";
        cout << "3  Watermelon $3 \n";
        cout << "4  Blueberry  $4 \n";
        cout << "5  Exit          \n";
        cout << "\n You have \n";
        cout << apples << " apples" << endl;
        cout << banana << " bananas" << endl;
        cout << watermeton << " watermelon" << endl;
        cout << blueberry << " blueberry" << endl;
        cout << "Your remaining balance is $" << wallet <<  ".\n\n";
        cout << "Enter your choice: \n\n";
        cin >> userchoice;

        switch(userchoice)
        {
        case 1: 
            apples++;
            wallet = wallet - 2;
            break;
        case 2:
            banana++;
            wallet = wallet - 1;
            break;
        case 3:
            watermeton++;
            wallet = wallet - 3;
            break;
        case 4:
            blueberry++;
            wallet = wallet - 4;
            break;
        case 5:
            cout << "\nYou have just check out. Thank you for shopping with us! \n\n";
            cout << "Your remaining balance is $" << wallet <<  ".\n\n";
            cin.get();
            return 0;
        }
    }
    cin.get();
    return 0;
}
