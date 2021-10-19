#include <stdio.h>

int interacciones[12], i, totalH, max, Total, porc, cont, maxID, cont200, prom;

main(){

for(i=0;i<12;i++){
	
	printf("\n  Ingrese cantidad de interacciones en la hora %d\n  ",i);
	scanf("%d", &interacciones[i]);
	
	totalH= totalH + interacciones[i];
	
	if(interacciones[i] >= 200){
	
	cont200+=1;
	
	}
	
	if(i==0 || interacciones[i] > max){
		
		max=interacciones[i];
		maxID=i;
	}
	
}
porc=(cont200 * 100) / i;
prom=totalH/i;

for(i=0;i<12;i++){
	
	if(interacciones[i]<prom){
		printf("+---------------------------------------------------------------------+");
		printf("  \n-En la hora %d se registraron interacciones menores al promedio\n", i);
		printf("+---------------------------------------------------------------------+\n");
	}


}
printf("\n\n");
printf("******************************************************************************************");
printf("\n  -La maxima cantidad de interacciones fue en la hora %d con %d interacciones", maxID, max);
printf("\n  -El total de interacciones es de %d", totalH);
printf("\n  -El porcentaje de horas mayores a 200 es %%%d", porc);
printf("\n******************************************************************************************");
}
