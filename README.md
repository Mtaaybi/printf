This project is a custom implementation of the standard C library function printf. It replicates the behavior of printf to format and print data to the standard output.

🛠️ Features
Supports standard format specifiers:

%c → Print a character
%s → Print a string
%d / %i → Print an integer
%u → Print an unsigned integer
%x / %X → Print a hexadecimal number
%p → Print a pointer address
%% → Print a literal %
Handles field width, precision, and flags.

Efficient and reliable output formatting.

📄 Usage
Function Prototype:
int ft_printf(const char *format, ...);
Example:
#include "ft_printf.h"

int main(void) {
    ft_printf("Hello, %s! The number is: %d\n", "World", 42);
    return 0;
}
Expected Output:

Hello, World! The number is: 42
🧠 How It Works
Parses the format string.
Identifies format specifiers.
Processes variadic arguments.
Outputs formatted text to the standard output.
💻 Compilation
To compile the project, run:
gcc -Wall -Wextra -Werror *.c -o ft_printf
🧑‍💻 Author
Meee ! 
Feel free to contribute or suggest improvements! 🚀
