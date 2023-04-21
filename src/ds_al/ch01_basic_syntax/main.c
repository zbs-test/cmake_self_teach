#include <stdio.h>
#include <stdarg.h>				//提供宏va_list、va_start、va_arg、va_end
#include "Status.h"

void f(int i, ...)
{
	int *k;
	int j;
	
	va_list ap;
	va_start(ap, i);
	k = va_arg(ap, int *);
	
	j = *k;
}

int main(int argc, char *argv[])
{
    f(10);
	return ERROR;
	
}

