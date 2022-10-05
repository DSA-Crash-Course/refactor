# C++ Variables

In programming, a variable is a container (storage area) to hold data.

To indicate the storage area, each variable should be given a unique name (identifier). For example,

```
int age=14;
```

Here, age is a variable of the int data type, and we have assigned an integer value 14 to it.

```
Note : The int data type suggests that the variable can only hold integers. Similarly, we can use the double data type if we have to store decimals and exponentials.
```

We will learn about all the data types in detail in the next tutorial.

The value of a variable can be changed, hence the name variable.

```
int age = 14;   // age is 14
age = 17;       // age is 17
```

## Rules for naming a variable:

```
A variable name can only have alphabets, numbers, and the underscore _.

A variable name cannot begin with a number.

It is a preferred practice to begin variable names with a lowercase character. For example, name is preferable to Name.

A variable name cannot be a keyword. For example, int is a keyword that is used to denote integers.

A variable name can start with an underscore. However, it's not considered a good practice.
```

```
Note: We should try to give meaningful names to variables. For example, first_name is a better variable name than fn.
```

# C++ Literals

Literals are data used for representing fixed values. They can be used directly in the code. For example: 1, 2.5, 'c' etc.

Here, 1, 2.5 and 'c' are literals. Why? You cannot assign different values to these terms.

Here's a list of different literals in C++ programming.

## 1. Integers

An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming:

```
decimal (base 10)
octal (base 8)
hexadecimal (base 16)
```

For example:

```
Decimal: 0, -9, 22 etc
Octal: 021, 077, 033 etc
Hexadecimal: 0x7f, 0x2a, 0x521 etc
```

In C++ programming, octal starts with a 0, and hexadecimal starts with a 0x.

## 2. Floating-point Literals

A floating-point literal is a numeric literal that has either a fractional form or an exponent form. For example:

```
-2.0

0.0000234

-0.22E-5
```

```
Note: E-5 = 10^(-5)
```

## 3. Characters

A character literal is created by enclosing a single character inside single quotation marks. For example: 'a', 'm', 'F', '2', '}' etc.

## 4. Escape Sequences

Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C++ programming. For example, newline (enter), tab, question mark, etc.

In order to use these characters, escape sequences are used.

```

Escape Sequences	Characters

    \b	            Backspace
    \f	            Form feed
    \n	            Newline
    \r	            Return
    \t	            Horizontal tab
    \v	            Vertical tab
    \\	            Backslash
    \'	            Single quotation mark
    \"	            Double quotation mark
    \?	            Question mark
    \0	            Null Character

```

## 5. String Literals
A string literal is a sequence of characters enclosed in double-quote marks. For example:

```
"good"	string constant
""	null string constant
" "	string constant of six white space
"x"	string constant having a single character
"Earth is round\n"	prints string with a newline

```

# C++ Constants

In C++, we can create variables whose value cannot be changed. For that, we use the const keyword. Here's an example:

```
const int LIGHT_SPEED = 299792458;
LIGHT_SPEED = 2500 // Error! LIGHT_SPEED is a constant.
```

Here, we have used the keyword const to declare a constant named LIGHT_SPEED. If we try to change the value of LIGHT_SPEED, we will get an error.

A constant can also be created using the #define preprocessor directive. We will learn about it in detail in the C++ Macros tutorial.

# C++ Data Types

In C++, data types are declarations for variables. This determines the type and size of data associated with variables. For example,

```
int age = 13;
```

Here, age is a variable of type int. Meaning, the variable can only store integers of either 2 or 4 bytes.

## C++ Fundamental Data Types

The table below shows the fundamental data types, their meaning, and their sizes (in bytes):

```
Data Type	    Meaning	        Size (in Bytes)
    int	        Integer	            2 or 4
    float	    Floating-point	        4
    double	    Double Floating-point	8
    char	    Character	            1
    wchar_t	    Wide Character	        2
    bool	    Boolean	                1
    void	    Empty	                0
```

## Derived Data Types
Data types that are derived from fundamental data types are derived types. For example: arrays, pointers, function types, structures, etc.


# C++ Basic Input/Output
In this tutorial, we will learn to use the cin object to take input from the user, and the cout object to display output to the user with the help of examples.

## C++ Output
In C++, cout sends formatted output to standard output devices, such as the screen. We use the cout object along with the << operator for displaying output.

```
Example 1: String Output
#include <iostream>
using namespace std;

int main() {
    // prints the string enclosed in double quotes
    cout << "This is C++ Programming";
    return 0;
}
```

Run Code

### Output:

```
This is C++ Programming
How does this program work?
```

We first include the iostream header file that allows us to display output.

The cout object is defined inside the std namespace. To use the std namespace, we used the using namespace std; statement.

Every C++ program starts with the main() function. The code execution begins from the start of the main() function.

cout is an object that prints the string inside quotation marks " ". It is followed by the << operator.

return 0; is the "exit status" of the main() function. The program ends with this statement, however, this statement is not mandatory.

Note: If we don't include the using namespace std; statement, we need to use std::cout instead of cout.

This is the preferred method as using the std namespace can create potential problems.

However, we have used the std namespace in our tutorials in order to make the codes more readable.

```
#include <iostream>

int main() {
    // prints the string enclosed in double quotes
    std::cout << "This is C++ Programming";
    return 0;
}
Run Code
Example 2: Numbers and Characters Output
To print the numbers and character variables, we use the same cout object but without using quotation marks.

#include <iostream>
using namespace std;

int main() {
    int num1 = 70;
    double num2 = 256.783;
    char ch = 'A';

    cout << num1 << endl;    // print integer
    cout << num2 << endl;    // print double
    cout << "character: " << ch << endl;    // print char
    return 0;
}
```

Run Code

### Output:

```
70
256.783
character: A
```
```
Notes:

The endl manipulator is used to insert a new line. That's why each output is displayed in a new line.

The << operator can be used more than once if we want to print different variables, strings and so on in a single statement. 

For example:
cout << "character: " << ch << endl;
``` 

## C++ Input

In C++, cin takes formatted input from standard input devices such as the keyboard. We use the cin object along with the >> operator for taking input.


```
Example 3: Integer Input/Output
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;   // Taking input
    cout << "The number is: " << num;
    return 0;
}
```

Run Code

## Output

```
Enter an integer: 70
The number is: 70

In the program, we used

cin >> num;
to take input from the user. The input is stored in the variable num. We use the >> operator with cin to take input.

Note: If we don't include the using namespace std; statement, we need to use std::cin instead of cin.
```


# C++ Taking Multiple Inputs

```
#include <iostream>
using namespace std;

int main() {
    char a;
    int num;

    cout << "Enter a character and an integer: ";
    cin >> a >> num;

    cout << "Character: " << a << endl;
    cout << "Number: " << num;

    return 0;
}
```


Run Code

## Output

```
Enter a character and an integer: F
23
Character: F
Number: 23
```
