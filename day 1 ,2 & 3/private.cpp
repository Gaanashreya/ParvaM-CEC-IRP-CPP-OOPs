#include<iostream>
using namespace std;

class Company{
    private:
        string cin;
        int totalWorth=0;

    public:
        string gstNum, location;
        int numOfEmp;

       // setter method
        void setDetails(string cinNum, int worth){
            cin=cinNum;
            totalWorth = worth; 
        }

        // getter method
        void getDetails(string gstNumber){
            cout << "Corporate Identity Number: " << cin << endl;
            cout << "Total Worth of the Company:" << totalWorth << endl;
        }

        void getBasicDetails(); //Declare the member function
};

// Function Definition outside the Class
// Syntax: return_type class_name :: member_function
void Company :: getBasicDetails(){ //scope Resolution Operator
    cout << "GST Number: " << gstNum << endl;
    cout << "location: " << location << endl;
    cout << "number of Employees: " << numOfEmp << endl;
}

int main(){
    Company comp1; // object created 
    comp1.gstNum = "12345ABCD78";
    comp1.location = "Bengaluru";
    comp1.numOfEmp = 50;
    comp1.getBasicDetails();

    string cinNumber;
    int CompanyWorth;

    cinNumber = "123564AB87";
    CompanyWorth = 500000000;

    comp1.setDetails(cinNumber, CompanyWorth);
    comp1.getDetails(comp1.gstNum);
}