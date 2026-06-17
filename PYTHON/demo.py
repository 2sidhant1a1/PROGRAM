class Car:
    wheels = 4  # class attribute

    def __init__(self, color):
        self.color = color  # instance attribute

car1 = Car("Red")
car2 = Car("Blue")

print(car1.color)  # Red
print(car2.color)  # Blue

# Changing instance attribute
car1.color = "Black"
print(car1.color)  # Black
print(car2.color)  # Blue
