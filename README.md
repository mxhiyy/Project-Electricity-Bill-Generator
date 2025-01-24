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
**************************************************
        :E l e c t r i c i t y    B i l l:
**************************************************
Enter Customer Name: John Doe
Enter Customer ID: 12345
Enter the unit consumed by the customer: 250

Customer ID: 12345
Customer Name: John Doe
Unit Consumed by Customer: 250
Bill of Units without tax is: 650 Rs.
Meter Charges: 50 Rs.
Tax is: 65 Rs.
Total Bill Pay by Customer: 765 Rs.
` ``` `
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
