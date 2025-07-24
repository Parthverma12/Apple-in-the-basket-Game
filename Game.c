#include<stdio.h>
int main()
{
	char name[20];
	int app,c=0,i,t,d;
	int a=21;
	printf("\t\t\t\t YOUR NAME : ");
	scanf("%s",&name);
	printf("\t\t\tHELLO %s WELCOME TO THE GAME OF LUCK.\n\t\t\tPLEASE READ THE RULE OF GAME GIVEN BELOW:-\n",name);
	printf("\n\t\t\t-----************GAME RULE**********-----\n\n\t\t\tThere are 21 apples in the basket.\n\t\t\tMaximum 4 and minumum 1 apples you can take once.\n\t\t\tWho takes the last apple from the basket will loose the game.");
	printf("\n\n\t\t\t-----**********BEST OF LUCK**********------\n");
	for(i=0;i<4;i++)
	{
		printf("\n\t\t\tTAKE APPLES FROM THE BASKET : ");
	    scanf("%d",&app);
	    c=5-app;
	    t=a-app;
	    printf("\n\t\t\tREST APPLES IN THE BASKET : %d",t);
	    printf("\n\n\t\t\tI take %d apples from the basket.",c);
	    d=t-c;
	    printf("\n\n\t\t\tREST APPLES IN THE BASKET : %d\n",d);
	    a=d; 
	}
	printf("\n\t\t\tYOU LOOSE THE GAME.\n\n\t\t\tBETTER LUCK NEXT TIME.");
	return 0;
}
