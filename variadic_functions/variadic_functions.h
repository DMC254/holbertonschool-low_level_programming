#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>

int _putvhar(char c);
int sum_them_all(const insigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
