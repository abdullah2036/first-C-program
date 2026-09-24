# My first C program

My first program for learning C syntax: it prints a greeting, reads two numbers, rounds them to two decimal places, and says which one is larger (or that they're equal).

It covers the basics: `printf` / `scanf`, `float`, `if / else if`, functions, and linking the math library for `round()`.

## Build and run

```bash
gcc practice.c -o practice -lm    # -lm links math.h (needed for round)
./practice
```

## Example

```text
hello world, from c
enter x value
3.14159
enter y value
2.5
3.1 is greater than 2.5
```

## Files

```
first-C-program/
└── practice.c
```

---

Built by **Abdullah Bokhary** · [GitHub](https://github.com/abdullah2036)
