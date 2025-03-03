# Cryptography Ciphers in Python and C++

This repository contains Python and C++ implementations of various classical and modern cryptographic ciphers. These ciphers demonstrate fundamental encryption techniques and serve as a foundation for understanding modern cryptography.

## Implemented Ciphers

- **Caesar Cipher** - A simple substitution cipher that shifts characters by a fixed number of positions in the alphabet.
- **Monoalphabetic Cipher** - A substitution cipher where each letter in the plaintext is replaced with a corresponding letter from a fixed shuffled alphabet.
- **Playfair Cipher** - A digraph substitution cipher that encrypts pairs of letters using a 5x5 matrix.
- **Hill Cipher** - A polygraphic substitution cipher based on matrix multiplication.
- **Vigenère Cipher** - A polyalphabetic substitution cipher that encrypts text using a repeating keyword-based shifting technique.
- **Feistel Cipher** - A symmetric encryption algorithm that splits plaintext into two halves and processes them through multiple rounds using a round function, key, and XOR operations. It forms the basis of many modern block ciphers like DES.
- **DES (Data Encryption Standard)** - A symmetric block cipher that encrypts data using a series of complex permutations and substitutions.

## Prerequisites

Ensure you have the necessary environment set up for running Python and C++ programs.

### **Check Python Installation:**
```bash
python3 --version
```
If Python is not installed, download and install it from [python.org](https://www.python.org/).

### **Check C++ Compiler Installation:**
```bash
g++ --version
```
If a C++ compiler is not installed, download and install [GCC](https://gcc.gnu.org/) or use an IDE like Code::Blocks or Visual Studio Code.

## Running the Programs

Each cipher program is a standalone file in Python or C++. Follow these steps to run them:

### **1. Clone the repository**
```bash
git clone https://github.com/MohammedZaheed/INS
cd your-repo
```

### **2. Compile and run a specific cipher**

#### **Caesar Cipher**
```bash
python3 caesar.py
```

#### **Monoalphabetic Cipher**
```bash
g++ monoalphabetic.cpp -o mono
./mono
```

#### **Playfair Cipher**
```bash
python3 playfair.py
```

#### **Hill Cipher**
```bash
g++ hill.cpp -o hill
./hill
```

#### **Vigenère Cipher**
```bash
g++ vigenere.cpp -o vigenere
./vigenere
```

#### **Feistel Cipher**
```bash
python3 fiestal.py
```

#### **DES (Data Encryption Standard)**
```bash
python3 des.py
```

Follow the on-screen instructions to encrypt or decrypt messages using the respective cipher.

🚀 **Happy Encrypting!**
