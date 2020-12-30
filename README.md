Prepared by Gwen Le (Email: hothaonguyen.le90@gmail.com)

# GROPI - Grocery Shopping Program

GROPI is a Grocery Shopping Program built on C++ to automate grocery shopping list and thus increase customer's shopping experiences.

The program will perform following main steps:
* Say Hello to customer based on user's input 
* Show detail of Grocery Menu
* Show detail of customer's balance in terms of number of available fruits and their wallet amount
* Automate the process of purchasing the fruit on the available menu
* Calculate and update the remaining amount in customer's wallet after each customer's purchase. 

## Installation

Use the standard library header [iostream](http://www.cplusplus.com/reference/iostream/) to set up GROPI.

```bash
#include <iostream> // import libraries
```

## Usage

```C++
void hello()
    {
        cout << "What is your name?"<< endl;
        getline(cin, userName);
        cout << "HELLOOO " << userName << "!!!\n\n";
    }
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## References 
Ivan Academy's courses and YouTube channel of Programming with Dr. Hayes

