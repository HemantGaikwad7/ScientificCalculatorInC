# Scientific Calculator in C

A console-based scientific calculator implementing basic arithmetic and scientific operations.

![Calculator Demo](demo.gif) *(Optional: Add a GIF demo if available)*

## Features

- **Basic Operations:**
  - Addition (+)
  - Subtraction (-)
  - Multiplication (×)
  - Division (÷)
  - Modulus (%)
  - Power (x^y)
  - Square Root (√x)

- **Scientific Operations:**
  - Exponential (e^x)
  - Natural Logarithm (ln)
  - Base-10 Logarithm (log₁₀)
  - Trigonometric Functions:
    - Sine (sin)
    - Cosine (cos)
    - Tangent (tan)
    *(All trigonometric functions use radians)*

- **Error Handling:**
  - Division by zero protection
  - Negative square root detection
  - Invalid logarithm input checks
  - Input validation for menu choices

## Installation

1. **Prerequisites:**
   - GCC compiler
   - Math library (`libm`)

2. **Compilation:**
   ```bash
   gcc calculator.c -o calculator -lm
