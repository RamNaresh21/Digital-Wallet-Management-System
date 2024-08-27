# Digital Wallet Management System

## Problem Description

The **Digital Wallet Management System** is a software platform that allows users to manage their financial transactions digitally. The system enables transferring and receiving funds, viewing account balances, and ensures secure, fast, and convenient transactions, streamlining financial management for users.

## Requirements

- **List of Users**: A list of users with their initial balances.
- **List of Transactions**: A list of transactions including fund transfers between users.

### Results

- For each transaction, the system should provide a confirmation of success or failure.
- After completing all transactions, users should be sorted and displayed based on their leftover balance.

## Input Format

1. The first line contains an integer `N`, the number of users.
2. The next `N` lines each contain two integers: `userID` and `balance`, where `userID` is the user's identifier, and `balance` is the user's current balance.
3. The next line contains an integer `T`, the number of transactions.
4. The next `T` lines each contain three integers: `from_userID`, `to_userID`, `amount`, where `from_userID` and `to_userID` are the identifiers of the users involved in the transaction, and `amount` is the amount transferred.

## Constraints

 1 ≤ N ≤ 10<sup>2</sup>

1 ≤ userID ≤ 10<sup>2</sup>

0 ≤ balance ≤ 10<sup>4</sup>

1 ≤ T ≤ 10<sup>3</sup>

0 ≤ amount ≤ 10<sup>4</sup>


## Output Format

For each transaction:

- Print `"Success"` if the transaction was completed successfully.
- Print `"Failure"` if the transaction failed.

After processing all transactions, print all users sorted by their leftover balance in ascending order. If two users have the same balance, they should be listed in order of their `userID`.

## Sample Input

4

1 9000

2 3000 

3 7500 

4 2000 

5

1 2 1000 

3 4 3000 

2 3 500 

4 1 7500 

1 4 1500


## Sample Output

2 3500

3 5000

1 6500

4 6500


## Explanation

- **Transaction 1**: User 1 sends 1000 to User 2. Success.
- **Transaction 2**: User 3 sends 3000 to User 4. Success.
- **Transaction 3**: User 2 sends 500 to User 3. Success.
- **Transaction 4**: User 4 attempts to send 7500 to User 1. Failure (insufficient balance).
- **Transaction 5**: User 1 sends 1500 to User 4. Success.

After all transactions are processed, the users are sorted based on their remaining balance.

## How to Run

1. Input the number of users and their initial balances.
2. Input the number of transactions and the details of each transaction.
3. The program will output the result of each transaction and then display the users sorted by their final balances.

---

This `README.md` file provides a comprehensive guide to understanding the Digital Wallet Management System project. It outlines the problem description, input format, constraints, output format, and a sample input/output to guide users on how to use the system.
