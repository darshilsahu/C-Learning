# 🎯 Number Guessing Game (C)

A simple console-based Number Guessing Game written in C.

The computer generates a random number between **1 and 100**, and the player has **10 attempts** to guess it correctly. After each incorrect guess, the game provides a hint indicating whether the secret number is higher or lower.

---

## ✨ Features

- 🎲 Random number generation
- 🔢 Number range: 1 to 100
- 🔟 Maximum of 10 attempts
- ⬆️ Hint if the secret number is higher
- ⬇️ Hint if the secret number is lower
- 🏆 Displays the number of guesses after winning
- ❌ Shows the correct number if the player loses

---

## 🛠️ Concepts Used

- Variables
- Input and Output (`printf`, `scanf`)
- Conditional Statements (`if`, `else if`, `else`)
- `for` Loops
- Random Number Generation (`rand`, `srand`)
- Header Files (`stdio.h`, `stdlib.h`, `time.h`)

---

## 🚀 How to Run

1. Compile the program:

```bash
gcc NumberGuessingGame.c -o game
```

2. Run the executable:

```bash
./game
```

---

## 📷 Sample Output

```
WELCOME TO NUMBER GUESSING GAME
THE NUMBER IS BETWEEN 1 TO 100
YOU HAVE 10 TRIES

Attempt 1 of 10
Enter the Number: 50
THE NUMBER IS HIGHER

Attempt 2 of 10
Enter the Number: 75
THE NUMBER IS LOWER

Attempt 3 of 10
Enter the Number: 63
Congratulations! YOU WON
Number of guesses: 3
```

---

## 📚 Future Improvements

- Difficulty Levels (Easy, Medium, Hard)
- Play Again Option
- Input Validation
- High Score System
- Menu Interface
- Multiple Game Modes

---

## 👨‍💻 Author

**Darshil Sahu**