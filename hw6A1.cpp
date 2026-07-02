#include <iostream>
#include <string>

using namespace std;



class Fish {
    private:
        string name;
        string habitat;
        int value;

    public: // public data 
        Fish(string n, string h, int v){ // constructor to acces private data to public
            name = n;
            habitat = h;
            value = v;
        }

        //getter functions in class, declared with empty parentheses followed by bracket and return 
        string getName(){return name;}

        string getHabitat(){return habitat;}

        int getValue(){return value;}

        //setters, format is same as member functions
        void setName(string newName){
            name = newName;
        }
        void setHabitat(string newHabitat){
            habitat = newHabitat;
        }
        void setValue(int newValue){
            value = newValue;
        }

        void describe(){ // void describe belongs in public data set, call variables directly, use getters and setters in main to pass by data.
        cout << "Fish: " << name << endl;
        cout << "Habitat: " << habitat << endl;
        cout << "Value: " << value << endl;
    }
};


int main() {
    //redeclaring variables from class for user input, is there an alternative?
    string name;
    string habitat;
    int value;

    Fish starterFish("Sunfish", "river", 30); // starting sunfish

    //user input for additional fish
    cout << "Enter a fish name: ";
    cin >> name;

    cout << "Enter it's habitat: ";
    cin >> habitat;

    cout << "Enter its value: ";
    cin >> value;

    //headers
    cout << "--- Fish Catalog ---" << endl;

    // output block
    cout << "Name: " << starterFish.getName() << endl;
    cout << "Habitat: " << starterFish.getHabitat() << endl;
    cout << "Value: " << starterFish.getValue() << endl;
    
    return 0;
}