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
> Contains two functions handling format specifier ``` %s and %c ```.
> * 1. print_ch() - A function that writes characters to stdout.
> * 2. print_str() - Function that writes strings to stdout.
> - Prototype:
> - 1. ``` int print_ch(va_list args, int len); ```
> - 2. ``` int print_str(va_list args, int len) ```.
> - Return:
> * number of characters written.

#### *print_numbers.c*
> Contains four functions all handling format specifiers ``` %d and %i```.
> * 1. print_int() - A function that checks for signed integers.
> * 2. _putchar_int() - A fuunction that writes signed integers to stdout.
> * 3. print_numbers() - A function that checks for numbers larger than INT_MAX.
> * 4. find_length() - A function that counts the digits in a numer.
> - Prototypes: 
> * 1. ``` int print_int(va_list args, int len) ```
> * 2. ``` int _putchar_int(int n, int len) ```
> * 3. ``` int print_numbers(unsigned long n, unsigned int base, const char *digits) ```
> * 4. ``` unsigned int find_length(unsigned int n, int base) ```.
> - Return:
> * 1. An unsigned long integer and the current length of the number.
> * 2. Length of number written to stdout.
> * 3. A call to findlength.
> * 4. Number of digits in a number.

#### *print_binary.c*
> Contains two functions handling the custom format specifier ``` %b ```.
> * 1. print_binary() - A funtction that converts an int to binary.
> * 2. print_b() - Initializes the arg to an unsigned int and calls print_binary().
> - Prototype:
> * 1. ``` int print_b(va_list args, int len); ```.
> * 2. ``` int print_binary(unsigned int n, int len); ```.
> - Return:
> * 1. Length of printed binary.
> * 2. The value returned by print_binary

#### *print_hex.c*
> Contains two functions handling the format specifiers ``` %x and %X ```.
> * 1. print_hex() - A function that converts integer inputs to lowercase hexadecimal numbers.
> * 2. print_heX() - A function that converts integer inputs to uppercase hexadecimal numbers.
> - Prototype:
> * 1. ``` int print_hex(va_list args, int len); ```.
> * 2. ``` int print_heX(va_list args, int len); ```.
> - Return:
> * number of hexadecimal characters written.

#### *print_octal.c*
> Contains a function that handles the format specifier ``` %o ```.
> * 1. print_octal() - A function that coverts integer inputs to octal values.
> - Prototype: 
> * 1. ``` int print_octal(va_list args, int len); ```.
> - Return: 
> * 1. Number of cotal character written to stdout.

#### *print_rot13.c*
> Contains a function that handles the format specifier ``` %R ```.
> * 1. print_rot13() - A function that prints a string encrypted using [ROT13](https://rot13.com/).
> - Prototype: 
> * 1. ``` int print_rot13(va_list args, int len); ```.
> - Return:
> * 1. Number of characters written to stdout.

#### *print_strings*
> Contains a function that handles the format specifier ``` %S ```.
> 1. print_Str() - prints the unprintable characters in their hexadecimal equivalent preceded with ``` \x0 ``` for on digit characters and ``` \x ``` for charcters with more than one digit.
> - Prototype:
> 1. ``` int print_Str(va_list args, int len); ```.
> - Return:
> 1. Number of characters written to stdout.
