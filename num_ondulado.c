/*===============================================================================*/
/* Control1 - Numeros amigos - ICI125 ProgramaciónI				    */
/* Determina si 1 numero es ondulado				                   */
/* Para compilar gcc num_ondulado.c -o eje16  				    */
/* Para ejecutar ./eje16							    */
/* Autores: Felipe Leviñir - Nicolas Veas         				    */
/* Profesoras: Ana Aguilera - Eliana Providel                                    */
/*===============================================================================*/

#include <stdio.h>
#include <stdbool.h>

bool comprobar(int n){
	if(n>99){
		return true;
	}else{
		return false;
	}
	
}

bool ondulado(int num){
	int x,y;
	bool ver = false;
	
	x= num%10;
	y= (num/10)%10;
	
	while(num!=0){
		if(num>9){
			if((num%10==x) && (num/10)%10==y){
				y = num%10;
				y = (num/10)%10;
				num /= 100;
			}else{
				ver = true;
				num = 0;
			}	
		}else{
			if((num%10)==x){
				num /=100;
			}else{
				ver = true;
				num = 0;
			}
		}
	
	}
	
	if(ver) return false;
	else return true;
}
	

int main(){
	
    int num;
    bool ver_num=true;
    bool ver_ondulado;
    
    while(ver_num){
    	printf("\n\n**PARA SALIR INGRESE UN NUMERO NEGATIVO O CERO**\n");
    	printf("Ingrese un numero positivo con al menos 3 digitos: ");
    	scanf("%d",&num);
    	ver_num= comprobar(num);
    	if(ver_num){
    		ver_ondulado = ondulado(num);
    		if(ver_ondulado) printf("SI es un numero ondulado");
    		else printf("NO es un numero ondulado");
    	}
    }
    
    
    return 0;
}




