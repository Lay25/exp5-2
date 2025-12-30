#include <stdio.h>

int main()
{
	char i[12] ="hello world";
	int *ip;

	ip = i;

//	printf("%d %p %x %c %p %d %p %x\n", *ip, ip, *ip, *ip, &ip, ip, &i, i);

	printf("%p %p", ip, &i);
	printf("%c\n", *ip);
	printf("%p\n", ++ip);
	printf(" %d %c, %x\n", *ip, *ip, *ip);
	printf("%c\n", *(++ip));
	printf("%c\n", *ip++);
	printf("%c\n", ++(*ip));
	printf("%c\n", ++*ip);
	printf("%c\n", *ip++);
	printf("%c\n", (*ip)++);
	printf("%c\n", *ip);

//	printf(" %c %c %c %c\n", *ip, *ip++, *++ip,(*ip)++);
}
