#include<stdio.h>
main(){
	int a,b,c,ucg;
	printf("birinci kenari giriniz:");
	scanf("%d",&a);
	printf("ikinci kenari giriniz:");
	scanf("%d",&b);
	printf("ucuncu kenari giriniz:");
	scanf("%d",&c);
	if(a==b){
		if(a==c) ucg=3;
		else
		ucg=2;
	}
	else
	{
		if(a==c)
		ucg=2;
		else
		{
			if(b==c)
				ucg=2;
				else
				ucg=1;
			
		}
		
		
	}
	switch(ucg)
	{
		case 1:
			printf("cesitkenar ucgen");
			break;
			case 2:
				printf("ikizkenar ucgen");
				break;
				case 3:
					printf("eskenar ucgen");
					break;			
	}
	getch();
}
