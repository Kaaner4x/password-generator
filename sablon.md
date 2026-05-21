# Luhn Algorithm 💳 

A simple yet effective C# console application that validates credit card numbers using the **Luhn Algorithm** and identifies the card type (VISA, Mastercard, AMEX).

## 📖 What is the Luhn Algorithm?

The **Luhn Algorithm** (also known as the "modulus 10" or "mod 10" algorithm) is a simple checksum formula used to validate a variety of identification numbers, such as credit card numbers and IMEI numbers, to protect against accidental errors. It was created by IBM scientist Hans Peter Luhn.

The algorithm works as follows:
1. Start from the rightmost digit (the check digit) and move left.
2. Double the value of every second digit. If the result of this doubling operation is greater than 9 (e.g., 14), then add the digits of the product (e.g., 1 + 4 = 5) or simply subtract 9 from the product.
3. Take the sum of all the digits.
4. If the total modulo 10 is equal to 0 (if the total ends in zero) then the number is valid.

## 🎯 Project Purpose

The main objective of this project is to implement the **Luhn Algorithm** in C# and verify whether a credit card number inputted by the user is valid.

When a user inputs a number, the application:
1. **Validates** the number according to the Luhn algorithm.
2. If valid, it **identifies the card type** (VISA, Mastercard, American Express, etc.) based on its starting digits and length.

## 🚀 How to Run

Follow these steps to run the application on your local machine:

### Prerequisites
- [.NET SDK](https://dotnet.microsoft.com/download) must be installed on your system.

### Steps
1. **Clone the repository** (or download the source code):
   ```bash
   git clone <repository-url>
   ```
2. **Navigate to the project directory**:
   ```bash
   cd Luhn
   ```
3. **Run the application**:
   ```bash
   dotnet run
   ```
4. **Usage**: The console will prompt you to enter a card number. Type the number without spaces and press "Enter" to see the validation result and card type.

## 📄 License

This project is licensed under the [MIT License](LICENSE). See the `LICENSE` file for details.
