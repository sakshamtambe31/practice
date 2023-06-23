#include<stdio.h>
int main(){
	int z = (10,15); //works as array
//	int z = 10,15; will give an error as the value of x is seperated by a comma
	printf("%d",z);
}
