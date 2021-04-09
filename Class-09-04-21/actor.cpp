#include <iostream>
using namespace std;

class Movie {

    private:
    string title;
    int year;
    vector<Actor> actors;

    public:
    Movie(){};

    Movie(string title, int year,vector<Actor> actors){
        title = myTitle;
        year = myYear;
        actors = myActors;

    }
}