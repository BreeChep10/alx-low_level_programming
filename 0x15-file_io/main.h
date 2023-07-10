#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *newfile);
void close_file(int fd);
void checkElf(unsigned char *ident);
void printMagic(unsigned char *ident);
void printClass(unsigned char *ident);
void printData(unsigned char *ident);
void printVersion(unsigned char *ident);
void printOSABI(unsigned char *ident);
void printABI(unsigned char *ident);
void printType(unsigned int type, unsigned char *ident);
void printEntry(unsigned long int entry, unsigned char *ident);
void closeElf(int fileDescriptor);

#endif/*main.h*/
