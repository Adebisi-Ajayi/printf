#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct printer - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct printer
{
	char *t;
	int (*f)(va_list);
} printer_t;

int _printf(const char *format, ...);
int _putchar(char c);
int printf_c(va_list c);
int printf_s(va_list s);
int printf_i(va_list i);
int printf_d(va_list d);
int printf_f(va_list f);
int printf_e(va_list e);
int printf_g(va_list g);
int printf_l(va_list l);
int printf_0(va_list zero);
int printf_h(va_list h);
int printf_u(va_list u);
int printf_b(va_list b);
int printf_o(va_list o);
int printf_x(va_list x);
int printf_X(va_list X);
int printf_p(va_list p);
int print_p(va_list p);
int printf_S(va_list S);
int printf_r(va_list r);
int printf_R(va_list R);
int printf_add(va_list add);
int printf_less(va_list less);
int printf_sharp(va_list sharp);
int printf_plus(va_list plus);
int printf_space(va_list space);
int printf_ash(va_list ash);
#endif
