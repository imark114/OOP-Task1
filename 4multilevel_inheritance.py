# Parent class
class Vehicle:
    def start(self):
        print("Vehicle started")

# Parent class inheriting from Vehicle
class Car(Vehicle):
    def drive(self):
        print("Car is being driven")

#  Child class inheriting from Car
class ElectricCar(Car):
    def charge(self):
        print("Electric car is charging")

my_electirc_car = ElectricCar()
my_electirc_car.start()
my_electirc_car.drive()
my_electirc_car.charge()