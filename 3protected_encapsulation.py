class Human:
    _age = 0;

    def dispalyAge(self) -> None:
        print("Age: ",self._age);

class Person(Human):

    def __init__(self, name, age)->None:
        self.name = name
        self._age = age

    def displayInfo(self):
        print("Name is: ", self.name)
        self.dispalyAge()

p1 = Person("Rakib Khan", 22)
p1.displayInfo()

