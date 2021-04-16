
using namespace std;

 // Function for the main menu
 void printMenu(){

    cout << "Main Menu:\n";
    cout << "Movies Club\n";
    cout << "1 – Watch online movies\n";
    cout << "2 – Rent a movie DVD\n";
    cout << "3 – Show DVD rentals\n";
    cout << "4 - Show DVD availability\n";
    cout << "5 – Exit\n";
    cout << "Select an option: ";
 }
 
 // Function for printing the list of actors
void printListActors(){
    cout << "List actors:\n ";
    vector<Actors> actorsFromFile = readActorsFromFile();
    for(int i = 0; i< actorsFromFile.size();i++){
        cout << actorsFromFile[i].getName() << endl;
        cout << actorsFromFile[i].getBirthdate() << endl;
        cout << endl;

    }
}