#!/usr/bin/python3
# Initialize variables to store the largest palindrome and the corresponding factors
largest_palindrome = 0
factors = (0, 0)

# Iterate through all 3-digit numbers
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        # Check if the product is a palindrome and greater than the current largest palindrome
        if str(product) == str(product)[::-1] and product > largest_palindrome:
            largest_palindrome = product
            factors = (i, j)

# Print the largest palindrome and the corresponding factors
result = largest_palindrome

# Save the result to the file '102-result'
with open('102-result', 'w') as file:
    file.write(str(result))

