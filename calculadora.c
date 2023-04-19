#include <stdio.h>
// calculadora 
void sumar (int sumando1, int sumando2){
    int suma;
    suma = sumando1 + sumando2;
    printf("El resultado de la suma es:%d", suma);
}

void restar (int restando1, int restando2){
    int resta;
    resta = restando1 - restando2;
    printf("La resta tiene como resultado:%d", resta);
}

void multiplicar (int multiplica1, int multiplica2){
    int multiplicacion;
    multiplicacion = (multiplica1 * multiplica2);
    printf("La resta tiene como resultado:%d", multiplicacion);
}

void dividir (int dividendo, int divisor){
    float division;
    division = dividendo / divisor;
    if (dividendo==0 || divisor ==0){
        printf ("El numero 0 no es valido");
    }
    else {
    printf("La resta tiene como resultado:%f", division); 
    }
}

int main () 
{
    int suma , resta , multiplicacion , division ;
    int num1, num2; 
    printf ("Leer numero 1\n ");
    scanf ("%d", &num1);
    printf ("Leer numero 2\n ");
    scanf ("%d", &num2);

    suma =sumar(num1, num2);
    resta =restar(num1, num2);
    multiplicacion = multiplicar(num1, num2);
    division = dividir(num1, num2);

    Return;

}