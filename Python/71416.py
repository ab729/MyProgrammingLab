class Car:

    def __init__(self, year_model, make):
        self.year_model = year_model
        self.make = make
        self.speed = 0

    def accelerate(self):
        self.speed += 5

    def brake(self):
        if self.speed >= 5:
            self.speed -= 5
        else:
            self.speed = 0

    def get_speed(self):
        return self.speed
	
my_car = Car(2020, "Mercedes")



my_car.accelerate()
print(my_car.get_speed())
my_car.accelerate()
print(my_car.get_speed())
my_car.accelerate()
print(my_car.get_speed())
my_car.accelerate()
print(my_car.get_speed())
my_car.accelerate()
print( my_car.get_speed())



my_car.brake()
print(my_car.get_speed())
my_car.brake()
print( my_car.get_speed())
my_car.brake()
print(my_car.get_speed())
my_car.brake()
print(my_car.get_speed())
my_car.brake()
print(my_car.get_speed())
