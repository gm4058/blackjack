#include <stdio.h>

int main() {
	int cardNum; //N
	int maxNum;	//M
	int min=999999;
	int cardSumArr[999];
	int count=0;
	int minTemp=0;
	
	scanf("%d %d",&cardNum,&maxNum);
	printf("\n");
	
	int cardArr[cardNum]; //뽑은 카드의 배열
	
	for(int i=0;i<cardNum;i++)
	{
		scanf("%d",&cardArr[i]);
	}
	
	for(int j=0;j<cardNum-2;j++)
	{
		for(int p=j+1;p<cardNum-1;p++)
		{
			for(int q=j+2;q<cardNum;q++)
			{
				
				cardSumArr[count] = cardArr[j]+cardArr[p]+cardArr[q];
				count++;
				
				printf("j,p,q = %d,%d,%d",cardArr[j],cardArr[p],cardArr[q]);
				printf("\n");
			}
		}
	}
	
	
	for(int a=0;a<=count;a++)
	{
		printf("cardSumArr= %d ",cardSumArr[a]);
		printf("\n");
		
		if(cardSumArr[a]<=maxNum)
		{
			minTemp=maxNum-cardSumArr[a];
			if(minTemp<min)
			{
				min=minTemp;
				printf("min= %d ",min);
				printf("\n");
			}
		}
	}
	
	printf("%d,%d,%d",maxNum,min,minTemp);
	printf("\n");
	printf("%d",maxNum-min);
}
