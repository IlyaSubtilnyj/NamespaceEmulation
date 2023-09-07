#define FOOIMPL
#include "mdlfoo.h"
#include <stdio.h>
#undef FOOIMPL

void foobar_create_foo() {
	printf("Creating!\n");
}

void foobar_print_foo() {
	printf("Printing!\n");
}