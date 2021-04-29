#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "Movie.h"

using namespace std;

 // Function for the main menu
 void printMenu(){

    cout << "Main Menu:\n";
    cout << "Movies Club\n";
    cout << "1- Watch online movies\n";
    cout << "2- Rent a movie DVD\n";
    cout << "3- Show DVD rentals\n";
    cout << "4- Show DVD availability\n";
    cout << "5- Exit\n";
    cout << "Select an option: ";
 }
 
 //Function to read actors from file
vector<Actors> readActorsFromFile(){
    vector<Actors> listOfActors;

    ifstream file;
    file.open("Actors.txt");
    if (file){
        cout << "Errror file" << endl;

    }else{
        while(!file.eof()){
            string name;
            getline(file,name);

            int birthdateAsInt;
            file >> birthdateAsInt;
           // file.ignore(1,'/n'); // ignore the last data type that has been read and clean the bush            
            
			string nationality;
			getline(file, nationality);
		//	file.ignore(1,'/n'); // ignore the last data type that has been read and clean the bush 
			
			Actors currentActor(name, birthdateAsInt, nationality);

            listOfActors.push_back(currentActor);
        }
    }
    return listOfActors;
}
 
 // Function for printing the list of actors
void printListActors(){
    cout << "List actors:\n ";
    vector<Actors> actorsFromFile = readActorsFromFile();
    for(int i = 0; i< actorsFromFile.size();i++){
        cout << actorsFromFile[i].getName() << endl;
        cout << actorsFromFile[i].getBirthdate() << endl;
        cout << endl;

    }
}

