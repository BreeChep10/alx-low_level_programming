# 0x14-bit_manipulation

> Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte.
> C language is very efficient in manipulating bits.

## Convertion of bitwise operations.

| A | B | A or B | A & B | A ^ B | A ~ |
---- --- -------- ------- ------- ------
| 0 | 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 | 1 | 1 |
| 1 | 0 | 1 | 0 | 1 | 0 |
| 1 | 1 | 1 | 1 | 0 | 0 |
--- --- --- --- --- ---

## TASKS

[0. 0](0-binary_to_uint.c)

Write a function that converts a binary number to an unsigned int.

	• Prototype: unsigned int binary_to_uint(const char *b);
	• where b is pointing to a string of 0 and 1 chars
	• Return: the converted number, or 0 if
		> there is one or more chars in the string b that is not 0 or 1
		> b is NULL
