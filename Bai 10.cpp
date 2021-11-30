#include<stdio.h>
//Tam giác vuông cân
void veTamGiac1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
//Tam giác vuông cân đảo ngược
void veTamGiac2(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			printf("*");
		}
		printf("\n");
	}
}
//Tam giac đều
void veTamGiac5(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			printf(" ");
			}
		for(int j=0; j<2*i+1; j++){
			printf("*");
		}
		printf("\n");
	}
}
//Gọi lại các hàm trên
int main()
{
	int n;
	printf("Nhap n: ");
	scanf_s("%d",&n);
	printf("---Tam giac can 1---\n");
	veTamGiac1(n);
	printf("---Tam giac can 2---\n");
	veTamGiac2(n);
	printf("---Tam giac can 3---\n");
	veTamGiac5(n);
	}
