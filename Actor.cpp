#include <string>

using namespace std;

class Actor{ //The class Actors
  private:
    string name;      // Atribute name
    int birthdate;    // Atribute birthdate IS IT A NUMBER???
    string nationality;

  public:           
  
  	// constructor for actor to reicive name and birthdate  
  	Actor(string myName,int myBirthdate, string myNationality){
  		name = myName;
  		birthdate = myBirthdate;
  		nationality = myNationality;
	}
  
    // getter and setter for Name
   void setName(string myName){
       name = myName;
   }
   string getName() {
       return name;
   }
    // getter and setter for Birthdate
   void setBirthdate(int myBirthdate){
       birthdate = myBirthdate;
   } 
   int getBirthdate() {
       return birthdate;
   }
    // getter and setter for Nationality
   void setNationality(string myNationality) {
       nationality = myNationality;
   }
   string getNationality() {
       return nationality;
   }
   
};