*This project has been created as part of the 42 curriculum by aalmasri.*

# Libft

## Description

Libft is a project from the 42 curriculum that involves creating a personal C library by reimplementing functions from the standard C library and developing additional utility functions.

The main goal is to understand how fundamental C functions work, improve programming skills, and gain a deeper understanding of memory management, pointers, strings, and linked lists.

The resulting library, `libft.a`, contains 43 functions divided into three parts.

## Library Contents

### Part 1 — Libc Functions

This part reimplements standard C library functions.

**Character checking and conversion**
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

**String functions**
- `ft_strlen`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strnstr`

**Memory functions**
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`

**Conversion and allocation**
- `ft_atoi`
- `ft_calloc`
- `ft_strdup`

### Part 2 — Additional Functions

This part introduces additional functions for string manipulation, memory allocation, and output to file descriptors.

**String and memory manipulation**
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_itoa`
- `ft_strmapi`
- `ft_striteri`

**File descriptor output**
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Part 3 — Linked Lists

This part introduces singly linked lists using the `t_list` structure.

Each node contains a pointer to its content and a pointer to the next node.

The library includes:
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Instructions

### Compilation

To compile the library, clone the repository and navigate to its directory.

Run:

```bash
make
```

This generates the static library `libft.a`.

Other available Makefile commands:

```bash
make clean
make fclean
make re
```

- `make clean`: removes object files (`.o`).
- `make fclean`: removes object files and `libft.a`.
- `make re`: cleans and recompiles the library.

### UsageThis project has been created as part of the 42 curriculum by aalmasri.*


Include the library header in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc main.c -L. -lft -o program
```

Run the executable:

```bash
./program
```

## Resources

The following resources were used to understand the concepts and implement the project:

- **42 Libft Subject:** Project requirements and function specifications.
- **Linux Manual Pages:** `man` pages for understanding standard C library functions.
- **C Programming Documentation:** References for pointers, memory allocation, strings, and data types.
- **GNU Make Documentation:** Understanding Makefiles, rules, dependencies, and compilation.

### AI Usage

AI tools, including ChatGPT, were used as learning and support resources during the project.

They were used for:
- Explaining C programming concepts, pointers, memory management, and linked lists.
- Understanding function behavior and identifying possible edge cases.
- Assisting with debugging and understanding compiler or Norminette errors.
- Explaining Makefile rules and compilation processes.
- Assisting with README organization and documentation.

AI-generated explanations and suggestions were reviewed and used as learning support. The implementation and understanding of the functions were developed and reviewed as part of the project work.

## Author

**aalmasri**

42 Abu Dhabi