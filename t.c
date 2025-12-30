#include <stdio.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};


struct point makepoint(int x, int y)
{
	struct point temp;

	temp.x =x;
	temp.y =y;
	return temp;
};

struct rect max(struct rect p1)
{
	struct rect temp;
	if( p1.p1.x > p1.p2.x)
		temp.p1.x = p1.p1.x;
	else
		temp.p1.x =p1.p2.x;

	if (p1.p1.y > p1.p2.y)
		temp.p1.y = p1.p1.y;
	else
		temp.p1.y = p1.p2.y;

	return temp;
};

int min(struct rect p1)
{
	struct point temp;
	if( p1.p1.x > p1.p2.x)
                temp.x = p1.p1.x;
        else
                temp.x =p1.p2.x;

        if (p1.p1.y > p1.p2.y)
                temp.y = p1.p1.y;
        else
                temp.y = p1.p2.y;

        return temp.x, temp.y;
}


void main()
{
	struct point point;
	struct rect screen;
	struct point middle;
	struct point makepoint(int ,int);
	struct rect max( struct rect p1);
	struct rect md;
	struct point mn;

	int a,b;

	scanf(" %d %d ", &a, &b);
	screen.p1 = makepoint(a,b);
	printf("%d %d %p %p %p\n", screen.p1.x, screen.p1.y, &screen, &screen.p1 ,&point);
	printf("%p %p\n", &screen.p1.x, &screen.p1.y);

	scanf("%d %d", &a, &b);
	screen.p2 = makepoint(a,b);
	
	printf("%d %d %p %p %p\n", screen.p2.x, screen.p2.y, &screen, &screen.p2 ,&point);
	printf("%p %p\n", &screen.p2.x, &screen.p2.y);
	
	middle = makepoint(( screen.p1.x + screen.p2.x)/2, (screen.p1.y + screen.p2.y)/2);
	printf(" %d %d\n",middle.x, middle.y);

	md = max(screen);
	printf(" %d %d\n",md.p1.x, md.p1.y);

	mn.x,mn.y =min(screen);
	printf("%d %d\n",mn.x,mn.y);
	printf("%d %d %p %p %p\n", screen.p1.x, screen.p1.y, &middle, &middle.x ,&middle.y);
	printf("%p %p\n", &makepoint, &screen);

	printf("%ld %ld %ld\n", sizeof(point), sizeof(screen), sizeof(middle));
}
