#include<stdio.h>

int main(){
	
	int v[100], x, z, i, j, y;
	
	z=-1;
	y=2;
	
	
	printf("Digite o numero de inteiros:");
	scanf("%d", &x);
	
	for(i=0; i<x; i++) {
		printf("Digite v[%d]:", i);
		scanf("%d", &v[i]);		
	}
	
	for(i=0; i<x; i++) {
	//	printf("v[%d] : %d\n", i, v[i]);	
	}
	
	for(j=0; j<x; j++){
		for(i=x-1; i>=0; i--) {
			if(v[i]==v[j]){
				y=1;
			}else{
				y=0;
			}
		}
	}
	
	if(y == 1){
		printf("E um palindrono");
	}else{
		printf("Nao e um palindrono");
	}
	
	
	return 0;
}
	
	

