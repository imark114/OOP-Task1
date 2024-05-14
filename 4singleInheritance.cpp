#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    protected:
        int wheels;
        void display(){
            cout<<"Number of Wheels: "<<this->wheels;
        }
};

class Car : public Vehicle{
    string model;
    public:
        Car(string model, int wheel){
            this->model = model;
            this->wheels = wheel;
        }

        void displayInfo(){
            cout<<"Car Model: "<<this->model<<endl;
            this->display();
        }
};

int main(){
    
    Car c1("Rangerover", 4);
    c1.displayInfo();
    return 0;
}