#include "Actors.h"
class Movie{
    private:
        string title;
        string genre;
        string director;
        int year;
        vector<Actors> actors;
        char description[256];
        int price;

    public:
        //getter and setter for Title attribute
        void setTitle(string str){
            title = str;
        }
        string getTitle(){
            return title;
        }
        //getter and setter for Genre attribute
        void setGenre(string str){
            genre = str;
        }
        string getGenre(){
            return genre;
        }
        //getter and setter for director attribute
        void setDirector(string str){
            director = str;
        }
        string getDirector(){
            return Director;
        }
}
