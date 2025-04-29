// To Display n Number of nutural numbers and their sum
#include <iostream>
using namespace std;

int main(){

    int numberN;


    cout << "Enter the N: ";
    cin >> numberN;

    int sum = 0;

    cout << "Nutural Numbers Are: ";
    for (int i = 1; i <= numberN; i++)
    {
        cout << i << " ";

        sum = sum + i;
    }

    cout << "\n";

    cout << "Sum Of N Nutural Numbers is: " << sum << endl;

    return 0;
}






def f(x):
    # Define your function here
    return x**3 - x - 2

def bisection(a, b, tol, max_iter):
    if f(a) * f(b) >= 0:
        print("Bisection method fails: f(a) and f(b) must have opposite signs.")
        return None

    c = a
    for i in range(max_iter):
        c = (a + b) / 2  # Midpoint
        if f(c) == 0.0 or (b - a) / 2 < tol:
            # Found the root or error is within tolerance
            print(f"Root found after {i+1} iterations: {c}")
            return c

        if f(c) * f(a) < 0:
            b = c
        else:
            a = c

    print(f"Method did not converge after {max_iter} iterations.")
    return c

# Example usage:
a = 1
b = 2
tolerance = 1e-5
max_iterations = 100

root = bisection(a, b, tolerance, max_iterations)
print("Approximate Root:", root)



newton rapshon

def f(x):
    # Define your function here
    return x**3 - x - 2

def df(x):
    # Define the derivative of your function here
    return 3*x**2 - 1

def newton_raphson(x0, tol, max_iter):
    x = x0
    for i in range(max_iter):
        fx = f(x)
        dfx = df(x)

        if dfx == 0:
            print("Zero derivative. No solution found.")
            return None

        x_new = x - fx / dfx

        if abs(x_new - x) < tol:
            print(f"Root found after {i+1} iterations: {x_new}")
            return x_new

        x = x_new

    print(f"Method did not converge after {max_iter} iterations.")
    return x

# Example usage:
initial_guess = 1.5
tolerance = 1e-5
max_iterations = 100

root = newton_raphson(initial_guess, tolerance, max_iterations)
print("Approximate Root:", root)


-------


False position

hdef f(x):
    # Define your function here
    return x**3 - x - 2

def false_position(a, b, tol, max_iter):
    if f(a) * f(b) >= 0:
        print("False Position method fails: f(a) and f(b) must have opposite signs.")
        return None

    c = a
    for i in range(max_iter):
        # Formula for False Position (Regula Falsi)
        c = b - (f(b) * (b - a)) / (f(b) - f(a))

        if f(c) == 0 or abs(f(c)) < tol:
            print(f"Root found after {i+1} iterations: {c}")
            return c

        if f(c) * f(a) < 0:
            b = c
        else:
            a = c

    print(f"Method did not converge after {max_iter} iterations.")
    return c

# Example usage:
a = 1
b = 2
tolerance = 1e-5
max_iterations = 100

root = false_position(a, b, tolerance, max_iterations)
print("Approximate Root:", root)




