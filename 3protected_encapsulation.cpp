#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
        int age;

        void displayAge(){
            cout<<"Age: "<<this->age<<endl;
        }
};

class Person : public Human{
    string name;
    public:
        Person(string name, int age){
            this->name = name;
            this->age = age;
        }
        void dispalyInfo(){
            cout<<"Name is: " <<this->name<<endl;
            this->displayAge();
        }
};

int main(){
    
    Person p1("Rakib Khan",22);
    p1.dispalyInfo();
    return 0;
}