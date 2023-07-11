#include<stdio.h>

int main(){
	int num,rem,quo = 1,div,i,bin[32];
	printf("Enter the number :");
	scanf("%d",&num);
	while(quo!=0){
		rem = num % 2;
		quo = num / 2;
		num = quo; 
		if(rem!=0){
			bin[i]=1;
		}
		else{
			bin[i]=0;
			
		}
		i++;
	}
	int j;
	for(j=i-1;j>=0;j--){
		printf("%d",bin[j]);
	}
	printf("%d",bin[j]);
   return 0;
}
