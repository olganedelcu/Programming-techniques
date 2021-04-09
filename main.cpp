#include <iostream>
#include <string>
#include <vector>
#include "Actors.h"

main() {
    int option;

    cout << "List actors:\n ";
    vector<Actors> actorsFromFile = readActorsFromFile();
    for(int i = 0; i< actorsFromFile.size();i++){
        cout << actorsFromFile[i].getName() << endl;
        cout << actorsFromFile[i].getBirthdate() << endl;
        cout << endl;

    }
}