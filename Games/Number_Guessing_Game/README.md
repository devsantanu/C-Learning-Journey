# Number Guessing Game

A simple, interactive command-line game written in C where the player tries to guess a randomly generated number.

## Description

The program generates a random number between 1 and 100. The player repeatedly guesses until they find the correct number, receiving "Higher number please!" or "Lower number please!" hints after each guess. The game also tracks and displays the total number of attempts taken.

## Features

- Random number generation using `rand()` and `srand(time(0))`
- Input validation (rejects non-numeric input and out-of-range guesses)
- Attempt counter
- Performance feedback based on number of attempts:
  - 5 or fewer attempts: "Excellent!"
  - 6–10 attempts: "Good job!"
  - More than 10 attempts: "Keep practicing!"

## How to Run

```bash
gcc guess_the_number.c -o guess_the_number
./guess_the_number
```

## What I Learned

- Using `rand()` and `srand()` for random number generation
- Input validation with `scanf()` and clearing invalid input using `getchar()`
- Using `do-while` loops for repeated user input
- Conditional logic for dynamic feedback messages
-