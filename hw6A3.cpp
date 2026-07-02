#include <iostream>
#include <string>
#include <vector>

using namespace std;

//class
class Fish{
    private: // private values - name and value for every fish
        string name;
        int value;

    public: //constructor always in public data for access to value in private
        Fish(string n, int v){
            name = n; // convert private variables to copy for public access
            value = v; // old variable first, passby variable second in constructor
        }

        //getters
        string getName(){return name;} //gets name from name variable

        int getValue(){return value;} // gets value from value variable
};




int main() {
    //redeclare variables
    string name;
    int value = 0;
    int count = 0;

    //input from user
    cout << "Enter the number of fish caught: ";
    cin >> count;

    vector<Fish> fishTank; // class is a whole data set, a vector of said class is multiple of that class. Big data type -> small data type ( class defines arhetype of fish, 1 fish. Vector stores many fish)

    for(int i = 0; i < count; i++){ //for loop to ask for info about each fish the user has represented by count
        cout << "Enter name for fish " << i + 1 << ": "; // prompt uyser for fish name
        cin >> name;

        cout << "Enter value for fish " << i + 1 << ": "; // prompt user for value (i+1 for user as index starts at 0)
        cin >> value;

        Fish newFish(name, value); //create a new object class fish name newFish(name, value)

        fishTank.push_back(newFish); // push the newly created fish into the fish tank -> vector.push (object)
    }

    cout << "--- Fish Tank Bundle ---" << endl;

    for(size_t i = 0; i < fishTank.size(); i++){ // use .size() to read the length of array, scan and perform the following, must use size_t when using .size()
        cout << "Fish " << i + 1 << ": " << fishTank[i].getName() << " - " << fishTank[i].getValue() << " gold" << endl;
    }

    //additional variables for most valuable and total tank value
    int totalValue = 0;
    int mostValue = 0;

    for(size_t i = 0; i < fishTank.size(); i++){ //second for loop, size_t for .size()
        totalValue += fishTank[i].getValue(); // add curent fish value to total vlaue

        if(fishTank[i].getValue() > fishTank[mostValue].getValue()){ // if value at fish tank fish i > fishtank mostValue (set to zero) value
            mostValue = i; // most value = the higher value
        }
    }

    cout << "Total tank value: " << totalValue << " gold" << endl;
    cout << "Most valuable: " << fishTank[mostValue].getName() << " (" << fishTank[mostValue].getValue() << " gold" << ")" << endl;



    return 0;
}