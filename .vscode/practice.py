import cmath
def mullers_method(f, x0, x1, x2, tol=1e-10, max_iter=100):
    for i in range(max_iter):
        h1 = x1 - x0
        h2 = x2 - x1
        delta1 = (f(x1) - f(x0)) / h1
        delta2 = (f(x2) - f(x1)) / h2
        a = (delta2 - delta1) / (h2 + h1)
        b = a * h2 + delta2
        c = f(x2)
        disc = cmath.sqrt(b**2 - 4 * a * c)
        if abs(b + disc) > abs(b - disc):
            den = b + disc
        else:
            den = b - disc

        dxr = -2 * c / den
        xr = x2 + dxr

        if abs(dxr) < tol * max(abs(xr), 1.0):
            return xr, i + 1 

        x0, x1, x2 = x1, x2, xr

    raise ValueError("Muller's method did not converge within the maximum number of iterations.")
def f(x):
    return x**3 - x**2 - 1

initial_guesses = [0.0, 1.0, 2.0]
root, iterations = mullers_method(f, *initial_guesses)

print(f"Root: {root}")
print(f"Iterations: {iterations}")
