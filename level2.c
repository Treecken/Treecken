#include <stdio.h>
int main()
{	int total,price,n,m,rest;	
	total=n=0;
	printf("Please input the price of the goods:");
	scanf("%d",&price);
	while (total<price){
		printf("Please input coins:");
		scanf("%d",&m);
		if(!(m==1||m==2||m==5)){
			printf("Your coins are not correct,please try again.\n");
			m=0;
			continue;
		}
		total+=m;
		n++;
		printf("di %d ci tou ru %d yuan\n",n,m);}
	rest=total-price;
	printf("gou wu cheng gong,zhao ling %d yuan\n",rest);
	return 0;
	
	
}