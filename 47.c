#include <stdio.h>
void main()
{
	int val[7],h,l,i;
	clrscr();
	for(i=0;i<7;i++)
        {
		printf("\nENTER VALUE-%d: ",i+1);
		scanf("%d",&val[i]);
	}
	l=val[0];
	h=val[0];
	for(i=0;i<7;i++)
        {
		if(val[i]>h)
			h=val[i];
		else
   {
			if(val[i]<l)
				l=val[i];
		}
	}
	printf("\nHIGHEST VALUE IS %d",h);
	printf("\nLOWEST VALUE IS %d",l);
	getch();
}
