#include <stdio.h>

int main()
{
	int i[5] ={10, 20 , 30, 100 , 50};
	int *ip;

	ip = i;

//	printf("%d %p %x %c %p %d %p %x\n", *ip, ip, *ip, *ip, &ip, ip, &i, i);

//	printf("%p %p", ip, &i);
//	printf("%d\n", *ip);
///	printf("%d\n", *++ip);
//	printf("%d\n", *(++ip));
//	printf("%d\n", *ip++);
//	printf("%d\n", ++(*ip));
//	printf("%d\n", ++*ip);
//	printf("%d\n", *ip++);
//	printf("%d\n", (*ip)++);
//	printf("%d\n", *ip);

	printf(" %d %d %d %d\n", *ip, *ip++, *++ip,(*ip)++);
}
