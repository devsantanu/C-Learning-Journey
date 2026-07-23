# Snake, Water and Gun Game

A C implementation of the classic Snake-Water-Gun game (a Rock-Paper-Scissors variant) where the player competes against the computer.

## Description

The player picks Snake, Water, or Gun by entering a number (0, 1, or 2). The computer randomly picks its own choice. The program compares both choices and declares a winner based on the game rules. If both choices match, it's a draw and the round repeats until there's a winner.

## Rules

- Snake drinks Water → Snake wins
- Water drowns Gun → Water wins
- Gun kills Snake → Gun wins
- Same choice from both → Draw, play again

## Features

- Random choice generation for the computer using `rand()`
- Input validation (rejects non-numeric and out-of-range choices)
- Automatic replay on a draw until a winner is decided
- Clear match result messages for each round

## How to Run

```bash
gcc snake_water_gun.c -o snake_water_gun
./snake_water_gun
```

## What I Learned

- Using `rand()` and `srand()` for computer's random choice
- Input validation with `scanf()` and clearing invalid input using `getchar()`
- Implementing game logic with multiple conditional comparisons
- Using loops to repeat rounds until a decisive outcome
-