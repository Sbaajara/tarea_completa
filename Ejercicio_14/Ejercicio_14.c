#include<stdio.h>
main (){
	
	int pasaje=450,lunes,L,martes,MA,miercoles,MI,jueves,J,viernes,V,valor_pasaje_mensual=0;
	
	printf("¿Cuantos viajes hace el dia lunes?");
	scanf("%i",&lunes);
	L= pasaje*lunes;
	printf("¿Cuantos viajes hace el dia martes?");
	scanf("%i",&martes);
	MA= pasaje*martes;
	printf("¿Cuantos viajes hace el dia miercoles?");
	scanf("%i",&miercoles);
	MI= pasaje*miercoles;
	printf("¿Cuantos viajes hace el dia jueves?");
	scanf("%i",&jueves);
	J= pasaje*jueves;
	printf("¿Cuantos viajes hace el dia viernes?");
	scanf("%i",&viernes);
	V= pasaje*viernes;
	
	
	valor_pasaje_mensual= (L+MA+MI+J+V)*4;
	
	printf("El valor del pasaje mensual es: %ipesos",valor_pasaje_mensual);
	
	
	return 0;
}