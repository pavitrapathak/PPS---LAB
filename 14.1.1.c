'''class Complex:
	# Write the code......


# Create three instances
c1 = Complex()
c2 = Complex()
c3 = Complex()

# Initialize two complex numbers
c1.initComplex()
c2.initComplex()

# Compute and display sum
c3.sum(c1, c2)
c3.display()'''
import sys
class Complex:
    def __init__(self):
        self.real = 0
        self.imag = 0

    def initComplex(self, r, i):
        """Assigns the real and imaginary parts."""
        self.real = r
        self.imag = i

    def sum(self, c1, c2):
        """Computes the sum of two complex numbers."""
        self.real = c1.real + c2.real
        self.imag = c1.imag + c2.imag

    def display(self):
        """Displays the result in <a> + <b>i or <a> - <b>i format."""
        # Determine the sign based on the imaginary part
        if self.imag >= 0:
            sign = "+"
        else:
            sign = "-"
        
        # Using abs() on imag ensures we don't get double signs (e.g., + -)
        print(f"{self.real} {sign} {abs(self.imag)}i")

def main():
    # Create instances for the two input numbers
    c1 = Complex()
    c2 = Complex()
    
    try:
        # Read the first complex number
        line1 = sys.stdin.readline().split()
        if not line1: return
        c1.initComplex(int(line1[0]), int(line1[1]))
        
        # Read the second complex number
        line2 = sys.stdin.readline().split()
        if not line2: return
        c2.initComplex(int(line2[0]), int(line2[1]))
        
        # Create result instance and calculate sum
        result = Complex()
        result.sum(c1, c2)
        
        # Display the result
        result.display()
        
    except (EOFError, IndexError, ValueError):
        pass

if __name__ == "__main__":
    main()
