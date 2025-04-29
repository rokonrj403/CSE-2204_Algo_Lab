# Import necessary library
import sympy as sp

# Define the variable
x = sp.symbols('x')

# Define the function f(x)
f = 0.3 * x**2 - 2 * x + 3

# Compute the first derivative f'(x)
f_prime = sp.diff(f, x)

# Display the function and its derivative
print("f(x) =", f)
print("f'(x) =", f_prime)




# Define the function f(x)
def f(x):
    return 0.3 * x**2 - 2 * x + 3

# Define the derivative f'(x)
def f_prime(x):
    return 0.6 * x - 2

# Test the function and its derivative at x = 1 (or any value)
x_value = 1
print("f(x) at x = 1:", f(x_value))
print("f'(x) at x = 1:", f_prime(x_value))




2nd


# Define the function f(x)
def f(x):
    return 0.3 * x**2 - 2 * x + 3

# Define the derivative f'(x)
def f_prime(x):
    return 0.6 * x - 2

# Manually solve f'(x) = 0
# Equation: 0.6x - 2 = 0 -> x = 2 / 0.6
numerator = 2
denominator = 0.6
x_min = numerator / denominator

# Print results
print("f(x) = 0.3x^2 - 2x + 3")
print("f'(x) = 0.6x - 2")
print("The value of x that minimizes f(x) is:", x_min)
print("f(x) at x =", x_min, "is:", f(x_min))




# Part (a) - Define the function f(x) and its derivative f'(x)

def f(x):
    return 0.3 * x**2 - 2 * x + 3

def f_prime(x):
    return 0.6 * x - 2

# Part (b) - Solve f'(x) = 0 manually

# Solve for x: 0.6x - 2 = 0
numerator = 2
denominator = 0.6
x_true = numerator / denominator

# Part (c) - Calculate errors for an approximate value

# Approximate value (given)
x_approx = 3.3333

# Calculate Absolute Error
absolute_error = abs(x_true - x_approx)

# Calculate Relative Error (%)
relative_error = (absolute_error / abs(x_true)) * 100

# Print all results

print("Function: f(x) = 0.3x^2 - 2x + 3")
print("Derivative: f'(x) = 0.6x - 2\n")

print("Part (b) - Solve f'(x) = 0:")
print("The value of x that minimizes f(x) is:", x_true)
print("Value of f(x) at minimum:", f(x_true), "\n")

print("Part (c) - Error Calculation:")
print("Approximate value of x:", x_approx)
print("Absolute Error:", absolute_error)
print("Relative Error (%):", relative_error)



