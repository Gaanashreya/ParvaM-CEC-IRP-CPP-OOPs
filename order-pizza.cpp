#include<iostream>
using namespace std;

class Pizza{
    private:
        string secretIngredient;

    public:
        string pizzaType, size;
        int price;
        bool isPaymentDone;

        void orderPizza(){
            cout << "order the Pizza by selecting your favourite Pizza: " << endl;
        }

        void bookPizza(){
            cout << "Booking Pizza!" << endl;
        }

        void bakePizza(string type, string pizzaSize){
            pizzaType = type;
            size = pizzaSize;
            cout << "Pizza Type: " << pizzaType << ", size" << size << endl;
        }

        void addIngredient(string secret){
            secretIngredient = secret;
        }

        void confirmOrder(){
            cout << "Order Confirmed!" << endl;
        }

        bool checkPayment(int money, bool payment){
            price = money;
            isPaymentDone = payment;
            if(isPaymentDone == true){
                cout << "Amount Paid: Rs." << price << ", Payment Successful!" << endl;
                confirmOrder();
                bookPizza();
                return true;
            } else{
                cout << "Amount Due: Rs." << price << ", Payment Pending!" << endl;
                return false;
            }
        }
            
        void servePizza(int amount, bool paid, string typeOfPizza, string sizeOfPizza, string secretItem){
            if(!checkPayment(amount, paid)){
                cout << "order cancelled due to pending payment!" << endl;
                return;
            }
            bakePizza(typeOfPizza, sizeOfPizza);
            addIngredient(secretItem);
            cout << "Pizza Served! Enjoy your Pizza";
        }
};

int main(){
    string pizType, size, secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza Customer1;
    Customer1.orderPizza();

    cout << "Enter the Pizza Type (Veg/Non-Veg), size(Regular/Medium/Large):";
    cin >> pizType >> size;

    pizzaAmount = 399;
    cout << " Did the Pay the Amount(Type '1' if paid/ Type '0' if not paid):";
    cin >> amountPaid;

    Customer1.servePizza(pizzaAmount, amountPaid, pizType, size, secretIng);
}