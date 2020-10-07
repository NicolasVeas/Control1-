/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 1 numero es intocable				                   */
/* Para compilar gcc num_intocable.c -o eje17  				    */
/* Para ejecutar ./eje17							    */
/* Autores: Felipe Leviñir - Nicolas Veas         				    */
/* Profesoras: Ana Aguilera - Eliana Providel                                    */
/*===============================================================================*/

#include <stdio.h>
#include <stdbool.h>

bool comprobar(int n){
	if(n>0){
		return true;
	}else{
		return false;
	}
	
}

bool intocable(int n){
	
	int i,j;
	int p=1;
	int sum=0;
	bool ver=false;
	
	if(n==1) return false;
	else{
	for(j=1;j<n*n;j++){
		sum=0;
		for (i=1;i<p;i++){
			if(p%i==0){
				sum += i;
			}
		}
		p++;
		if(sum==n) ver = true;
	}
	if(ver) return false;
	else return true;
	}
}
	

int main(){
	
    int num;
    bool ver_num=true;
    bool ver_intocable;
    
    while(ver_num){
    	printf("\n\n**PARA SALIR INGRESE UN NUMERO NEGATIVO O CERO**\n");
    	printf("Ingres un numero positivo: ");
    	scanf("%d",&num);
    	ver_num= comprobar(num);
    	if(ver_num){
    		ver_intocable = intocable(num);
    		if(ver_intocable) printf("SI es un numero intocable");
    		else printf("NO es un numero intocable");
    	}
    }
    
    
    return 0;
}




