#include<bits/stdc++.h>
using namespace std;


class Animal{
    public:
        void sound(){
            cout<<"Animla can Make Sound"<<endl;
        }
};

class Cat{
    public:
        void sound(){
            cout<<"Meow! Meow!"<<endl;
        }
};

class Dog{
    public:
        void sound(){
            cout<<"Woof! Woof!"<<endl;
        }
};

int main(){
    
    Animal anim;
    Cat cat;
    Dog dog;
    anim.sound();
    cat.sound();
    dog.sound();
    return 0;
}