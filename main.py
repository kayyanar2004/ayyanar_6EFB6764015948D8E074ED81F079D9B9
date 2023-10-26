def factorial(n):
  # Base case: factorial of 0 is 1
  if n == 0:
      return 1
  # Recursive case: n! = n * (n-1)!
  else:
      return n * factorial(n - 1)

# Example usage
n = 5
result = factorial(n)
print(f"The factorial of {n} is {result}")
