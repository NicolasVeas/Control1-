/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 1 numero es oblongo				                   */
/* Para compilar gcc num_oblongo.c -o eje15  				    	    */
/* Para ejecutar ./eje15							    */
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

bool oblongo(int n){
	int i;
	bool verificar=false;
	
	for(i=0;i<=n;i++){
		if(i*(i+1)==n){
			verificar = true;
		}
	}
	
	if(verificar) return true;
	else return false;
}
	

int main(){
	
    int num;
    bool ver_num=true;
    bool ver_oblongo;
    
    while(ver_num){
    	printf("\n\n**PARA SALIR INGRESE UN NUMERO NEGATIVO O CERO**\n");
    	printf("Ingres un numero positivo: ");
    	scanf("%d",&num);
    	ver_num= comprobar(num);
    	if(ver_num){
    		ver_oblongo = semi_oblongo(num);
    		if(ver_oblongo) printf("SI es un numero oblongo");
    		else printf("NO es un numero oblongo");
    	}
    }
    
    
    return 0;
}




