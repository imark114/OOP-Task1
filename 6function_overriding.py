class Animal:
    def sound(self):
        print("Animal makes a sound")

class Dog():
    def sound(self):
        print("Woof! Woof!")

class Cat():
    def sound(self):
        print("Meow! Meow!")


anim = Animal()
dog = Dog()
cat = Cat()

anim.sound()
dog.sound()  
cat.sound()
