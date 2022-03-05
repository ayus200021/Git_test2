#include<iostream>

using namespace std;

class Add_Amount{
    int balance=50;
    public:
        Add_Amount(){
            cout<<"default constructor called"<<endl;
        }

        Add_Amount(int add){
            cout<<"parameterized constructor called"<<endl;
            balance+=add;
        }

        void display(){
            cout<<"available amount: "<<balance<<endl;
        }
};

int main(){
    Add_Amount amount;
    amount.display();

    Add_Amount amount1(50);
    amount1.display();

    return 0;
}
