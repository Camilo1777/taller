#include <stdio.h>
#include <string.h>

int main(){
	char codigoalmacen[4];
	char codigoproducto[11];
	int codigob=0;
		
	printf("Ingrese el codigo del producto: ");
	scanf("%10s", &codigoproducto);
	printf("Ingrese el codigo del almacen: 20");
	scanf("%3s", &codigoalmacen);
		
	if (strlen(codigoproducto) != 10){
		printf("El codigo del producto tiene la cantidad de digitos incorrectos, recuerda que son 11, hasta luego \n");
		return 1;	
	}
	if (strlen(codigoalmacen) != 3){
		printf("El codigo del almacen tiene la cantidad de digitos incorrectos, recuerda que son 3, hasta luego \n");
		return 1;	
	}	
	char listaproductos[][11]={"8949899430","7653512593","9383867373","8839290420"};
	for (int i = 0 ; i < sizeof(listaproductos)/ sizeof(listaproductos[0]); i++){
		if (strcmp (codigoproducto, listaproductos[i]) ==0){
			codigob = 1;
			break; 
		}
	}
	if (codigob){
		double precio;
		printf("FELICIDADES!!! Ganaste un descuento del 20%, ingrese el valor del producto para poder calcular el descuento: ");
		scanf("%d",&precio);
		double descuento = 0.20;
		double total = precio -(precio*descuento);
		printf("Tu descuento fue de: %d \n", total);
	}
	else{
		printf("Este codigo no tiene ningun descuento");
	}
	int codigoa=0;
	char rifa [20];
	int prefijo = 20;
	sprintf(rifa,"%10s%d%3s",codigoproducto,prefijo,codigoalmacen);
	char listarifa[][17]={"894985943020763","165331255320221","248386737320130","183923092220561"};
	for (int i = 0 ; i < sizeof(listarifa)/ sizeof(listarifa[0]); i++){
		if (strcmp (rifa, listarifa[i]) ==0){
			codigoa = 1;
			break; 
	if (codigoa){
		printf("Felicitaciones ganaste una boleta para una rifa de un CARRO ");
	}

	
}
}
}

