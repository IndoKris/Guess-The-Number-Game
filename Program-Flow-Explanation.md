## 📜 Program Flow Explanation  

This **C-based number guessing game** follows a structured approach, using randomness and user input to create an interactive experience. Here’s how it works step by step:

### 1️⃣ Library Imports  
The program includes three standard C libraries:  
- `#include <stdio.h>` → Provides functions for input (`scanf`) and output (`printf`).  
- `#include <stdlib.h>` → Used for generating random numbers (`rand()`) and memory-related functions.  
- `#include <time.h>` → Provides time-related functions, specifically `time(0)`, to seed the random number generator.  

### 2️⃣ Seeding the Random Number Generator  
- The line `srand(time(0));` initializes the random number generator with the current system time.  
- This ensures a different random number each time the program runs.  

### 3️⃣ Generating a Random Number  
- `int random_number = rand() % 100;` generates a number between **0 and 99**.  

### 4️⃣ User Input and Game Loop  
- The program enters a `do-while` loop, where the user is repeatedly prompted to guess a number.  
- The guessed number is compared to the randomly generated number:  
  - If the guess is **too high**, the program prints **"Lower Number Please!"** in **yellow**.  
  - If the guess is **too low**, it prints **"Higher Number Please!"** in **blue**.  
  - If the guess is **correct**, it prints **"CONGRATULATIONS!! YOU WON!"** in **green background** and exits the loop.  
- Each incorrect guess increments the `number_of_guesses` counter.  

### 5️⃣ Displaying Results  
- Once the user guesses correctly, the program prints the total number of attempts in **stylized blue text with a cyan background**.  

### 6️⃣ Program Terminates  
- The `return 0;` statement signals the program’s successful execution.  

---

## 📚 Use of Imported Libraries  

| Library        | Purpose |
|---------------|---------|
| `#include <stdio.h>` | Used for `printf()` (displaying output) and `scanf()` (reading user input). |
| `#include <stdlib.h>` | Contains `rand()` for generating random numbers and `srand()` for seeding randomness. |
| `#include <time.h>` | Provides `time(0)`, which ensures a unique random seed for different program runs. |

---

## 🛠 Summary of Key Functionalities  

✔️ **Random number generation** (`rand() % 100`)  
✔️ **User input handling** (`scanf("%d", &guessed_number)`)  
✔️ **Loop-based guessing mechanism** (`do-while`)  
✔️ **Dynamic hints for the user**  
✔️ **Use of ANSI escape codes for colorful output**  

This structured flow ensures a smooth, engaging, and replayable gaming experience. 🎯🔥
