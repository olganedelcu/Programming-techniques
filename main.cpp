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
    string startDate;

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
                cout << "To watch the movie, please follow the following link with the password: 12345 www.moviesclubagency.net/star_wars/login/.";
                cout << "Press any key to return to the main menu ……";
            };
            break;
        case 2:
            cout << "cout << "Introduce the title of the movie.\n";
                cin >> movie;
                cout << "Introduce start date:  ";
                cin >> startDate;
                cout << "Introduce how many days:";
                cout << "Do you want to continue? (Yes is: 1/No is: 0 )";
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
                cout << "The movie: " << movie << endl;
                cout << "Rental start date: " << startDate << endl;
                cout << "Rental end date: " << expDate << endl;
                cout << "Total price: " << -----. << endl;
                cout << "Client's name: " << userName << endl;


                cout << "Press any key to return to the main menu ……";
                // If in this case (2) there is not an available DVD name display ERROR message;
            };

            
            break;
        case 3:
                cout << "Introduce the tittle of a movie: " ;
                cin >> movie;
                cout << "List of rents of the movie " << movie << "in " << "is :";

                
                
                
                
                
                cout << "Press any key to return to the main menu ……";

            break;
        
        default:
            break;
        }
    }while(answer != 5);
    

    
}
