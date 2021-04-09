#include <iostream>
#include <string>
#include <vector>
#include "Actors.h"
#include "functions.cpp"

main() {
    int option;
    string movie;
    bool answer;
    string userName;
    int cardNumber;
    string expDate;

    do{
        printMenu();

        switch (option)
        {
        case 1:
            cout << "Introduce the title of the movie.\n";
            cin >> movie;
            cout << "The total price: ";
            cout << "Do you want to continue (1/0)?";
            cin >> answer;
            if(answer){
                cout << "Introduce complete name?";
                cin >> userName;
                cout << "Introduce card number?";
                cin >> cardNumber;
                cout << "Introduce the expired date?";
                cin >> expDate;
                cout << "The payment has been made.";
                cout << "Thank you for using our www.moviesclubagency.net ………";
                cout << "To watch the movie, please follow the following link with the password: 12345
                www.moviesclubagency.net/star_wars/login/";
                cout << "Press any key to return to the main menu ……";
            };
            break;
        case 2:
        
            break;
        
        default:
            break;
        }
    }while(answer != 5);
    

    
}