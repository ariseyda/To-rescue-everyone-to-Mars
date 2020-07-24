#include<stdio.h>

/*You are given a list of integers weights representing peoples' weights and an integer limit representing the weight limit of one rocket ship.

Each rocketship can take at most two people.

Return the minimum number of rocket ships it would take to rescue everyone to Mars.*/

int main(){
	
	int size,i,limit;
	printf("How many people will you enter:");
	scanf("%d",&size);
	printf("Enter the weight limit of a rocket:");
	scanf("%d",&limit);
	
	int array[size];
	printf("Enter people's weights:");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	printf("[");
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i<size-1){
			printf(",");
		}
	}
	printf("]");
	
	int sum=0,count=0;
	
	for(i=0;i<size;i++){
		sum+=array[i];
	}
	count=sum/limit;
	if(sum%limit<=limit){
		count++;
	}
	else{
		count+=2;
	}
	
	printf("\nHow many rockets are needed?:%d",count);
	
	
	
	return 0;
}
