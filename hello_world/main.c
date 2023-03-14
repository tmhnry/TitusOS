#include <stdio.h>

typedef struct Test {
	char buf[30];
}Test;

extern int _print(Test test);

int main(int argc, char** argv){	
	Test test;

	test.buf[0] = 'A';
	test.buf[1] = 'B';
	test.buf[2] = 'C';

	printf("%c\n", (char)_print(test));

	return 0;
}
