#include <iostream>
#include <vector>
#include <string>
#include "Movie.h"

using namespace std;

vector<Actor> readActorsFromFile(){
    vector<Actors> actors;

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
            file.ignore(1,'/n'); // ignore the last data type that has been read and clean the bush
            Actor currentActor(name,birthdate);

            actors.push_back(currentActor);

        }
    }
}