# GCD
# GCD Algorithm (C++)

This repository contains a C++ implementation of the Euclidean algorithm for calculating the **Greatest Common Divisor (GCD) of two numbers. This algorithm is widely used in number theory, cryptography, and other algorithmic applications.

## Features
- Simple and efficient C++ implementation of the Euclidean algorithm.
- Allows the calculation of the GCD of two integers using recursion.
- Can be used as a foundation for solving mathematical and algorithmic problems.

## Problems Solved

This program solves the Greatest Common Divisor (GCD) problem using the Euclidean algorithm:

### Problem: Calculate the GCD of two numbers using recursion

The program implements the Euclidean algorithm for finding the greatest common divisor (GCD) of two integers. The algorithm works as follows:

- If `b == 0`, then `gcd(a, b) = a`.
- If `b != 0`, then `gcd(a, b) = gcd(b, a mod b)`.

This recursive function helps find the GCD in an efficient manner, reducing the size of the numbers at each step.

Example Problem:
- Input 1:
    - Enter a number: `6`
    - Enter another number: `8`
    - Output: `GCD = 2`
- Input 2:
    - Enter a number: `24`
    - Enter another number: `30`
    - Output: `GCD = 6`

## How to Use

1. Clone the repository:
   ```bash
   git clone https://https://github.com/johno1114/GCD
   cd GCD
   git clone https://github.com/JoHNO1114/GCD.git
   cd YOUR_REPOSITORY_NAME
