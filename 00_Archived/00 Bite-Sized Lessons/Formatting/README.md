# Formatting

```
%[flags][width][.precision][length]specifier
```

Items written in square brackets are optional. Means, `%specifier` is must to write, for example: `%d`, `%e`, `%s` etc.

## Flags

Flags specify output justification such as decimal point, numerical sign, trailing zeros, or octal, decimal or hexadecimal prefixes.

| Flag    | Description                                      |
|---------|--------------------------------------------------|
| -       | Left-justify within the field width              |
| +       | Precede the result with a sign                   |
| (space) | Insert a blank space before the value            |
| #       | Precede with 0, 0x, or 0X for o, x, or X         |
| 0       | Pad the number with zeroes                       |

## Width

Width specifies the minimum number of characters to print after being padded with zeros or blank spaces, i.e. it specfies the minimum number of positions in the output stream. If data needs more space than specified then compiler overrides the width defined by user.

## Precision

Precision specifies the maximum number of characters to print.

- For integers, it specifies minimum number of digits to be written.
- For characters, it specifies the maximum number of characters to be written.
- For floating-point numbers, it specifies number of decimal places to be written.

By default, `printf` function prints six decimal positions.

## Length

Length specifies the size of the argument.

| Length | Description                                                                  |
|--------|------------------------------------------------------------------------------|
| hh     | Specifies that the argument is a `signed char` or `unsigned char`            |
| h      | Specifies that the argument is a `short int` or `unsigned short int`         |
| l      | Specifies that the argument is a `long int` or `unsigned long int`           |
| ll     | Specifies that the argument is a `long long int` or `unsigned long long int` |
| L      | Specifies that the argument is a `long double`                               |
| z      | Specifies that the argument is a `size_t`                                    |
| j      | Specifies that the argument is an `intmax_t`                                 |
| t      | Specifies that the argument is a `ptrdiff_t`                                 |

## Specifier

Specifier is used to define the type and the interpretation of the value of the corresponding argument.

| Specifier | Description                                      |
|-----------|--------------------------------------------------|
| d        | Signed decimal integer                           |
| i        | Signed decimal integer (same as %d)              |
| u        | Unsigned decimal integer                         |
| f        | Decimal floating point                           |
| e        | Scientific notation (mantissa/exponent)          |
| E        | Scientific notation (mantissa/exponent)          |
| g        | Use %e or %f, whichever is shorter               |
| G        | Use %E or %f, whichever is shorter               |
| x        | Unsigned hexadecimal integer                     |
| X        | Unsigned hexadecimal integer (uppercase)         |
| o        | Unsigned octal                                   |
| s        | String of characters                             |
| c        | Single character                                 |
| p        | Pointer address                                  |
| %        | A literal % character                            |
