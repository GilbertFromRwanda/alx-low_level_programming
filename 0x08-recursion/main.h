#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include <math.h>
extern void _putchar(char c);
int  putchar(int  c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
float mysqrt(float n, float x, float eps);
int is_prime(int n, int i);
int is_palindrome(char *s);
int is_poli(char *str, int s, int e);
int wildcmp(char *s1, char *s2);
int compare_s(char *str1, char *str2, int i);
#endif
