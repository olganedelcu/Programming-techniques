//functions file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Actor.cpp"

using namespace std;

//Function to print out the menu
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
vector<Actor> readActorsFromFile(){
    vector<Actor> listOfActors;

    ifstream file;
    file.open("Actors.txt");
    if (!file){
        cout << "Errror file" << endl;

    }else{
        while(!file.eof()){
            string name;
            getline(file,name);

            int birthdateAsInt;
            file >> birthdateAsInt;
            file.ignore(1,'\n'); // ignore the last data type that has been read and clean the bush            
            
			string nationality;
			getline(file, nationality);
			
			Actor currentActor(name, birthdateAsInt, nationality);

            listOfActors.push_back(currentActor);
        }
    }
    file.close();
    
    return listOfActors;
}
 
 // Function for printing the list of actors
void printListActors(){
    vector<Actor> list = readActorsFromFile();
	for(int i = 0; i < list.size(); i++){
		cout << list[i].getName() << endl;
		cout << list[i].getBirthdate() << endl;
		cout << list[i].getNationality() << endl;
		cout << endl;
	}
}
