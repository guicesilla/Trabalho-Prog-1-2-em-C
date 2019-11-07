//Guilherme Augusto Leme Cesila RA-217116

#include<stdio.h>


//Exercicio 01
int main  (){
	
	int x,y;
	
	printf("Digite um numero:");
	scanf("%d", &x);
	
	y = 0;

	if(x >= 2 && x <= 50){
	
		switch (x){
			
			case 2:
				y++;
				break;
			
			case 3:
				y++;
				break;
				
			case 5:
				y++;
				break;
				
			case 7:
				y++;
				break;
			
			case 11:
				y++;
				break;
				
			case 13:
				y++;
				break;
				
			case 17:
				y++;
				break;
				
			case 19:
				y++;
				break;
				
			case 23:
				y++;
				break;
				
			case 29:
				y++;
				break;
				
			case 31:
				y++;
				break;
				
			case 37:
				y++;
				break;
				
			case 41:
				y++;
				break;
				
			case 43:
				y++;
				break;
				
			case 47:
				y++;
				break;

		}
		
		
	if(y == 1){	
	
	printf("O valor %d e primo\n", x);
	
	}else{
		
	printf("O valor %d nao e primo\n", x);
	}
		
}else{
	
	printf("Valor invalido: %d", x);
	
}

return 0;
	
}

//Exercicio 02
int main (){
	
	char sexo;
	int idade, cont;
	
	printf("Digite o sexo (M/F):");
	scanf("%c", &sexo);
	printf("Digite a idade:");
	scanf("%d", &idade);
	printf("Digite o tempo de contribuicao:");
	scanf("%d", &cont);
	
	if(sexo == 'm' || sexo == 'M'){
		
		if((idade >= 65 && cont >= 10) || (idade >= 63 && cont >= 15)){
			
			printf("Poderia se aposentar.");
			
		}else{
			
			printf("Nao poderia se aposentar.");
			
		}
	
	}
		
	if(sexo == 'f' || sexo == 'F'){
		
		if((idade >= 63 && cont >= 10) || (idade >= 61 && cont >= 15)){
			
			printf("Poderia se aposentar.");
			
		}else{
			
			printf("Nao poderia se aposentar.");
		}
			
		
	}
	
	return 0;
	
}

//Exercicio 03
int main (){
	
	float valor, impostoA, impostoB, transporte, operacional, parcial, final;
	float x, y, z;
	
	printf("Digite um valor:");
	scanf("%f", &valor);
	
	//Imposto A sobre valor base
	
	impostoA = (valor/100) * 30;
	
	//Imposto B
	
	impostoB = ((valor+impostoA)/100) * 30; 
	
	//Transporte
	
	x = ((valor+impostoA+impostoB)/100) * 10;
	
	transporte = x + 87;
	
	//parcial
	
	parcial = valor + impostoA + impostoB + transporte;
	
	if(parcial < 280){
		
		operacional = 28;
		
	}else{
		
		operacional = (parcial/100) * 10 + parcial;
		
	}
	
	final = valor+impostoA+impostoB+transporte+operacional;
	
	
	printf("Valor base  R$%.2f\n",valor);
	printf("Imposto A   R$%.2f\n",impostoA);
	printf("Imposto B   R$%.2f\n",impostoB);
	printf("Transporte  R$%.2f\n",transporte);
	printf("Operacional R$%.2f\n",operacional);
	printf("Custo final R$%.2f\n",final);
	
	return 0;
	
}

