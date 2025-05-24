#include<iostream> 
using namespace std;

class Wish{
    private:
        string name;
        int age;

        public:
            Wish(){ // Default Constructor
                name = "Unknown";
                age = 0;
            }

            Wish(string n, int a);// Parameterized Constructor 

            void birthdayWishes(){ // Declared the Member Function      
};

// Defining the rules of Parameterized constructor outside the Class using Scope Resolution Operator
Wish :: Wish(string n, int a){ // Syntax: className :: constructor(parameters) (No Return type required)
    name = n;
    age = a;
}

// Defining the member function out of the class using scope Resolution Operator
void Wish :: birthdayWishes(){  // Syntax: return_type className :: member-function(parameters)
    cout << "Happy Birthday " << name << " ! Now you're " << age 
    << " years old." << endl;
}

int main(){
    string personName;
    int personAge;

    Wish person1; // Object Declared
    person1.birthdayWishes();

    cout << "Enter your name: ";
    cin >> personName;
    cout << "Enter your age: ";
    cin >> personAge;

    Wish person2(personName, personAge);
    person2.birthdayWishes();
}