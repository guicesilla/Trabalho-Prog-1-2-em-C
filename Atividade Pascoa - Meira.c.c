// Nome:Guilherme Augusto Leme Cesila RA: 217116

#include<stdio.h>

int main(){
	
	int ano;
	int aureo;
	int seculo;
	int correcao1, correcao2;
	int epacta;
	int n;
	int domingo;
	int mes;
	
	printf("Digite um ano:\n");
	scanf("%d",&ano);
	
	//Calculo Variaveis 
	
	aureo = (ano%19)+1; 
	seculo = (ano/100)+1;
	correcao1 = ((seculo*3)/4)-12;
	correcao2 = (((seculo*8)+5)/25)-5;
	epacta = ((aureo*11)+20+correcao2-correcao1)%30;
	
	if(epacta == 25 || aureo>11 || epacta == 24){
		
		epacta ++;
		
	}
	
	//Calculo Lua
	
	
	n = 44-epacta;
	
	if(n<21){
		
		n = n+30;
		
	}
	
	domingo = ((5*ano)/4)-(correcao1+10);
	
	n = (n+7)-((domingo + n)%7);
	
	if(n>31){
		
		printf("Pascoa: %d de abril de %d", (n-31), ano);
		
	}else{
		
		
		printf("Pascoa: %d de Marco de %d", n, ano);
		
	}
	
	
	return 0;
}
