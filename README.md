# 🚀 C++ Programming & Object-Oriented Design Repository

Welcome to the **C++ Programming Repository**! This repository is a comprehensive collection of **33 C++ source programs** covering foundational language constructs, Object-Oriented Programming (OOP) paradigms, error handling, algorithm design, and real-world system modeling.

---

## 📑 Table of Contents

- [Overview](#-overview)
- [Repository Structure](#-repository-structure)
- [Program Index by Category](#-program-index-by-category)
  - [1. C++ Fundamentals & Basic Syntax](#1-c-fundamentals--basic-syntax)
  - [2. Exception Handling](#2-exception-handling)
  - [3. Classes, Objects & Methods](#3-classes-objects--methods)
  - [4. Constructors & Destructors](#4-constructors--destructors)
  - [5. Friend Functions & Friend Classes](#5-friend-functions--friend-classes)
  - [6. Inheritance & Runtime Polymorphism](#6-inheritance--runtime-polymorphism)
  - [7. Sorting Algorithms](#7-sorting-algorithms)
  - [8. Practical OOP Applications](#8-practical-oop-applications)
- [Core Concepts & Highlights](#-core-concepts--highlights)
- [Compilation & Execution Guide](#-compilation--execution-guide)
- [Git & Repository Best Practices](#-git--repository-best-practices)

---

## 🌟 Overview

This repository demonstrates the gradual evolution from procedural C++ programming to advanced Object-Oriented design patterns:

- **Procedural Basics**: Standard I/O, variables, arithmetic, scope resolution (`::`).
- **Data Encapsulation**: Private and public access specifiers, inline vs. out-of-line class member definitions.
- **Object Lifecycle**: Default constructors, parameterized constructors, constructor overloading, and destructors (`~`).
- **Controlled Access**: Friend functions and friend classes for secure private member sharing.
- **Inheritance & Hierarchy**: Single, multilevel, and protected inheritance.
- **Dynamic Polymorphism**: Virtual functions, method overriding, and base class pointers for runtime binding.
- **Robust Algorithms**: Classical sorting implementations (Bubble Sort, Selection Sort).
- **Interactive Projects**: Menu-driven applications managing arrays of objects.

---

## 📂 Repository Structure

```text
c++/
│
├── 📜 Fundamentals & Language Basics
│   ├── hello.cpp                  # "Hello World" starter
│   ├── sum.cpp                    # Basic input/output & addition
│   ├── scope.cpp                  # Scope resolution operator (::)
│   └── evenodd.cpp                # Exception handling (try, throw, catch)
│
├── 🏛️ Classes, Objects & Encapsulation
│   ├── sq.cpp                     # Member functions inside class
│   ├── sqout.cpp                  # Member functions outside class
│   ├── eveod.cpp                  # Even/odd check via class methods
│   ├── st.cpp                     # Student profile management
│   ├── inside class.cpp           # Student record with inline definitions
│   └── structure.cpp              # Geometry area calculation
│
├── ⚙️ Constructors & Destructors
│   ├── constructor.cpp            # Parameterized constructor introduction
│   ├── emp.cpp                    # Default constructor & interactive input
│   ├── csum.cpp                   # Parameterized constructor for rectangle
│   ├── practice.cpp               # Multi-field parameterized constructor (Book)
│   ├── overload.cpp               # Constructor overloading (0, 1, and 2 arguments)
│   ├── copy.cpp                   # Constructor and destructor lifecycle
│   └── bankD.cpp                  # Bank account simulation with destructor
│
├── 🤝 Friend Functions & Friend Classes
│   ├── friend.cpp                 # Friend function accessing private rectangle
│   ├── rectangle.cpp              # Area calculation using friend function
│   ├── books.cpp                  # Friend function displaying book details
│   ├── stu.cpp                    # Friend function inspecting student data
│   ├── com.cpp                    # Adding complex numbers via friend function
│   ├── complex.cpp                # Interactive complex number addition
│   └── frienclas.cpp              # Friend class accessing another class's private data
│
├── 🧬 Inheritance & Polymorphism
│   ├── inherit.cpp                # Base pointer & virtual function
│   ├── methodoverriding.cpp       # Runtime polymorphism (Shape -> Triangle/Rectangle)
│   ├── organization.cpp           # Multilevel inheritance hierarchy
│   └── time.cpp                   # Time addition with rollover logic
│
├── 🔄 Algorithms & Data Structures
│   ├── bubble.cpp                 # Bubble sort implementation
│   ├── sort.cpp                   # Bubble sort variant
│   ├── selsort.cpp                # Selection sort implementation
│   └── ar.cpp                     # Finding largest and smallest elements in array
│
└── 📊 Capstone Project
    └── weatherconst.cpp           # Menu-driven monthly weather analytics (Array of Objects)
```

---

## 📚 Program Index by Category

### 1. C++ Fundamentals & Basic Syntax

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [hello.cpp](.vscode/c++/hello.cpp) | First Program | Demonstrates header inclusion (`<iostream>`), standard namespace (`using namespace std`), and standard console output (`cout`). |
| [sum.cpp](.vscode/c++/sum.cpp) | Standard Input & Arithmetic | Prompts user for two integer inputs via `cin`, computes their sum, and prints the result. |
| [scope.cpp](.vscode/c++/scope.cpp) | Scope Resolution Operator | Illustrates local vs. global variable shadowing and resolves the global variable using `::a`. |

---

### 2. Exception Handling

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [evenodd.cpp](.vscode/c++/evenodd.cpp) | `try`, `throw`, `catch` | Demonstrates defensive programming and runtime exception handling by trapping division by zero and catching string exception messages. |

---

### 3. Classes, Objects & Methods

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [sq.cpp](.vscode/c++/sq.cpp) | Inline Member Functions | Implements a `square` class with member functions defined directly inside the class definition. |
| [sqout.cpp](.vscode/c++/sqout.cpp) | Out-of-Class Member Functions | Implements the `square` class declaring member prototypes inside and defining them externally with `square::`. |
| [eveod.cpp](.vscode/c++/eveod.cpp) | Member Function Resolution | Uses a class `number` to evaluate whether an input integer is even or odd using external method definitions. |
| [st.cpp](.vscode/c++/st.cpp) | Student Entity | Models a student entity with roll number, name, and marks with `getdata()` and `showdata()`. |
| [inside class.cpp](.vscode/c++/inside%20class.cpp) | Class Structure | Encapsulates student information inside a class with private data members and public methods. |
| [structure.cpp](.vscode/c++/structure.cpp) | Class Blueprint | Models geometric area computation with getters and computation routines. |

---

### 4. Constructors & Destructors

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [constructor.cpp](.vscode/c++/constructor.cpp) | Constructor Basics | Introduces automatic initialization of an object upon creation using a single-parameter constructor for roll number. |
| [emp.cpp](.vscode/c++/emp.cpp) | Default Constructor | Uses a parameterless constructor to interactively accept employee credentials (id, name, salary) at instantiation. |
| [csum.cpp](.vscode/c++/csum.cpp) | Parameterized Constructor | Instantiates a `Rect` object with explicit length and breadth arguments and calculates area. |
| [practice.cpp](.vscode/c++/practice.cpp) | Multi-field Constructor | Initializes a `book` object with author name, title, and price using parameterized constructor arguments. |
| [overload.cpp](.vscode/c++/overload.cpp) | Constructor Overloading | Implements multiple constructors within `rect`: default (0, 0), two-parameter (length, breadth), and single-parameter (square). |
| [copy.cpp](.vscode/c++/copy.cpp) | Destructor Invocation | Explores the object lifecycle, demonstrating constructor invocation on creation and destructor `~stu()` upon scope exit. |
| [bankD.cpp](.vscode/c++/bankD.cpp) | Account Lifecycle | Models a `BankACC` class with account initialization via constructor and automatic session termination through its destructor `~BankACC()`. |

---

### 5. Friend Functions & Friend Classes

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [friend.cpp](.vscode/c++/friend.cpp) | Basic Friend Function | Grants non-member function `findnum(calculate)` access to private dimensions to compute area. |
| [rectangle.cpp](.vscode/c++/rectangle.cpp) | Friend Access Specifier | Employs `friend void findArea(rectangle)` to compute rectangle area using encapsulated private fields. |
| [books.cpp](.vscode/c++/books.cpp) | Object Passing to Friend | Passes a `BOOKS` instance into `show(BOOKS)` to display private author and page count data. |
| [stu.cpp](.vscode/c++/stu.cpp) | Record Inspection | Uses friend function `finddata(student)` to display private student marks and roll details. |
| [com.cpp](.vscode/c++/com.cpp) | Complex Number Arithmetic | Uses `friend void addcomplex(Complex c1, Complex c2)` to sum real and imaginary components. |
| [complex.cpp](.vscode/c++/complex.cpp) | Interactive Complex Sum | Takes dynamic user input for two complex numbers and adds them through an external friend function `show(complex, complex)`. |
| [frienclas.cpp](.vscode/c++/frienclas.cpp) | Friend Class | Demonstrates class-level friendship where `class rectangle` is declared a friend of `class square`, permitting `rectangle::Findarea` direct access to `square::len`. |

---

### 6. Inheritance & Runtime Polymorphism

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [inherit.cpp](.vscode/c++/inherit.cpp) | Virtual Function & Upcasting | Demonstrates dynamic dispatch by pointing a `Base*` pointer to a `Derived` instance, triggering `Derived::show()` via the `virtual` keyword. |
| [methodoverriding.cpp](.vscode/c++/methodoverriding.cpp) | Abstract Modeling & Polymorphism | Uses a polymorphic base class `Shape` with virtual `computeArea()` overridden by derived classes `Triangle` and `Rectangle`. |
| [organization.cpp](.vscode/c++/organization.cpp) | Multilevel Inheritance | Implements a 3-tier hierarchy: `organisation` (base: id, salary) ➔ `empl` (intermediate: name) ➔ `Emp` (derived: display summary). |
| [time.cpp](.vscode/c++/time.cpp) | Protected Inheritance | Inherits protected members `hrs` and `mins` in derived class `addtime` with automatic 60-minute overflow normalization. |

---

### 7. Sorting Algorithms

| File | Algorithm | Time Complexity (Avg / Worst) | Description |
| :--- | :--- | :--- | :--- |
| [bubble.cpp](.vscode/c++/bubble.cpp) | Bubble Sort | $O(n^2) / O(n^2)$ | Accepts dynamic array size $n$ and elements, sorting via adjacent comparison and swap passes. |
| [sort.cpp](.vscode/c++/sort.cpp) | Bubble Sort Variant | $O(n^2) / O(n^2)$ | Implements bubble sorting across an array of up to 100 elements. |
| [selsort.cpp](.vscode/c++/selsort.cpp) | Selection Sort | $O(n^2) / O(n^2)$ | Modular implementation of selection sort via `selection(int arr[], int n)` demonstrating in-place sorting. |
| [ar.cpp](.vscode/c++/ar.cpp) | Min/Max Search | $O(n) / O(n)$ | Encapsulates an array in class `largesmall` to find the largest and smallest numbers in a single linear pass. |

---

### 8. Practical OOP Applications

| File | Primary Focus | Description |
| :--- | :--- | :--- |
| [weatherconst.cpp](.vscode/c++/weatherconst.cpp) | Array of Objects & Menu UI | Comprehensive CLI application managing 31 daily `weather` records with constructors, input validation, and statistical averages (high/low temperature, rain, snow). |

---

## 💡 Core Concepts & Highlights

### 🔹 Scope Resolution Operator (`::`)
Used to distinguish between global identifiers and locally shadowed variables, as well as to define class member methods externally:
```cpp
int a = 10; // Global

int main() {
    int a = 100; // Local
    cout << a;    // Prints 100
    cout << ::a;  // Prints 10 (global resolved)
}
```

### 🔹 Runtime Polymorphism & Virtual Functions
Binding a base class pointer to a derived class instance enables late (runtime) binding:
```cpp
class Shape {
public:
    virtual void computeArea() { /* fallback */ }
};

class Triangle : public Shape {
public:
    void computeArea() override {
        cout << "Triangle area: " << 0.5 * x * y << endl;
    }
};

Shape* ptr = new Triangle();
ptr->computeArea(); // Dynamically invokes Triangle::computeArea()
```

### 🔹 Friend Functions & Friend Classes
Enables specific non-member functions or collaborating classes to bypass `private` encapsulation when tight coupling is structurally justified:
```cpp
class square {
private:
    int len;
    friend class rectangle; // Grants rectangle access to 'len'
};

class rectangle {
public:
    void Findarea(square s) {
        int area = s.len * brea; // Direct access to private len
    }
};
```

---

## 🛠️ Compilation & Execution Guide

### Prerequisites
- **Compiler**: GCC / MinGW (`g++`) supporting C++11 or higher.
- **Terminal**: PowerShell, Command Prompt, or Bash.

### Compiling a Single Program
Run the following command in your terminal from this directory:

```powershell
# Compile any program (e.g., weatherconst.cpp)
g++ -std=c++17 -Wall weatherconst.cpp -o weatherconst.exe

# Execute the compiled binary
.\weatherconst.exe
```

For Linux / macOS:
```bash
g++ -std=c++17 -Wall weatherconst.cpp -o weatherconst
./weatherconst
```

### Quick Build Examples

```powershell
# Sorting algorithms
g++ bubble.cpp -o bubble.exe && .\bubble.exe
g++ selsort.cpp -o selsort.exe && .\selsort.exe

# Polymorphism and OOP
g++ methodoverriding.cpp -o methodoverriding.exe && .\methodoverriding.exe
g++ bankD.cpp -o bankD.exe && .\bankD.exe
```

---

## 📦 Git & Repository Best Practices

### 1. Ignore Compiled Binaries (`.gitignore`)
Compiled executables (`*.exe`, `*.o`, `*.out`) should not be committed to Git. A [`.gitignore`](.vscode/c++/.gitignore) file has been included in this folder:
```gitignore
*.exe
*.o
*.obj
*.out
```

### 2. Recommended Git Workflow
To stage and commit clean source code updates:
```powershell
# Check current repository status
git status

# Stage source code files and documentation
git add *.cpp README.md .gitignore

# Commit changes
git commit -m "feat: document all 33 C++ programs in README with detailed categories"

# Push to your remote repository
git push origin main
```

---

## 👤 Author & Acknowledgments

- **Repository**: [riyacode](file:///c:/Users/riyak/OneDrive/Desktop/riyacode/.vscode/c++)
- **Language**: C++ (C++11 / C++17)
- **Environment**: Visual Studio Code / MinGW GCC
