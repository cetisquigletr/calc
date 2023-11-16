#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

void printMainMenu(){
	printf("Calculadora\n");
	printf("1. Funciones basicas\n");
	printf("2. Funciones de redondeo\n");
	printf("3. Funciones de comparacion\n");
	printf("4. Funciones extras\n");
	printf("0. Salir\n");
}

void printBasicMenu(){
	printf("Funciones basicas\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("5. Potencia\n");
	printf("0. Salir a menu principal\n");
}
void printRoundingMenu(){
	printf("Funciones de redondeo\n");
	printf("1. Modulo\n");
	printf("2. Piso\n");
	printf("3. Techo\n");
	printf("4. Truncado\n");
	printf("5. Redondeo\n");
	printf("0. Salir a menu principal\n");
}

void printComparisonMenu(){
	printf("Funciones de comparacion\n");
	printf("1. Igual a\n");
	printf("1. Diferente a\n");
	printf("2. Menor que\n");
	printf("3. Mayor que\n");
	printf("4. Menor o igual que\n");
	printf("5. Mayor o igual que\n");
	printf("0. Salir a menu principal\n");
}

void printExtraMenu(){
	printf("Funciones extras\n");
	printf("1. Absoluto\n");
	printf("2. Minimo\n");
	printf("3. Maximo\n");
	printf("4. Semisuma\n");
	printf("5. Semiresta\n");
	printf("0. Salir a menu principal\n");
}

void basicFunctions(){
	int opt;
	double a, b, res;
	do{
		printBasicMenu();
		scanf("%d", &opt);
		switch(opt){
			case 1:
				printf("Suma\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = add(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 2:
				printf("Resta\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = subs(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 3:
				printf("Multiplicacion\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = mult(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 4:
				printf("Division\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = divs(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 5:
				printf("Potencia\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = pow(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 0:
				printf("Saliendo a menu principal...\n", opt);
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opt != 0);
}

void roundingFunctions(){
	int opt;
	double a, b, res;
	do{
		printRoundingMenu();
		scanf("%d", &opt);
		switch(opt){
			case 1:
				printf("Modulo\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = mod(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 2:
				printf("Piso\n");
				scanf("%lf", &a);
				res = floor(a);
				printf("Resultado: %.2lf\n", res);
				break;
			case 3:
				printf("Techo\n");
				scanf("%lf", &a);
				res = ceil(a);
				printf("Resultado: %.2lf\n", res);
				break;
			case 4:
				printf("Truncado\n");
				scanf("%lf", &a);
				res = trunc(a);
				printf("Resultado: %.2lf\n", res);
				break;
			case 5:
				printf("Redondeo\n");
				scanf("%lf", &a);
				res = round(a);
				printf("Resultado: %.2lf\n", res);
				break;
			case 0:
				printf("Saliendo a menu principal...\n", opt);
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opt != 0);
}

void comparisonFunctions(){
	int opt;
	double a, b, res;
	do{
		printComparisonMenu();
		scanf("%d", &opt);
		switch(opt){
			case 1:
				printf("Igual a\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = equals(a, b);
				if(res) printf("%.2lf es igual a %.2lf\n", res);
				else    printf("%.2lf no es igual a %.2lf\n", res);
				break;
			case 2:
				printf("Diferente a\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = notEqual(a, b);
				printf("Resultado: %.2lf\n", res);
				if(res) printf("%.2lf no es igual a %.2lf\n", res);
				else    printf("%.2lf es igual a %.2lf\n", res);
				break;
			case 3:
				printf("Menor que\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = lessThan(a, b);
				if(res) printf("%.2lf es menor que %.2lf\n", res);
				else    printf("%.2lf no es menor que %.2lf\n", res);
				break;
			case 4:
				printf("Mayor que\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = greaterThan(a, b);
				if(res) printf("%.2lf es mayor que %.2lf\n", res);
				else    printf("%.2lf no es mayor que %.2lf\n", res);
				break;
			case 5:
				printf("Menor o igual que\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = lessThanOrEqual(a, b);
				if(res) printf("%.2lf es menor o igual que %.2lf\n", res);
				else    printf("%.2lf no es menor o igual que %.2lf\n", res);
				break;
			case 6:
				printf("Mayor o igual que\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = greaterThanOrEqual(a, b);
				if(res) printf("%.2lf es mayor o igual que %.2lf\n", res);
				else    printf("%.2lf no es mayor o igual que %.2lf\n", res);
				break;
			case 0:
				printf("Saliendo a menu principal...\n", opt);
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opt != 0);
}

void extraFunctions(){
	int opt;
	double a, b, res;
	do{
		printExtraMenu();
		scanf("%d", &opt);
		switch(opt){
			case 1:
				printf("Absoluto\n");
				scanf("%lf", &a);
				res = absl(a);
				printf("Resultado: %.2lf\n", res);
				break;
			case 2:
				printf("Minimo\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = min(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 3:
				printf("Maximo\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = max(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 4:
				printf("Semisuma\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = semisum(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 5:
				printf("Semiresta\n");
				scanf("%lf", &a);
				scanf("%lf", &b);
				res = semidiff(a, b);
				printf("Resultado: %.2lf\n", res);
				break;
			case 0:
				printf("Saliendo a menu principal...\n", opt);
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opt != 0);
}

int main(){
	int opt;
	do {
		printMainMenu();
		scanf("%d", &opt);
		switch(opt){
			case 1:
				basicFunctions();
				break;
			case 2:
				roundingFunctions();
				break;
			case 3:
				comparisonFunctions();
				break;
			case 4:
				extraFunctions();
				break;
			case 0:
				printf("Saliendo...\n");
				break;
			default:
				printf("Opcion invalida\n");
		}
	}while(opt != 0);
	return 0;
}
