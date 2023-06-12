# 0x15. C - File I/O

> Learning how to use system calls ie open(), close(), read(), write(), and how to use the flags O_RDONLY, O_WRONLY, O_RDWR.
> The following are some of the tasks done.

## TASKS.

[0. Tread lightly, she is near](0-read_textfile.c)

Write a function that reads a text file and prints it to the POSIX standard output.

	• Prototype: ssize_t read_textfile(const char *filename, size_t letters);
	• where letters is the number of letters it should read and print
	• returns the actual number of letters it could read and print
	• if the file can not be opened or read, return 0
	• if filename is NULL return 0
	• if write fails or does not write the expected amount of bytes, return 0
