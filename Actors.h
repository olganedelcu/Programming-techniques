class Actors {       // The class
  private:
    string name;      // Atribute name
    int birthdate;    // Atribute birthdate
    string nationality;

  public:           
   void setName(string n){
       name = n;
   }

   int getName() {
       return name;
   }

};