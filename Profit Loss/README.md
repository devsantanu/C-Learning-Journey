# Profit or Loss Calculator

A simple C program that takes a product's cost price and selling price as input, calculates the net profit or loss, and displays the result.

## Features

- Accepts product **cost value** and **sell value** as input
- Validates input (ensures both values entered are valid numbers)
- Calculates **net profit** (Sell Value − Cost Value)
- Displays whether the transaction resulted in a **Profit** or **Loss**

## How to Compile and Run

```bash
# Compile
gcc profit_loss.c -o profit_loss

# Run
./profit_loss
```

## Sample Output

**Profit case:**
```
Input a product cost value and sell value: 100 150
net_profit = 50.0
Profit
```

**Loss case:**
```
Input a product cost value and sell value: 200 150
net_profit = -50.0
Loss
```

**Invalid input case:**
```
Input a product cost value and sell value: abc xyz
Invalid input, please enter a valid num
```

## Logic

- `net_profit = sell - cost`
- If `net_profit > 0` → **Profit**
- If `net_profit <= 0` → **Loss** (includes the break-even case of zero profit)

## Known Limitations

- Treats a net profit of exactly `0` as a **Loss** rather than "No Profit No Loss" — a possible improvement is to add a third case for break-even.
- Only handles a single cost/sell pair per run (no loop for multiple products).

## Possible Future Improvements

- Add a separate "No Profit No Loss" case when `net_profit == 0`
- Allow entering multiple products in a loop
- Calculate and display profit/loss **percentage**
- Save results to a file for record-keeping

## Author

**Santanu Kumar Sahoo**

## License

This project is open source and available for personal or educational use.