//functions file
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
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
	vector<Movie> movieList = readMoviesFromFile();
	vector<Actor> actorList = readActorsFromFile();
	
	for(int i = 0; i < movieList.size(); i++){
		cout << movieList[i].getTitle() << "\t" << movieList[i].getDirector() << "\t" << movieList[i].getYear() << "\t" << actorList[2*i].getName() << "\t" << movieList[i].getDescription() << endl;
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

//function to get current Date
int getCurrentDate(){
	time_t t = time(0);   // get time now
	tm* now = localtime(&t);
	
	int year = now->tm_year + 1900;
	int month = now->tm_mon + 1;
	int day = now->tm_mday;
	
	int currentDateAsInt = (year * 10000 ) + (month * 100) + day;
	
	return currentDateAsInt;
}

//function to get current Month as a string
string getCurrentMonth(){
	time_t t = time(0);   // get time now
	tm* now = localtime(&t);
	
	int currentMonthAsInt = now->tm_mon + 1;
	string currentMonthAsString;
	
	switch(currentMonthAsInt){
		case 1:
			currentMonthAsString = "January";
			break;
		case 2:
			currentMonthAsString = "February";
			break;
		case 3:
			currentMonthAsString = "March";
			break;
		case 4:
			currentMonthAsString = "April";
			break;
		case 5:
			currentMonthAsString = "May";
			break;
		case 6:
			currentMonthAsString = "June";
			break;
		case 7:
			currentMonthAsString = "July";
			break;
		case 8:
			currentMonthAsString = "August";
			break;
		case 9:
			currentMonthAsString = "September";
			break;
		case 10:
			currentMonthAsString = "October";
			break;
		case 11:
			currentMonthAsString = "November";
			break;
		case 12:
			currentMonthAsString = "December";
			break;
	}
	return currentMonthAsString;
}
