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

Install as you would normally install the Visual Studio Code November 2020 (version 1.52) for Mac OS.
Visit https://code.visualstudio.com/download for download information.
   
Here I use GCC compiler for C++ on MacOS (I will need to install Homebrew) following this youtube video 
https://www.youtube.com/watch?v=0z-fCNNqfEg from Dr Hayes.

Next I create a new workspace for my programming project in Visual Studio Code including files: GROPI.cpp and README

In this project, I use the standard library header [iostream](http://www.cplusplus.com/reference/iostream/) that provides input and output functionality using streams.

This header file contains definitions to objects like cin, cout, cerr etc.

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
This is to say Hello to user based on user's input.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## References 
Ivan Academy's courses and YouTube channel of Programming with Dr. Hayes

