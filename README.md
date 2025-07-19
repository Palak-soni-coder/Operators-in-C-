# Name: Palak Soni
# PRN: 24070123069
# ENTC A3


# C++ Assignment: Understanding Operators and Conditional Statements

## Operators in C++

In C++, operators are special symbols used to perform operations on variables and values. They form the backbone of most computations and logic building in any C++ program.

There are several types of operators, and the ones used in this assignment include:

### 1. Arithmetic Operators
These are used for basic mathematical operations like addition, subtraction, multiplication, and division.

- `+` : Addition  
- `-` : Subtraction  
- `*` : Multiplication  
- `/` : Division  

In our program, arithmetic operators are used to calculate the **average marks** of subjects.

### 2. Relational (Comparison) Operators
These operators are used to compare two values. The result of the comparison is either true or false.

- `==` : Equal to  
- `!=` : Not equal to  
- `<`  : Less than  
- `>`  : Greater than  
- `<=` : Less than or equal to  
- `>=` : Greater than or equal to  

For example, we use them to check the range of average marks to assign grades.

### 3. Logical Operators
Logical operators are used to combine multiple conditions.

- `&&` : Logical AND  
- `||` : Logical OR  
- `!`  : Logical NOT  

They are especially useful when we want to check **multiple conditions together**, such as whether a point lies in a particular quadrant.

### 4. Assignment Operator
- `=` : Used to assign a value to a variable.

Example: `average = (m1 + m2 + m3 + m4 + m5) / 5;`

---

## Conditional Statements in C++

Conditional statements allow us to make decisions in a program. They execute different blocks of code depending on whether a condition is true or false. In this assignment, we’ve used:

- `if`  
- `else if`  
- `else`

These help guide the program flow based on inputs, such as checking if a number is positive or negative, or determining the quadrant of a coordinate.

---

## Summary of Programs

### 1. Grade Calculator
This program takes marks of five subjects from the user, calculates the average, and displays the corresponding grade using `if-else` conditions.

**SampleOutput**
Enter marks of subject 1:
56<br>
Enter marks of subject 2:
78<br>
Enter marks of subject 3:
98<br>
Enter marks of subject 4:
65<br>
Enter marks of subject 5:
45<br>
Average: 68.4<br>
The grade is: C<br>
**Key Concepts Used**:
- Arithmetic operations
- Average calculation
- Multiple `if-else` blocks
- Relational and logical operators

### 2. Finding whether a number is positive, negative or zero
This simple program checks whether the entered number is positive, negative, or zero using conditional logic.

**SampleOutput**<br>
Enter a number:
-98<br>
The number is negative<br>


**Key Concepts Used**:
- Basic condition checking
- `if-else` structure
- Use of comparison operators

### 3. Quadrant Locator
This program determines in which quadrant a point lies on the Cartesian plane, based on its x and y coordinates. It also handles edge cases like origin or axes.

**Sample Output**<br>
Value of x is:
-12<br>
Value of y is:
-12<br>
(x,y) is in 3rd Quadrant<br>


**Concepts Used**:
- Compound conditions using `&&`
- Multiple `else if` branches
- Understanding real-world geometry through logic

---

## Conclusion

This assignment helped me get comfortable with using different types of **operators** and **conditional statements** in C++. By writing small programs that mirror real-life logic (like grading, checking number signs, or coordinate analysis), I got hands-on practice in building decision-based code — which is a foundational skill in programming.
