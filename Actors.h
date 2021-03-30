
class Actors {       // The class
  private:
    string name;      // Atribute name
    int birthdate;    // Atribute birthdate
    string nationality;

  public:           
    // getter and setter for Name
   void setName(string n){
       name = n;
   }
   string getName() {
       return name;
   }
    // getter and setter for Birthdate
   void setBirthdate(int b){
       birthdate = b;
   } 
   int getBirthdate() {
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