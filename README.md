# Password Generator 🔐

A simple yet effective C console application that generates secure, random passwords based on user-defined length.

## 📖 What is a Password Generator?

A **Password Generator** is a software tool that creates random or customized passwords. Using a password generator ensures that the created passwords are strong, complex, and less susceptible to being guessed or cracked, as they contain a mix of different character types including uppercase letters, lowercase letters, numbers, and special symbols.

## 🎯 Project Purpose

The main objective of this project is to create a lightweight and easy-to-use C program that generates random passwords. 

When a user runs the application, it:
1. Prompts the user to specify the desired password length (between 8 and 16 characters).
2. Generates a secure password using a pool of letters (A-Z, a-z), digits (0-9), and special characters (`!@#$^&*`).
3. Displays the dynamically generated password on the console.

## 🚀 How to Run

Follow these steps to compile and run the application on your local machine:

### Prerequisites
- A C compiler such as [GCC](https://gcc.gnu.org/) must be installed on your system.

### Steps
1. **Clone the repository** (or download the source code):
   ```bash
   git clone https://github.com/Kaaner4x/password-generator.git
   ```
2. **Navigate to the project directory**:
   ```bash
   cd password-generator
   ```
3. **Compile the application**:
   ```bash
   gcc main.c -o main
   ```
4. **Run the application**:
   - On Windows:
     ```bash
     .\main.exe
     ```
   - On Linux/macOS:
     ```bash
     ./main
     ```
5. **Usage**: The console will prompt you to enter the desired password length (between 8 and 16). Type the number and press "Enter" to see your newly generated password.

## 📄 License

This project is licensed under the [MIT License](LICENSE). See the `LICENSE` file for details.
