#include <iostream>

using namespace std;


class Actors {       // The class
  private:
    string name;      // Atribute name
    string birthdate;    // Atribute birthdate IS IT A NUMBER???
    string nationality;

  public:           
  
  	// constructor for actor to reicive name and birthdate
  	void actors(string name,string birthdate);
  
    // getter and setter for Name
   void setName(string n){
       name = n;
   }
   string getName() {
       return name;
   }
    // getter and setter for Birthdate
   void setBirthdate(string b){
       birthdate = b;
   } 
   string getBirthdate() {
       return birthdate;
   }
    // getter and setter for Nationality
   void setNationality(string nt) {
       nationality = nt;
   }
   string getNationality() {
       return nationality;
   }
   
};
