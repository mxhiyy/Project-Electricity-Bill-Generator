# Electricity Bill Calculator

This is a simple C++ program that calculates the electricity bill based on the units consumed by a customer. The program applies different rates for electricity consumption and includes tax and meter charges in the final bill.

## Features

- Input customer's name, ID, and units consumed.
- Calculate electricity charges based on the following unit slabs:
  - 0–100 units: ₹1 per unit
  - 101–200 units: ₹2 per unit (after the first 100 units)
  - 201–300 units: ₹3 per unit (after the first 200 units)
  - 301–400 units: ₹4 per unit (after the first 300 units)
  - Above 400 units: ₹5 per unit (after the first 400 units)
- Add 10% tax to the bill.
- Include a flat ₹50 meter charge.
- Display a detailed breakdown of the total bill.
` ``` `
## Example Output
![image](https://github.com/user-attachments/assets/9aedc2ce-6838-4b3e-857a-cca67088daac)

## Requirements
-C++ compiler (e.g., GCC)
-Any operating system with a terminal or command prompt to run the program

## How It Works
1. The program takes the customer's name, ID, and units consumed as input.
2. It calculates the bill amount based on the units consumed using predefined rate slabs.
3. A 10% tax is applied to the bill, and a ₹50 meter charge is added.
4. The program outputs a detailed bill breakdown, including:
- Customer details
- Units consumed
- Amount before tax
- Tax and meter charges
- Total payable amount

## Contributing
If you'd like to contribute to this project, feel free to open an issue or submit a pull request.

## Authour: Maheet Deep
