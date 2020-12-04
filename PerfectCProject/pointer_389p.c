#include <stdio.h>

int main() {
	/*
	//01
	char ch = '*';
	int* ptrch = &ch;

	printf("주소 : %d\n", ptrch);
	printf("문자 : %c\n", *ptrch);

	

	//02
	int data1 = 10, data2 = 20;
	int sum = 0;
	int* p = NULL;

	p = &data1;
	*p = 100;
	sum += *p;
	p = &data2;
	*p = 200;
	sum += *p;

	printf("%d + %d = %d",data1, data2, sum);


	
	//04, 05
	int value = 0x2F24263F;
	char* pc;
	pc = (char*)&value;

	for (int i = 0; i < 5; i++) {
		printf("%x, %c => %x\n", *pc, *pc, pc);
		*pc += 1;
	}
	for (int j = 3; j > -1; j--) {
		printf("%x", *(pc + j));
	}


	//06
	*/
	int n = 0x3C405B7B;
	char* p = (char*)&n;
	p = p + 1;

	printf("%x (%c)\n", *(p+2), *(p+2));
	printf("%x (%c)\n", *(p + 1), *(p + 1));
	printf("%x (%c)\n", *p, *p);
	printf("%x (%c)\n", *(p - 1), *(p - 1));

	printf("%x %x %x %x\n", *p++, *++p, (*p)++, ++ * p);
	printf("%c %c %c %c", *p++, *++p, (*p)++, ++ * p);

	return 0;
}