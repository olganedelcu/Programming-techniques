//functions file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//#include "Actor.cpp"
#include "Movie.cpp"

using namespace std;

//Function to print out the menu
void printMenu(){
    cout << "Main Menu:\n";
    cout << "<< Movies Club >>\n";
    cout << "1- Watch online movies\n";
    cout << "2- Rent a movie DVD\n";
    cout << "3- Show DVD rentals\n";
    cout << "4- Show DVD availability\n";
    cout << "5- Exit\n";
    cout << "\nSelect an option: ";
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
            file.ignore(1,'/n'); // ignore the last data type that has been read and clean the bush            
            
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

 //Function to read movies from file
vector<Movie> readMoviesFromFile(){
    vector<Movie> listOfMovies;

    ifstream file;
    file.open("Movies.txt");
    if (!file){
        cout << "Errror file" << endl;

    }else{
        while(!file.eof()){
            string title;
            getline(file, title);
            
            string genre;
            getline(file, genre);
            
            string director;
            getline(file, director);
            
            int year;
            file >> year;
            file.ignore(1,'/n'); // ignore the last data type that has been read and clean the bush            
            
			string description;
			getline(file, description);
			
			float price;
			file >> price;
			file.ignore(1, '/n');
			
			Movie currentMovie(title, genre, director, year, description, price);

            listOfMovies.push_back(currentMovie);
        }
    }
    file.close();
    
    return listOfMovies;
}

// Function for printing the list of movies
void printListMovies(){
	vector<Movie> list = readMoviesFromFile();
	for(int i = 0; i < list.size(); i++){
		cout << list[i].getTitle() << endl;
		cout << list[i].getGenre() << endl;
		cout << list[i].getDirector() << endl;
		cout << list[i].getYear() << endl;
		cout << list[i].getDescription() << endl;
		cout << list[i].getPrice() << endl;
		cout << endl;
	}
}

// Function to look for price of a movie
float lookForPrice(string myTitle){
	vector<Movie> list = readMoviesFromFile();
	float price = -1;
	
	for(int i = 0; i < list.size(); i++){
		if (myTitle == list[i].getTitle()){
			price = list[i].getPrice();
		}
	}
	return price;
}
