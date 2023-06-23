#include<stdio.h>
int main(){
	int x;
	printf("enter value of x: ");
	scanf("%d",&x); //& is address operator
//	printf(x); --> Compile time error
//	printf("%f",&x); --> output is 0.0000
    printf("%d",x);
}
