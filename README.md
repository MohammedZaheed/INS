# Cryptography Ciphers in Python and C++

This repository contains Python and C++ implementations of various classical and modern cryptographic ciphers. These ciphers demonstrate fundamental encryption techniques and serve as a foundation for understanding modern cryptography.

# Implemented Ciphers

## **1. Caesar Cipher**
The Caesar cipher is a simple substitution cipher that shifts characters by a fixed number of positions in the alphabet. For example, with a shift of 3, 'A' becomes 'D', 'B' becomes 'E', and so on. The decryption process reverses this shift. While easy to implement, it is highly vulnerable to frequency analysis due to its predictable shifting pattern.

## **2. Monoalphabetic Cipher**
A monoalphabetic cipher replaces each letter in the plaintext with a corresponding letter from a fixed, shuffled alphabet. Unlike the Caesar cipher, where the shift is uniform, the mapping in a monoalphabetic cipher is arbitrary, making it slightly more secure. However, it remains vulnerable to frequency analysis, as common letters in the plaintext still appear frequently in the ciphertext.

## **3. Playfair Cipher**
The Playfair cipher encrypts pairs of letters (digraphs) using a 5x5 matrix constructed from a keyword. If a pair contains the same letter, a filler letter (such as 'X') is inserted. The encryption follows these rules:
- If the letters appear in the same row of the matrix, they are replaced by the letters to their right (wrapping around if necessary).
- If the letters appear in the same column, they are replaced by the letters below them.
- Otherwise, they are replaced by the letters at the opposite corners of the rectangle they form in the matrix.
The Playfair cipher provides better security than simple substitution ciphers but is still susceptible to frequency analysis if enough ciphertext is available.

## **4. Hill Cipher**
The Hill cipher is a polygraphic substitution cipher that encrypts blocks of letters using matrix multiplication. A key matrix is used to transform a block of plaintext letters into ciphertext. The decryption process involves computing the inverse of the key matrix and applying it to the ciphertext blocks. This cipher is resistant to simple frequency analysis but can be broken if an attacker gains knowledge of the key matrix or sufficient plaintext-ciphertext pairs.

## **5. Vigenère Cipher**
The Vigenère cipher is a polyalphabetic substitution cipher that uses a repeating keyword to determine the shift for each letter in the plaintext. The encryption process involves:
- Aligning the keyword with the plaintext.
- Shifting each letter of the plaintext based on the corresponding letter in the keyword.
- Wrapping around if the keyword is shorter than the plaintext.
Decryption is performed by shifting in the opposite direction using the same keyword. While the Vigenère cipher overcomes some weaknesses of the Caesar cipher, it can still be broken using frequency analysis techniques like Kasiski examination.

## **6. Feistel Cipher**
A Feistel cipher is a symmetric encryption algorithm that splits the plaintext into two halves and processes them through multiple rounds. Each round consists of:
- Applying a round function to one half of the data using a subkey.
- XOR-ing the result with the other half.
- Swapping the halves before the next round.
This structure allows for easy encryption and decryption by reversing the order of subkeys. Many modern ciphers, including DES, are based on the Feistel structure.

## **7. DES (Data Encryption Standard)**
DES is a symmetric block cipher that encrypts data in 64-bit blocks using a 56-bit key. It operates through 16 rounds of Feistel transformations, each involving substitution and permutation functions. Key expansion is used to generate a different subkey for each round. DES was widely used for decades but is now considered insecure due to its relatively short key length, making it vulnerable to brute-force attacks.

## **8. RSA (Rivest-Shamir-Adleman)**
RSA is an asymmetric encryption algorithm that relies on the mathematical properties of prime factorization. It involves three key steps:
- **Key Generation:** Two large prime numbers are selected, and their product forms the modulus. A public key exponent is chosen, and a private key exponent is computed based on the totient function.
- **Encryption:** The plaintext message is raised to the power of the public key exponent and taken modulo the product of the primes.
- **Decryption:** The ciphertext is raised to the power of the private key exponent and taken modulo the product of the primes.
RSA provides strong security for secure communications, digital signatures, and key exchange protocols. Its security relies on the difficulty of factoring large numbers, making it resistant to brute-force attacks.

## **9. Diffie-Hellman**
The Diffie-Hellman key exchange protocol allows two parties to securely establish a shared secret key over an insecure channel. It is based on the difficulty of computing discrete logarithms in a finite field.

The process involves:
- Selecting a large prime number and a primitive root modulo that prime.
- Both parties choose private keys and compute their corresponding public keys.
- They exchange public keys and compute the shared secret by raising the received public key to the power of their private key modulo the prime.

The resulting shared key is identical for both parties and can be used for symmetric encryption. While the original Diffie-Hellman is vulnerable to man-in-the-middle attacks if not authenticated, it forms the basis for many secure communication protocols.

## **10. Elliptic Curve Cryptography (ECC)**
Elliptic Curve Cryptography (ECC) is an asymmetric encryption algorithm based on the algebraic structure of elliptic curves over finite fields. Each user generates a private key (a random number) and computes their public key by multiplying this private key with a predefined point on the elliptic curve. The security of ECC lies in the difficulty of the Elliptic Curve Discrete Logarithm Problem (ECDLP), making it secure with smaller key sizes compared to RSA.

In ECC-based key exchange:
- Both sender and receiver generate their private and public keys.
- An encryption key is derived using a combination of their private key and the other party's public key.
- This shared secret key can then be used for secure communication.

ECC is widely used in modern cryptography for securing communications due to its efficiency and strong security guarantees.



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

#### **RSA**
```bash
python3 rsa.py
```

#### **Diffie Hellman**
```bash
python3 diffiehellman.py
```

#### **ECC**
```bash
python3 ecc.py
```

Follow the on-screen instructions to encrypt or decrypt messages using the respective cipher.

🚀 **Happy Encrypting!**
