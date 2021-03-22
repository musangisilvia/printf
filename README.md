# **PRINTF**

## *INTRODUCTION*

Printf stands for ``` printf formatted ```. It is a function used to send formatted output to the screen. The format is defined by the conversion specifier passed.
In this project, we'll create a program that closely simulates the printf function in c.

## *CONTENT*

### *HEADER FILE*

#### *holberton.h*
> This is an include guarded file that contains function prototypes of the different functions used to make this program.

### *MAN PAGE*

#### *man_3_printf*
> - Usage: ``` man ./man_3_printf ```.

### *FUNCTIONS*

#### *_printf.c*
> Contains the _printf function.
> - Prototype: ``` int _printf(const char *format , ...); ```.
> - Returns the number of characters written to string.
> - Returns -1 on failure.

#### *get_print_func.c*
> a function that returns a pointer to a function based on the format specifier.
> - Prototype: ``` int (*get_print_func(char c))(va_list, int); ```.
> - If format specifier doe not exist, it returns NULL. Otherwise, it returns a function pointer.

#### *print_chars.c*
> Contains two functions.
> - 1- A function that writes characters to stdout.
> - 2- A function that writes strings to stdout.
> - Prototype: 1. ``` int print_ch(va_list args, int len); ```, 2. ``` int print_str(va_list args, int len) ```.
> - Return: number of characters written.

#### *print_functions.c*
> Contains print functions for different specifiers

