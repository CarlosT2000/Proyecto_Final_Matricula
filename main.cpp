#include <stdio.h>
#include <string.h>
#include <string>
#include <time.h>
#include <stdlib.h>
#define dim 22
#define dim2 10
#define dim3 3
#define dim4 4
#define dim6 6
#define dim10 10

struct Alumno{
    long int cedula;
    char nombre[dim];
    int edad;
};

struct Materia{
    char cod_mat[dim4];
    char nombre[dim2];
    double notas[dim3];
};

struct Matricula{

    char cod_mat[dim6];
    Alumno datos_alumno;
    Materia datos_materia[3];
    double valor[3];
};

int validar_cedula(long int x,int y[dim10] )
{
    long int coc;
    int mul,sumpar=0,sumimpar=0,sumtotal,res;
	//verificar si hay 10 digitos
	    for(int i=9;i>=0;i--) {//coc!=0
			coc=x/10;
	        y[i]=x%10;
	        x=coc;
	    }
	        
	    for(int i=0;i<dim10;i+=2){	
	        mul=y[i]*2;
	        if(mul>9)
	            mul-=9;
	        sumpar+=mul;
		}
	    for(int i=1;i<dim10-2;i+=2)
	        sumimpar+=y[i];
	
	    sumtotal=sumimpar+sumpar;
	    res=10-(sumtotal%10);
	        
	    if(res==10)
	        res=0;
	    if(res==y[9]){
	       //printf("\nCedula valida\n");
	    
	        return(1);
	    }
	    else{
	       printf("\nCedula invalida, porfavor vuelva a ingresar");
	        return(0);
        }
    
}

void validar_edad(int *x){
    while (*x<16 || *x>100){
           printf("\n--La edad ingresada es incorrecta, porfavor vuelva a ingresar su edad--");
           scanf("%i",&(*x));
    }
}

void validar_nota(double *x){
    while (*x<0 || *x>20){
           printf("\nLa calificacion ingresada es incorrecta, porfavor vuelvelo a ingresar: ");
           scanf("%lf",&(*x));
    }
}

void ingresar(){
	
}
int main(int argc, char** argv) {
	return 0;
}