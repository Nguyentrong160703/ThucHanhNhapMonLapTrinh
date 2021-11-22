#include <stdio.h>
#include <math.h>
int main(){
	int i = 3;
	printf("Gia tri cua i la %d", i);
	int s = 20 + ++i + i++;
	printf("\nBieu thuc 20 + ++i + i++ co ket qua la: %d; i = %d",s,i);

}

