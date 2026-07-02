#include <iostream>
#include <string>

using namespace std;


class Fish{
    private: // 3 required variables
        string name;
        int baseValue;
        int quality; // 0=normal, 1=silver 2=gold

    public: // convert private info to additional call variables
        Fish(string n, int b, int q){ // constructor
            name = n;
            baseValue = b;
            quality = q;
        }

    //GETTERS
    string getName(){return name;} // getter to pull fish name

    //SETTERS
    void setQuality(int q){ //setter changes the stored quality
        quality = q;
    }  

    //METHODS
    string qualityName(){ // returns "gold" for 2, "silver" for 1, and "normal" otherwise, value of quality=name
        if(quality == 2){
            return "Gold";
        }
        else if(quality == 1){
            return "Silver";
        }
        else{
            return "Normal";
        }
    }

    int sellPrice(){ // returns base value +  1/2 base value (baseValue + baseValue / 2) for Gold quality, the base value plus a quarter (baseValue + baseValue / 4) for Silver quality, just the base value for Normal quality.
        if(quality == 2){
            return (baseValue + baseValue / 2);
        }
        else if(quality == 1){
            return (baseValue + baseValue / 4);
        }
        else{
            return baseValue;
        }
    }


};

int main() {
    string name; //redclare variables, standing by for a solution way to not redeclare in main.
    int baseValue;

    cout << "Enter the base value of the catch: "; // prompt user
    cin >> baseValue;

    Fish firstFish("Sunfish", baseValue, 0); // create an object using class order -> class object(parameters)

    cout << "--- Catch of the Day ---" << endl; // header

    cout << "Fish: " << firstFish.getName() << endl; // use getter to get name of fish
    cout << "Quality: " << firstFish.qualityName() << endl; //use getter to output quality name
    cout << "Sell Price: " << firstFish.sellPrice() << endl; // use getter to output sell price

    firstFish.setQuality(2); // maunally changing a value in object -> object.setter(modification)

    cout << "The fish is upgraded to " << firstFish.qualityName() << " quality!" << endl; //out put new quality name stored in .qualityName()

    cout << "Quality: " << firstFish.qualityName() << endl; // getter quality name updates and is called for output
    cout << "Sell Price: " << firstFish.sellPrice() << endl; // getter sellprice updates and is called for output.

    return 0;
}