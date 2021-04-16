#include "Actors.h"
class Movie{
    private:
        string title;
        string genre;
        string director;
        int year;
        vector<Actors> actors;
        string description;
        float price;

    public:
        //constructor
        Movie
        //getter and setter for Title attribute
        void setTitle(string myTitle){
            title = myTitle;
        }
        string getTitle(){
            return title;
        }
        //getter and setter for Genre attribute
        void setGenre(string myGenre){
            genre = myGenre;
        }
        string getGenre(){
            return genre;
        }
        //getter and setter for director attribute
        void setDirector(string myDirector){
            director = myDirector;
        }
        string getDirector(){
            return Director;
        }
        //getter and setter for year attribute
        void setYear(int myYear){
            year = myYear;
        }
        int getYear(){
            return year;
        }
}
