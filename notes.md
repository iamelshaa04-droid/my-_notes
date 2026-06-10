# Object Oriented Programming in C++
## Chap: 1

---

### Q.n.1  
**What is OOP? Explain any four features with examples. Differentiate OOP and POP.**

---

## Definition
Object‑oriented programming (OOP) is about creating **objects** that combine data and behavior.  
It makes programs modular, reusable, and easier to maintain.

---

## Four Features of OOP with Examples

### a. Encapsulation
Encapsulation hides sensitive data and only exposes controlled access.  
**Analogy:** Like a bank account—you can deposit or withdraw, but you can’t touch the balance directly.  

**Code Example:**
```cpp
class BankAccount {
private:
    double balance;
public:
    void deposit(double amt) { balance += amt; }
    double getBalance() { return balance; }
};
```

---

### b. Inheritance
Inheritance lets one class reuse attributes and methods from another.  
**Analogy:** Like a smartphone inheriting features from a basic phone, then adding more.  

**Code Example:**
```cpp
class Phone {
public:
    void call() { cout << "Calling..."; }
};

class SmartPhone : public Phone {
public:
    void browse() { cout << "Browsing Internet"; }
};
```

---

### c. Polymorphism
Polymorphism allows the same function name to behave differently depending on the object.  
**Analogy:** Like the word “run”—a runner runs, a program runs, a car engine runs.  

**Code Example:**
```cpp
class Printer {
public:
    virtual void print() { cout << "Printing document"; }
};

class PhotoPrinter : public Printer {
public:
    void print() override { cout << "Printing photo"; }
};
```

---

### d. Abstraction
Abstraction shows only what’s necessary and hides the details.  
**Analogy:** Like using an ATM—you press buttons without knowing the internal circuits.  

**Code Example:**
```cpp
class Payment {
public:
    virtual void pay(double amt) = 0; // pure virtual function
};

class CreditCard : public Payment {
public:
    void pay(double amt) override { cout << "Paid " << amt << " by Credit Card"; }
};
```

---

## Difference Between OOP and POP

| Aspect            | OOP (Object-Oriented)                        | POP (Procedure-Oriented)              |
|-------------------|-----------------------------------------------|---------------------------------------|
| **Approach**      | Focuses on objects and classes                | Focuses on functions and procedures   |
| **Data Security** | Encapsulation protects data                   | Data is global, less secure           |
| **Reusability**   | Inheritance allows code reuse                 | Limited reusability                   |
| **Scalability**   | Easier to maintain and extend                 | Harder to manage in large projects    |
| **Examples**      | C++, Java, Python                             | C, Pascal                             |
| **Analogy**       | Like a **car**—parts + behavior bundled       | Like a **checklist**—step-by-step only |

---
 


### Q.n.2 
**What is the objective or use of the `new` keyword in OOP?**

---

## Definition
The `new` keyword in C++ is used to **dynamically allocate memory** for objects or variables at runtime.  
It returns a pointer to the allocated memory, allowing flexible memory management.

---

## Objectives / Uses
- Allocate memory on the **heap** instead of stack.  
- Create objects at runtime when size is not known in advance.  
- Avoid memory wastage by allocating only when needed.  
- Works with both **primitive types** and **user‑defined classes**.  
- Must be paired with `delete` to free memory.

---

## Analogy
Think of `new` like **Doctor Strange opening a portal**:  
- You don’t know in advance where you’ll need it.  
- At runtime, he opens a portal (`new`) exactly when required.  
- When the battle is over, he closes it (`delete`).

---

## Code Example (Marvel Reference)
```cpp
#include <iostream>
using namespace std;

class Avenger {
public:
    string name;
    Avenger(string n) { name = n; }
    void assemble() { cout << name << " is ready to fight!" << endl; }
};

int main() {
    // Dynamically allocate memory for an integer
    int* powerLevel = new int(3000);//only iron man's fan knows hehe why is there 3000 
    cout << "Iron Man's power level: " << *powerLevel << endl;

    // Dynamically allocate memory for an object
    Avenger* hero = new Avenger("Spider-Man");
    hero->assemble();

    // Free memory
    delete powerLevel;
    delete hero;

    return 0;
}
```

---

## Conclusion
- `new` → allocates memory dynamically (like opening a portal).  
- `delete` → frees memory (like closing the portal).  
- Together, they give OOP programs **flexibility and efficiency** in memory usage.

---



### Q.n.3  
**Explain the objective and use of Scope Resolution Operator (::) in C++.**

---

## Definition
The **scope resolution operator (::)** in C++ is used to **define or access members** of a class, namespace, or global variable outside their usual scope.  
It helps resolve ambiguity when multiple scopes have variables or functions with the same name.

---

## Objectives / Uses
- Define class functions **outside the class body**.  
- Access **global variables** when a local variable has the same name.  
- Access members of a **namespace**.  
- Improve readability by separating declaration and definition.

---

## Analogy (LOTR Reference)
Think of `::` like **the One Ring’s inscription**:  
- Many rings exist, but the inscription tells you *which* one rules them all.  
- In Middle‑earth, names can repeat (many kings, many warriors), but the “scope” (kingdom, race, fellowship) clarifies exactly who you mean.  
- `::` ensures you’re calling the right “realm” of code.

---

## Code Example (LOTR Reference)
```cpp
#include <iostream>
using namespace std;

int power = 100; // global variable

class Fellowship {
public:
    string member;
    void journey(); // declared inside class
};

// Function defined outside class using scope resolution operator
void Fellowship::journey() {
    cout << member << " joins the quest to Mordor!" << endl;
}

int main() {
    int power = 50; // local variable

    cout << "Local power: " << power << endl;
    cout << "Global power: " << ::power << endl; // using scope resolution

    Fellowship frodo;
    frodo.member = "Frodo Baggins";
    frodo.journey();

    return 0;
}
```

---

## Conclusion
- `::` connects declarations to definitions across scopes.  
- Used for **class functions, global variables, namespaces**.  
- Acts like Middle‑earth’s realms—ensuring the right “ring bearer” (scope) is identified.

---






### Q.n.4 
**Explain Manipulators in C++ with examples.**

---

## Definition
Manipulators allow you to change the formatting of the output. They are used with the << insertion operator in the same way as literal values and variables, and they affect output that follows them.
Except for setw(), the effect of a manipulator remains until another another manipulator changes it.

---

## Objectives / Uses
- Control **spacing, alignment, precision** of output.  
- Format numbers, text, and floating‑point values.  
- Make console output more readable and professional.  
- Common manipulators: `endl`, `setw`, `setprecision`, `fixed`, `showpoint`.

---

## Analogy
Think of manipulators like **tools in a printing press**:  
- The words (data) stay the same, but the press decides spacing, alignment, and style.  
- Manipulators adjust how the output looks, not what the data is.

---

## Code Examples

### 1. `endl` → New line
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello" << endl;
    cout << "World";
    return 0;
}
```

---

### 2. `setw` → Set width
```cpp
#include <iostream>
#include <iomanip> // required for setw
using namespace std;

int main() {
    cout << setw(10) << "Name" << setw(10) << "Age" << endl;
    cout << setw(10) << "Alsha" << setw(10) << 21 << endl;
    return 0;
}
```

---

### 3. `setprecision` & `fixed` → Control decimal places
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.14159265;
    cout << fixed << setprecision(2) << pi << endl; // Output: 3.14
    return 0;
}
```

---

### 4. `showpoint` → Force decimal point
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 50;
    cout << showpoint << x << endl; // Output: 50.0000
    return 0;
}
```

---

## coclusion
- Manipulators format input/output streams.  
- They control **spacing, precision, alignment, and style**.  
- Examples: `endl`, `setw`, `setprecision`, `fixed`, `showpoint`.  
- They make output **clearer and more professional**.

---


## Chap: 3

---

### Q.n.1  
**What are Inline Functions? Write a C++ program demonstrating Function Overloading and Default Arguments.**

---

## Definition
- **Inline Function:** A function defined with the keyword `inline`.  
  - Instead of making a function call, the compiler replaces the function call with the actual function code.  
  - This reduces overhead of function calls, especially for small, frequently used functions.

---

## Objectives / Uses
- Speeds up execution for small functions.  
- Saves time by avoiding function call overhead.  
- Best suited for short functions (like getters, setters, or simple calculations).  
- Not recommended for large functions (increases code size).

---

## Analogy
Think of inline functions like **shortcuts on your desktop**:  
- Instead of opening the full program every time, the shortcut directly takes you to the action.  
- Saves time for small, repetitive tasks.

---

## Program Demonstrating Function Overloading & Default Arguments
```cpp
#include <iostream>
using namespace std;

// Inline function
inline int square(int x) {
    return x * x;
}

// Function Overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function with Default Arguments
void greet(string name = "Guest", string msg = "Welcome!") {
    cout << msg << ", " << name << endl;
}

int main() {
    // Inline function
    cout << "Square of 5: " << square(5) << endl;

    // Function Overloading
    cout << "Sum of integers: " << add(10, 20) << endl;
    cout << "Sum of doubles: " << add(3.5, 2.5) << endl;

    // Default Arguments
    greet();                        // Uses default values
    greet("Alsha");                 // Custom name, default message
    greet("Alsha", "Good Evening"); // Custom name and message

    return 0;
}
```


Output:
```cpp
Square of 5: 25
Sum of integers: 30
Sum of doubles: 6
Welcome!, Guest
Welcome!, Alsha
Good Evening, Alsha
```

---

## Conclusion
- **Inline Function:** Replaces function call with code → faster execution.  
- **Function Overloading:** Same function name, different parameter types.  
- **Default Arguments:** Provide default values to parameters → flexible function calls.

---

