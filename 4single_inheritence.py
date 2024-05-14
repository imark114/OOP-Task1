class Vehicle:
    def __init__(self,wheels) -> None:
        self.wheels = wheels
    def displayWheel(self):
        print("Number of Wheels: ", self.wheels)
            
class Car(Vehicle):
    def __init__(self, name, wheels) -> None:
        self.name= name
        super().__init__(wheels)

    def displayInfo(self):
        print("Car Name:", self.name)
        self.displayWheel()

obj = Car("Rangerover", 4)
obj.displayInfo()
