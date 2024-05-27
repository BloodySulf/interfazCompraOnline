#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>


float calculoCompra(int, int);
int comprobarContrasenia(char p[100]);
void formatearTexto(char *usuarioFormateo);

int main (){
	char contrasenia[100], usuario[30];
    float totalPagar = 0;
    int opcion, comprobacion, valido = 0, op, cantidad, op2;
    int cantrem = 0, cantbuzos = 0, cantvest = 0, cantpant = 0;
    system("Color 0c");
    system("Title Compras Online");
	
	   do {
	
		printf("\t\t\t\t\t--- Menu Principal ---\n\n");
		printf("\t\t\t\t\tSeleccione una opcion: \n\n");
        if(valido == 0){
        	printf("\t\t\t\t\t1. Ingresar usuario\n");
		}
        printf("\t\t\t\t\t2. Comprar prendas\n");
        printf("\t\t\t\t\t3. Ver carrito de compras\n");
        printf("\t\t\t\t\t4. Salir\n");
        fflush(stdin);
        scanf("%d", &opcion);
        
        system("cls");
        
        switch(opcion){
        	case 1:
        		if(valido==0){
        		printf("\t\t\t\t\tIngrese usuario: \n");
        		fflush(stdin);
        		gets(usuario);
        		system("cls");
        		formatearTexto(usuario);
        		printf("Usuario: %s\n", usuario);
        		
        		
        		do {
                        printf("Ingrese una contrasenia (10 caracteres min, 1 Mayus, 1 Numero): \n");
                        gets(contrasenia);
                        comprobacion = comprobarContrasenia(contrasenia);
                        if (!comprobacion) {
                            printf("Contrasenia mal ingresada, intente nuevamente.\n");
                        }
                    } while (!comprobacion);
                    
                    system("cls");
                    printf("USUARIO INGRESADO CON EXITO\n");
                    valido = 1;
                } else {
                    printf("Ya ingresaste un usuario y contrasenia validos.\n\n\n");
                }
                break;
                
            case 2:
                if (valido == 0) {
                    printf("Primero debes ingresar contrasenia valida\n\n\n");
                } else {
                    char continuar[3] = "si";
                    while (strcmp(continuar, "si") == 0) {
                        printf("\nSelecciona una prenda para comprar: \n");
                        printf("1. Remera - $800\n");
                        printf("2. Buzo - $3000\n");
                        printf("3. Vestido - $5000\n");
                        printf("4. Pantalon - $4000\n");
                        fflush(stdin);
                        scanf("%d", &op);
                        
                        printf("\nIngrese cantidad a comprar: \n");
                        fflush(stdin);
                        scanf("%d", &cantidad);

                        switch (op) {
                            case 1:
                                cantrem += cantidad;
                                totalPagar += calculoCompra(op, cantidad);
                                break;
                            case 2:
                                cantbuzos += cantidad;
                                totalPagar += calculoCompra(op, cantidad);
                                break;
                            case 3:
                                cantvest += cantidad;
                                totalPagar += calculoCompra(op, cantidad);
                                break;
                            case 4:
                                cantpant += cantidad;
                                totalPagar += calculoCompra(op, cantidad);
                                break;
                            default:
                                printf("Opcion no valida.\n");
                                continue;
                        }
                        system("pause");
                        system("cls");
                        printf("\n\n\n\t\tDesea agregar mas cosas? (si/no):\n ");
                        fflush(stdin);
                        scanf("%s", continuar);
                        system("cls");
                    }
                }
                	break;
        		
        		case 3:
        			if (valido == 0) {
                    printf("Primero debes ingresar contrasenia valida\n\n\n");
                } else{
                	printf("\t\t\t\t\t1. Ver lista de productos seleccionados.\n");
                	printf("\t\t\t\t\t2. Completar la compra.\n");
                	fflush(stdin);
                	scanf("%d", &op2);
                	if (op2 == 1) {
                        printf("1. Remera - %d\n", cantrem);
                        printf("2. Buzo - %d\n", cantbuzos);
                        printf("3. Vestido - %d\n", cantvest);
                        printf("4. Pantalon - %d\n", cantpant);
                    } else if (op2 == 2) {
                    	system("cls");
                        printf("\n\n\n\nTotal a pagar: %.2f\n", totalPagar);
                    } else {
                        printf("Opcion no valida.\n");
                    }
                }
                break;
                }
    
    
    system("pause");
    system("cls");
    
} while (opcion != 4);
				
        
    	

} 
        


int comprobarContrasenia(char p[100]){
	int mayus= 0;
	int number=0;
	int largo=0;
	int i;
	
	if (strlen(p) > 10){
		largo = 1;
	}
	for (i=0; i < strlen(p); i++){
		if (p[i] >= 'A' && p[i] <= 'Z' ){
			mayus = 1;
		}
		if (p[i] >= '0' && p[i] <= '9' ){
			number = 1;
		}
	}
	
	if (largo && number && mayus){
		return 1;
	}else{
		
		return 0;
	}
}

void formatearTexto(char *usuarioFormateo) {
    if (strlen(usuarioFormateo) > 0) {
        usuarioFormateo[0] = toupper(usuarioFormateo[0]);
        for (int i = 1; usuarioFormateo[i] != '\0'; i++) {
            usuarioFormateo[i] = tolower(usuarioFormateo[i]);
        }
    }
}
float calculoCompra(int cal, int cant) {
    float precio = 0;
    switch (cal) {
        case 1:
            precio = 800;
            break;
        case 2:
            precio = 3000;
            break;
        case 3:
            precio = 5000;
            break;
        case 4:
            precio = 4000;
            break;
        default:
            return 0;
    }
    return precio * cant;
}
