#include <stdio.h>

struct point {
	char x[16];
	int y;
};

struct rect {
	char a[16];
	int b;
};

void value (char *x, int *y)
{
	scanf(" %s %d", x, y);
}

int main()
{
	struct point p;
	struct rect r;


	value(p.x, &p.y);
	value(r.a,&r.b);
	printf(" %s %d %p %p\n ", p.x, p.y, &p, &r);
	printf(" %p %p %p %p\n", &p.x, &p.y, &r.a, &r.b);
	printf(" %s %d\n", r.a, r.b);
	printf(" %p %p\n",p.x, r.a);
}

