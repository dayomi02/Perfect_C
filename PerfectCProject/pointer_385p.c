#include <stdio.h>

int main() {
	char c;
	char* p = &c;
	char** dp = &p;
	
	*p = 'A';
	*p += 1;
	printf("%c\n", *p);
	printf("%c\n", ++*p);
	printf("%c\n", ++**dp);

	//B C D
	
	return 0;
}