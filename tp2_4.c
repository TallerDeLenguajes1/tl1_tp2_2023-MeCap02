#include<stdio.h>

#define MAX 5

struct{
	int vel; //entre 1 y 3 GHz
	int ano; //entre 2015 y 2023
	int cant; //entre 1 y 8
	char *tipo_cpu; //valores del arreglo tipos
}typedef(compu);

compu cargar(char tipos[6][10]);
void Mostrar(compu caracter);
void Vieja(compu);
void Velocidad(compu);

int main(){
	int i=0;
	char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
	compu caracter[MAX];
	for(i=0;i<MAX;i++){
		caracter[i]=cargar(tipos);
	}
	for(i=0;i<MAX;i++){
		printf("Caracteristicas del procesador %d:",i);
	    Mostrar(caracter[i]);
    }
    Vieja(* caracter);
    Velocidad(* caracter);
	return 0;
}

void Velocidad(compu caracter){
	int aux,i;
	aux=caracter[1].vel;
	for(i=0;i<MAX;i++){
		if(aux<caracter[i].vel){
			aux=caracter[i].vel;
		}
	}
	for(i=0;i<MAX;i++){
		if(aux==caracter[i].vel){
			printf("La computadora mas rapida es la computadora %d:",i);
			Mostrar(caracter[i]);
		}
	}
}

void Vieja(compu caracter){
	int aux,i;
	aux=caracter[1].ano;
	for(i=0;i<MAX;i++){
		if(aux>caracter[i].ano){
			aux=caracter[i].ano;
		}
	}
	for(i=0;i<MAX;i++){
		if(aux==caracter[i].ano){
			printf("La computadora mas vieja es la computadora %d:",i);
			Mostrar(caracter[i]);
		}
	}
}

compu cargar(char tipos[6][10]){
	int i=0,j=0,a;
	compu algo;
	puts("Ingrese la velocidad del procesador (entre 1 y 3 GHz):");
	scanf("%d",&algo.vel);
	while((algo.vel<1) || (algo.vel>3)){
		puts("Ingrese un dato correcto:");
		scanf("%d",&algo.vel);
	}
	puts("Ingrese el anio del modelo (entre 2015 y 2023):");
	scanf("%d",&algo.ano);
	while((algo.ano<2015) || (algo.ano>2023)){
		puts("Ingrese un dato correcto:");
		scanf("%d",&algo.ano);
	}
	puts("Ingrese cantidad de nucleos con las que cuenta el procesador (entre 1 y 8):");
	scanf("%d",&algo.cant);
	while((algo.cant<1) || (algo.cant>8)){
		puts("Ingrese un dato correcto:");
		scanf("%d",&algo.cant);
	}
	puts("Ingrese el tipo de CPU:");
	for(i=0;i<6;i++){
		printf("%d para:",i);
		for(j=0;j<10;j++){
			printf("\n%c\n",algo.*tipo_cpu[i][j]);
		}
		printf("\n");
	}
	scanf("%d",&a);
	while((a<1) || (a>6)){
		puts("Ingrese un valor valido:");
		scanf("%d",&a);
	}
	switch(a){
		case 1: a==1;{
			algo.*tipo_cpu="Intel";
			break;
		}
		case 2: a==2;{
			algo.*tipo_cpu="AMD";
			break;
		}
		case 3: a==3;{
			algo.*tipo_cpu="Celeron";
			break;
		}
		case 4: a==4;{
			algo.*tipo_cpu="Athlon";
			break;
		}
		case 5: a==5;{
			algo.*tipo_cpu="Core";
			break;
		}
		case 6: a==6;{
			algo.*tipo_cpu="Pentium";
			break;
		}
	}
	return (algo);
}

void Mostrar(compu caracter){
	puts("\n\nVelocidad del procesador: ");
	printf("%d\n",caracter.vel);
	puts("Anio del modelo: ");
	printf("%d\n",caracter.ano);
	puts("Cantidad de nucleos del procesador: ");
	printf("%d\n",caracter.cant);
	puts("Tipo de CPU: ");
	puts(caracter.*tipo_cpu);
}
