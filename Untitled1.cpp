#include<stdio.h>
#include<stdlib.h>
int somar(int a,int b){
	if (a == 0)
	return 1;
	else
	if (b == 0)
	return 1;
	else return(a+somar);
	
}
int main(){
	int x,y;
	printf("insira o primeiro numero:");
	scanf("%d",&x);
	printf("insira o segundo numero:");
	scanf("%d",&y);
    somar(x,y);
	printf("resultado:%d",x);
	return 0;
	system("pause");
	
}
