# Write your code here.......
# Write your code here.......
class Car:
    """Base class for the dealership system."""
    def __init__(self, brand, price, model, color):
        self.brand = brand
        self.price = float(price)
        self.model = model
        self.color = color

    def display_details(self):
        # Base method (not explicitly used in your output format)
        pass

class Car1(Car):
    """Derived class for the first car entry."""
    def display_details(self):
        print(f"{self.brand}")
        # Formats float to remove unnecessary trailing zeros but keeps .0 if integer
        print(f"{self.price:.1f}" if self.price % 1 == 0 else f"{self.price}")
        print(f"{self.model}")
        print(f"{self.color}")

class Car2(Car):
    """Derived class for the second car entry."""
    def display_details(self):
        print(f"{self.brand}")
        print(f"{self.price:.1f}" if self.price % 1 == 0 else f"{self.price}")
        print(f"{self.model}")
        print(f"{self.color}")

def main():
    try:
        # Read and split input for Car 1
        data1 = input().split()
        car1 = Car1(data1[0], data1[1], data1[2], data1[3])

        # Read and split input for Car 2
        data2 = input().split()
        car2 = Car2(data2[0], data2[1], data2[2], data2[3])

        # Display results
        car1.display_details()
        car2.display_details()
    except (EOFError, IndexError):
        pass

if __name__ == "__main__":
    main()
 
'''# Read input
car1_data = input().split()
brand1, price1, model1, color1 = car1_data[0], float(car1_data[1]), car1_data[2], car1_data[3]

car2_data = input().split()
brand2, price2, model2, color2 = car2_data[0], float(car2_data[1]), car2_data[2], car2_data[3]

# Create objects
car1 = Car1(brand1, price1, model1, color1)
car2 = Car2(brand2, price2, model2, color2)

# Display details
car1.display_details()
car2.display_details()'''
