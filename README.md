![BankManagement](https://socialify.git.ci/mafallahi/BankManagement/image?description=1&font=Raleway&language=1&name=1&owner=1&pattern=Circuit%20Board&theme=Light)

# Bank Management System (C++)

A clean and refactored console-based Bank Management System written in modern C++.  
This version improves code safety, project structure, and maintainability.

## ✨  Features

- Create account
- Show account information
- Deposit money
- Withdraw money
- Input validation
- Safer account operations
- Cleaner menu navigation without `goto`

## 🔧 Improvements in This Refactored Version

- Removed excessive `goto` usage
- Added proper validation for deposit and withdraw operations
- Prevented negative balances
- Improved `Account` class structure
- Added const-correct getters
- Better input handling and stream recovery
- Cleaner and more maintainable code structure
- Prepared the project for future multi-account support

## 🚀 Building the Project

Open the project with Visual Studio or any C++ IDE, or compile manually:
```bash
g++ src/main.cpp include/*.cpp -I include -o BankApp
```
Then run:
```
./BankApp
```
## 📁 Project Structure

```
📦 BankManagement
├── 📁 src
│   └── main.cpp              // Entry point and menu handler
│
├── 📁 include
│   ├── account.h             // Account model (header)
│   ├── account.cpp           // Account model implementation
│   ├── ui.h                  // Console UI (header)
│   ├── ui.cpp                // Console UI implementation
│   ├── clearScreen.h         // Screen clearing utility (header)
│   └── clearScreen.cpp       // Screen clearing utility implementation
│
├── .gitignore                // Ignored build + temp files
└── README.md                 // Project documentation

```

