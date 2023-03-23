# Notes about C Language

## Hello world in C

```c
#include <stdio.h>

int main()
{
    printf("Hello World!");
}
```

## Escape sequences

- `\'` Single Quote
- `\"` Double Quote
- `\\` Backslash
- `\0` Null
- `\a` Bell
- `\b` Backspace
- `\f` Form feed
- `\n` Newline
- `\r` Carriage return
- `\t` Horizontal Tab
- `\v` Vertical tab

## Comments

- Generally `Comments` are used to provide the description or documentation about the code you have written.
- Through commenting you can mention important note, briefly explain behaviour of the code, and other useful details.
- Comments help the developer understand the logic/algorithm of the code if we revisits it after a long time.

```c
/* This is a comment*/
// This is another comment
```

## Data types
- Data types is used for declaring the type of a variable
- In C programming, data types determine the type and size of data associated with variables
- Before storing any value in a variable, first should decide its type

## Storage sizes and value ranges
| Data type | Memory size (bytes) | Range |
|:---------:|:-------------------:|:-----:|
| signed char | 1 | -128 to 127 |
| unsigned char | 1 | 0 to 255 |
| short int | 2 | -32,768 to 32,767 |
| unsigned short int | 2 | 0 to 65,535 |
| int | 2 or 4 | -2,147,483,648 to 2,147,483,647 |
| unsigned int | 4 | 0 to 4,294,967,295|
| long | 4 or 8 | -9223372036854775808 to 9223372036854775807 |
| unsigned long | 8 | 0 to 18446744073709551615 |
| long long int | 8 | -9223372036854775808 to 9223372036854775807 |
| unsigned long long int | 8 | 0 to 18446744073709551615 |

**_NOTE:_** You have to reference between each compiler to see memory size from each data type

### Integer data type: char
- This is an integer data type to store a single character (ASCII code) value or 1 byte of signed integer value
- char happens to be the smallest integer data type of 1 byte

```c
usigned char cityTemperature;
cityTemperature = 25;
```

### Integer data type: short int and unsigned short int
- Variable of type short int is used to store 2 bytes of signed data
- Variable of type unsigned short int is used to store 2 bytes of usigned data.
- You can just mention short (for signed) or unsigned short. 'int' will be assumed.
- short type variable always consumes 2 bytes of memory irrespective of compilers.

### Integer data type: int and unsigned int
- int is an integer data type to store signed integer data
- An int type variable consumes 2 bytes of memory or 4 bytes of memory
- Size of an int is decided by the compiler being used to generate code for your target hardware, you need to consult the compiler user manual to understand the size of an int. It is typically 2 or 4 bytes.
- unsigned int is an integer data type to store unsigned integer data.

### Integer data type: long and unsigned long
- long is an integer data type to store signed integer data.
- A long type variable consumes 4 bytes of memory or 8 bytes of memory.
- Size of long type is decided by the compiler being used to generate code for your target hardware, you need to consult the compiler user manual to understand the size of long. It is typicallly 4 or 8 bytes.
- unsigned long is an integer data type to store unsigned integer data.

## sizeof operator
- `sizeof` operator in C programming language is used to find out the size of a variable.
- The output of the `sizeof` operator may be different on different machines because it is compiler dependent.

## Variables
- Variables are identifiers for your data.
- Data are usually stored in computer memory.
- A variable acts as a label to a memory location where the data is stored.
- Variable names are not stored inside the computer memory, and the compiler replaces them with memory location addresses during data manipulation.

## Variable definition vs. declaration
- A variable is defined when the compiler generates instructions to allocate the storage for the variable.
- A variable is declared when the compiler is informed that a variable exists along with its type. the compiler does not generate instructions to allocate the storage for the variable at that point.
- A variable definition is also a declaration, butn not all variable decalartinos are definitions.

## Variables scopes
- Variables have scopes
- A variable scope refers to the accessibility of a variable in a given program or function.
- For example, a variable may only be available within a specific function, or it may be available to the entire C program

## Address of variables
We can access to address of variables adding a `&` at the beggining of the variable.

```c
#include <stdio.h>

int main()
{
    char variable_1 = 'A';
    char variable_2 = 'B';

    printf("Address of variable 1: %p\n", &variable_1);
    printf("Address of variable 2: %p", &variable_2);

    return 0;
}
```

## Storage classes in C
- Scope of a variable
- Visibility of a variable or function
- Life time of a variable

### There are two widely used storage class specifiers in C
- static
- extern

### Extern
Extern storage class specifier is used to access the global variable, which is defined outside the scope of a file.

`extern` storage class specifier can also be used during the function call, when the function is defined outside the scope of the file

The keyword `extern` is relevant only when your project consists of multiple files, and you need to access a variable defined in one file form another file. It is used to extend the visibility of a function or variable.

## ASCII codes
- The American National Standards Institute (ANSI), which developed ANSI C, also developed the ASCII codes.
- ASCII stands for "American Standard Code for Information Interchange"
- By using ASCII standard, you can encode 128 different characters, just need 7 bits to write ASCII code.


