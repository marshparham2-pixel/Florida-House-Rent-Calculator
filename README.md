# Florida-House-Rent-Calculator
A simple C++ console program to estimate monthly rent for a house in Florida, considering size, bedrooms, city, and optional amenities (Pool, Parking, Gym, Security) with a clear rent breakdown including discount and tax.
Florida House Rent Calculator

A simple C++ console program that calculates the estimated monthly rent for a house in Florida, based on:

House size in square feet

Number of bedrooms

City (Miami, Orlando, Tampa, Jacksonville)

Optional amenities: Pool, Parking, Gym, Security

The program provides a detailed breakdown of rent, including:

Base rent (size x rate)

Extra bedroom cost

Amenities cost

Discount (if applicable)

Tax

Final estimated monthly rent

Features

Interactive input from the user

Supports multiple cities with different rates

Applies a 10% discount for houses with more than 3 bedrooms

Applies 5% tax to the subtotal

Displays a clear rent breakdown for transparency

Example Usage
Enter the house size in square feet:
180
Enter number of bedrooms:
4
Enter city that you want to rent in Florida: (Miami, Jacksonville, Orlando, Tampa)
Miami
Do you want a pool for your house? (y/n):
y
Do you want to have parking for your house? (y/n):
y
Do you want a gym for your house? (y/n):
n
Do you want to have security in your house? (y/n):
n

Rent Breakdown:
- Base rent (size x rate): $630
- Extra bedroom cost: $300
- Amenities cost:
  * Pool: +$200
  * Parking: +$50
- Subtotal: $1180
- Discount (if any): -$118
- Tax 5%: +$53.1
=> Total Cost (final estimated monthly rent): $1115.1


Why This Project : 

This project demonstrates:

Basic C++ programming skills

User interaction with cin and cout

Conditional statements and simple math operations

Structuring code for readability

Beginner-friendly project suitable for GitHub portfolio

Notes :
The program can be easily extended to support multiple houses, more cities, or additional amenities.

The rent breakdown helps users understand exactly how the final cost is calculated.

The program can be easily extended to support multiple houses, more cities, or additional amenities.

The rent breakdown helps users understand exactly how the final cost is calculated.
