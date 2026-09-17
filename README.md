# Geometric Shapes Area Calculator (C++)

A C++ console application demonstrating Object-Oriented Programming (OOP) principles, including dynamic polymorphism, inheritance, and file I/O operations to calculate areas of geometric shapes and log results.

## Features

* **Polymorphic Architecture**: Base abstract class `square` extended by derived shape classes (`circle`, `rectangle`, `triangle`, `trapeze`).
* **Input Validation**: User input validation guaranteeing non-negative dimension parameters.
* **File Persistence**: Exports calculated shape areas to `squares.txt` and allows reading back logged entries.
* **Interactive CLI**: Menu-driven interface for calculating properties and saving state.

## Class Architecture

| Class | Base Class | Description |
| :--- | :--- | :--- |
| `square` | — | Abstract interface declaring pure virtual `calcsquare()`. |
| `rectangle` | `square` | Computes rectangle area ($width \times height$). |
| `circle` | `square` | Computes circle area ($\pi \times r^2$). |
| `trapeze` | `square` | Computes trapezoid area ($\frac{a + b}{2} \cdot h$). |
| `triangle` | `square` | Computes right-angled triangle area ($\frac{a \cdot b}{2}$). |

## Project Structure

* `square.h` — Base abstract class interface.
* `rectangle.h` / `rectangle.cpp` — Rectangle shape declaration and implementation.
* `circle.h` — Circle shape declaration and implementation.
* `trapeze.h` / `trapeze.cpp` — Trapezoid shape declaration and implementation.
* `triangle.h` / `triangle.cpp` — Triangle shape declaration and implementation.
* `main.h` — Helper utilities for terminal menus, file parsing (`readfile`), and writing (`writefile`).
* `main.cpp` — Main program entry point managing polymorphic shape instances.

## Building & Running

### Compilation
Compile all C++ source files using `g++`:

```bash
g++ -O2 main.cpp rectangle.cpp trapeze.cpp triangle.cpp -o shape_calculator
```

### Execution
Execute the generated binary:

```bash
./shape_calculator
```

## Menu Options
1. Calculate square of rectangle: Inputs width and height to instantiate a rectangle.
2. Calculate square of circle: Inputs radius to instantiate a circle.
3. Calculate square of trapeze: Inputs top side, base side, and height.
4. Calculate square of triangle: Inputs two leg dimensions for a right triangle.
5. Save results to the file: Writes computed results into squares.txt.
6. Read the file: Displays saved calculations from squares.txt.
7. Exit: Terminate program execution.
