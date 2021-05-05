#include <string>
#include <vector>
#include "Actor.cpp"

using namespace std;

class Movie{
    protected:
        string title;
        string genre;
        string director;
        int year;
        vector<Actor> casting;
        string description;
        float price;

    public:
        //constructor
        Movie(string myTitle, string myGenre, string myDirector, int myYear, string myDescription, float myPrice){
  			title = myTitle;
  			genre = myGenre;
  			director = myDirector;
  			year = myYear;
  			description = myDescription;
  			price = myPrice;
		}
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
            return director;
        }
        //getter and setter for year attribute
        void setYear(int myYear){
            year = myYear;
        }
        int getYear(){
            return year;
        }
        //getter and setter for cast attribute
        
        void setCast(vector<Actor> myCasting){
        	casting = myCasting;
		}
		vector<Actor> getCast(){
			return casting;
		}
        //getter and setter for description attribute
        void setDescription(string myDescription){
        	description = myDescription;
    	}
    	string getDescription(){
    		return description;
		}
		//getter and setter for price attribute
		void setPrice(float myPrice){
			price = myPrice;
		}
		float getPrice(){
			return price;
		}
};