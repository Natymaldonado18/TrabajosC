#include <stdio.h>

int main(void) {
  int opc, pisoa, pisoi;
  int ascensor=0;
  int m;

while(1) {
  printf("\n");
  printf("\nMENU ASCENSOR CON 10 PISOS\n");
  printf("1.- Llamar al ascensor\n");
  printf("2.- Seleccionar piso\n");
  printf("3.- Mostrar piso actual\n");
  printf("4.- Salir\n");
  printf("Ingrese el literal de la opcion\n");
  scanf ("%d", &opc);

  switch (opc){
    case 1:
    printf("LLAMAR ASCENSOR\n");
    printf("ingrese el piso desde donde llama el ascensor:\n");
    scanf ("%d", &pisoa);
    if (pisoa>9  || pisoa<0 ){
      printf("no existe el piso");
    }
    if (pisoa==ascensor){
      printf("El ascensor esta en el piso %d",ascensor);
    }
    else if (pisoa!=ascensor) {
      printf ("El ascensor se esta moviendo\n");
      for (m = ascensor; m<pisoa; m++){
        printf ("El ascensor se encuentra en %d\n", m+1);
      }
      for (m = ascensor; m>pisoa; m--){
        printf ("El ascensor se encuentra en %d\n", m-1);
      }
          if(ascensor == pisoa);{
          printf("El ascensor llego a su piso");
    
       }
      break;
    
    case 2:
    printf("SELECCIONAR PISO\n");
    printf("Ingrese el piso al que desea ir:\n");
    scanf ("%d", &pisoi);
      if (pisoi>9  || pisoi<0 ){
      printf("no existe el piso");
    }
    if (pisoi==pisoa){
      printf("El ascensor esta en el piso %d",pisoa);
    }
    else if (pisoi!=pisoa) {
      printf ("El ascensor se esta moviendo ya que se encontraba en el piso: %d\n", pisoa); }
      for (m = pisoa; m<pisoi; m++){
        printf ("El ascensor se encuentra subiendo al piso: %d\n", m+1);
      }
      for (m = pisoa; m>pisoi; m--){
        printf ("El ascensor se encuentra bajando al piso: %d\n", m-1);
      }
          if(pisoa == pisoi) {
          printf("El ascensor llego al piso deseado");
      }
            
    
  break;

  case 3:
     while(2) {
    printf("\nMOSTRAR PISO ACTUAL:\n");

      switch (pisoi){
      case 1:
      if (pisoi==1){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
      case 2:
      if (pisoi==2){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
      case 3:
      if (pisoi==3){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
      case 4:
      if (pisoi==4){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
        case 5:
      if (pisoi==5){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
        case 6:
      if (pisoi==6){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
        case 7:
      if (pisoi==7){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
        case 8:
      if (pisoi==8){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
        case 9:
      if (pisoi==9){
        printf ("\nUsted se encuentra en el piso: %d", pisoi);
      }
      }
  break;
  
  
  case 4:
   return (0);
    break;


}
}
}
}
}
      
