#include <bits/stdc++.h>
using namespace std;

class Animal
{
protected:
    string species;

public:
    Animal(string species) : species(species) {}
    void info()
    {
        cout << this->species << " is Animal" << endl;
    }
};

class Pet
{
public:
    string name;
    Pet(string name) : name(name) {}

    void play()
    {
        cout << this->name << " is playing" << endl;
    }
};

class Dog : public Animal, public Pet
{
public:
    string breed;
    Dog(string species, string name, string breed) : Animal(species), Pet(name), breed(breed) {}

    void bark()
    {
        cout << "Dog is barking" << endl;
    }
};

int main()
{

    Dog my_dog("Canine", "Romeo", "Labrador"); 
    my_dog.info();                             
    my_dog.play();                             
    my_dog.bark();
    return 0;
}