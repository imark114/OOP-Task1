# Parent class 1
class Animal:
    def __init__(self, species):
        self.species = species

    def info(self):
        print(f"{self.species} is Animal")

# Parent class 2
class Pet:
    def __init__(self, name):
        self.name = name

    def play(self):
        print(f"{self.name} is playing")

# Child class inheriting from both Animal and Pet
class Dog(Animal, Pet):
    def __init__(self, species, name, breed):
        Animal.__init__(self, species)
        Pet.__init__(self, name)
        self.breed = breed

    def bark(self):
        print("Dog is barking")

# Create an instance of Dog
my_dog = Dog("Canine", "Romeo", "Labrador")
print(my_dog.species)  
print(my_dog.name)     
print(my_dog.breed)    
my_dog.info() 
my_dog.play()         
my_dog.bark()          
