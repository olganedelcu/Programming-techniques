#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include "functions.h"

using namespace std;

int main() {	
	int option;
	bool exit = false;
	
	do{
        printMenu();
        cin >> option;

        switch (option){
        case 1:
        	{
			string title;
        	float price;
        	char answer;
        	string dummy;
        	
        	cout << "Introduce the title of the movie.\n";
        	cin.ignore(1, '/n'); //Ignore blank line to be prepared to get new input
            getline(cin, title);
			            
            price = lookForPrice(title);
            
            if(price != -1){
            	cout << "The total price: " << price << endl;
	            cout << "Do you want to continue (Y/N)?";
	            cin >> answer;
	            cout << "\n";
	            
				if(answer == 'Y'){
	                cout << "Introduce complete name?\n";
	                cin >> dummy;
	                cout << "Introduce card number?\n";
	                cin >> dummy;
	                cout << "Introduce the expired date?\n";
	                cin >> dummy;
	                cout << "The payment has been made.\n";
	                
	                cout << "\n-----------------------------------------------------------------------------\n";
	                cout << "Thank you for using our www.moviesclubagency.net...\n";
	                cout << "\nTo watch the movie, please follow the following link with the password: 12345\n";
	                cout << "www.moviesclubagency.net/" << title << "/login/\n";
	                cout << "-----------------------------------------------------------------------------\n";
	                cout << "\nPress any key to return to the main menu...\n";
	                getche();
	            }
			}else{
				cout << "This movie is not in our Catalog\n\n";
			}
        	}
        	break;
        case 2:
        	{
            string title;
        	float price;
        	char answer;
        	string dummy;
            string clientName;
            string startDate;
            int days;
        	
            cout << "Introduce the title of the movie.\n";
            cin >> title;
            price = lookForPrice(title);
            
            if (price != -1){
            
                cout << "Introduce start date:  ";
                cin >> startDate;
                cout << "Introduce how many days:";
                cin >> days;
                cout << "The total required price: ";
                cout << price*days;
                cout << "\n Do you want to continue? (Y/N)";
                cin >> answer;
                if(answer == 'Y'){
                    cout << "Introduce complete name?";
                    cin >> clientName;
                    cout << "Introduce card number?";
                    cin >> dummy;
                    cout << "Introduce the expired date?";
                    cin >> dummy;
                    cout << "\n The payment has been made.";
                    cout << "\n";
                    cout << "\n";
                    cout << "\n";
                    cout << "\nThank you for using our www.moviesclubagency.net ....";
                    cout << "The movie:  " << title << endl;
                    cout << "Rental start date:  " << startDate << endl;
                    cout << "Rental end date:   " << endl;
                    cout << "Total price:   " << price*days << endl;
                    cout << "Client's name:   " << clientName << endl;


                    cout << "Press any key to return to the main menu ---";
                    getche();
                }
            }else {
                cout << "This DV is not available.\n\n";
            }

            }

        	break; 
        case 3:
        	/*
                cout << "Introduce the tittle of a movie: " ;
                cin >> movie;
                cout << "List of rents of the movie " << movie << "in " << "is :";

                
                
                
                
                
                cout << "Press any key to return to the main menu ---";
            */
        	break;
        case 4:
        	{
        	string month = getCurrentMonth();
        	cout << "\nList of movies available in " << month << " is:\n";
        	cout << "Movie title\tdirector\tyear\t1st actor\tdescription\n";
        	printListMovies();
        	
			}
        	break;
        case 5:
        	cout << "\nThanks for using our services, bye!";
        	exit = true;
        	break;
        default:
	        cout << "\nThat is not a valid option, try again\n";
	        cout << "-----------------------------------------\n";
			break;
        }
    }while(exit != true);
	
	return 0;
}


