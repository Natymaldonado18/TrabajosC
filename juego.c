#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int arma, opc, vidarestante, vidatotal, vida=100; 
  int alt1, alt2, respuestaalt1, respuestaalt2;
  printf("Usted tiene un total de 100 puntos de vida\n");
  printf("Escoja el arma de su preferencia\n");
  printf("1.- espada\n" );
  printf("2.- arco y flecha\n");
  printf("3.- hacha\n");
  printf("Escriba el numero del arma a escoger:\n");
  scanf("%d",&opc);
  
  if(opc==1){
    arma=50;
    printf ("La espada cuenta con 50 puntos de ataque\n");}
    else if(opc==2){
      arma=70;
        printf ("El arco y flecha cuentan con 70 puntos de ataque\n");}
      else if (opc==3){
        arma=80;
            printf ("El hacha cuenta con 80 puntos de ataque\n");}
        else {
          printf("Numero invalido. Por favor intente de nuevo\n");}

printf ("\nSITUACIONES\n");
printf ("1.- Choza abandonada con bruja\n"); 
printf ("2.- Pantano con mounstruos\n");
printf ("3.- Trampa de casa perfecta\n");
printf ("4.- Bosque embrujado\n");
printf ("5.- Selva con ogros\n");
  
srand(time(NULL));
alt1 = rand() %5+1; 
  do{
alt2 = rand() %5+1;
  } while (alt1==alt2);
printf("\nLas situaciones son: %d\n" ,alt1);
printf("\nLas situaciones son: %d \n" ,alt2);

switch (alt1) {
  case 1:
  printf("\nSituacion 1: Te acabas de encontrar con una choza en el medio del bosque. Decides entrar y observas a una bruja y 3 de sus victimas. La bruja malvada te observa y se enfurece, por lo que decides:");
  printf("\n 1.Salir corriendo lo mas rapido posible.  2. Quedarte y enfrentar a la bruja: \n");
  scanf("%d", &respuestaalt1);
    switch (respuestaalt1) {
      case 1:
      printf("\nLa bruja furiosa trata de no dejarte escapar; usas tu arma para defenderte, pero ella te avienta un hechizo convirtiendote en rata y terminas cocinado en su caldero.Pierdes 70 puntos\n");
        vidarestante=vida+arma-70;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
      case 2:
      printf("\nTras una intensa y larga pelea, con suerte logras salir con vida del enfrentamiento gracias al manejo oportuno de tu arma. La bruja por su edad no pudo contra ti y escapa en su escoba voladora.Ganas 20 puntos\n");
        vidarestante=vida+arma+20;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
    }
  break;

  case 2:
  printf("\nSituacion 2: Despues de un largo paseo por la noche descubres que ¡estas perdido! y te encuentras en un lugar desconocido, un pantano tenebroso donde lo unico que puedes observar a la luz de la luna es el brillo de cientos de ojos rojos que te observan simultaneamente, asi que decides:");
  printf("\n 1.Rodear el pantano.  2. Adentrarse en el pantano \n");
  scanf("%d", &respuestaalt1);
    switch (respuestaalt1) {
      case 1:
      printf("\nRodear el pantano y recorrerlo atentamente, pues la curiosidad no abandona tus pensamientos; y, despues de un largo recorrido observas a tu alrededor y notas que te encuentras rodeado de cientos de animales que no puedes reconocer, tratas de usar tu arma pero el miedo te invade y no logras eliminar a todos . ¡No lo vas a lograr!. Acabas de perder 65 puntos\n");
        vidarestante=vida+arma-65;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
      case 2:
      printf("\nEn un intento de escapar decides atravesar el pantano con la esperanza de encontrar alguna salida pero pronto descubres que ¡mientras mas avanzas tus movimientos se limitan cada vez mas ¡Estas atrapado!, Con miedo te aferras a tu arma y eliminas a unas cuantas criaturas; pero, de las profundidades sale una criatura de la cual no tienes escapatoria, esto no va a terminar bien.... Acabas de perder 50 puntos\n");
        vidarestante=vida+arma-50;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
    }
  break;

  case 3:
  printf("\nSituacion 3: Es una noche oscura y lluviosa, te encontrabas caminado por las calles de una ciudad lejana; pero, en la busqueda de un refugio para protegerte del diluvio encuentras una gran casa con la puerta abierta. Con la esperanza de encontrar alojamiento decides ingresar a la morada y al final del salon logras visualizar una mesa con un festin; por lo que decides: ");
  printf("\n 1.Entrar a la casa y buscar al dueño  2. Huir por un mal presentimiento: \n");
  scanf("%d", &respuestaalt1);
    switch (respuestaalt1) {
      case 1:
      printf("\nLlegas hasta el final de la habitacion y sentado en un rincon observas a un hombre mirando fijamente la pared, intentas no llamar su atencion pero el voltea y te observa fijamente; la cena solo era un señuelo para que alguien inocente como tu caiga a manos de este asesino en serie, intentas defenderte con tu arma y hieres al hombre; mas, este es mas fuerte, no tienes forma de escapar... Pierdes 90 puntos\n");
        vidarestante=vida+arma-90;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
      case 2:
      printf("\nSientes que algo no anda bien, en esta ocasion tu intuicion no te permite ingresar a la casa; y, a pesar de la gran tormenta decides continuar con tu camino y tras horas de un largo reccorrido logras hospedarte en un lugar seguro y tranquilo. Dias mas tarde, en los encabezados de lo periodicos lees una noticia de un asesinato en el mismo lugar que habias encontrado. Esta vez corriste con suerte, tu vida se mantiene intacta.  \n");
        vidarestante=vida+0;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
    }
  break;

  case 4:
  printf("\nSituacion 4: Te adentras al bosque oscuro, terminas cayendo en una telaraña de araña gigante; por lo que decides");
  printf("\nEscriba una opcion: 1.Intentar usar tu arma  2.Hacerte el muerto \n");
  scanf("%d", &respuestaalt1);
    switch (respuestaalt1) {
      case 1:
      printf("\nHaciendo uso de tu arma, exitosamente logras librerarte exitosamente antes de que la araña te coma. ¡Bien hecho! Acabas de ganar 22 puntos\n");
        vidarestante=vida+arma+22;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
      case 2:
      printf("\nHacerte el muerto no funciono, asi que tratas de usar tu arma; mas, solo logras herirla leventemente, asi que se enoja y te come... es tu fin. Pierdes 37 puntos.\n");
        vidarestante=vida+arma-37;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
    }
  break;

  case 5:
  printf("\nSituacion 5: Te encontrabas en un viaje familiar en medio del bosque y planean realizar una caminata para recorrer el lugar; mas, despues de un largo recorrido observan a la distancia unos ogros que rapidamente se aproximan a ustedes; asi que decides: ");
  printf("\n 1.Quedarse inmoviles esperando a los ogros 2.Rezar  \n");
  scanf("%d", &respuestaalt1);
    switch (respuestaalt1) {
      case 1:
      printf("\nComo era de esperarse, los ogros no tenian buenas intenciones; y, a pesar de que les causaste daño con tu arma, ellos fueron mas fuertes y terminaron destruyendolos a todos... buena suerte para la proxima. Pierdes 40\n");
        vidarestante=vida+arma-40;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
      case 2:
      printf("\nTus suplicas han sido escuchadas, una docena de hechiceros termina rodeando a los ogros y con un par de hechizos los convierte en diminutos duendes que con tu arma los eliminas completemente. Por tu victoria ganas 20 puntos adicionales \n");
        vidarestante=vida+arma+20;
        printf("\nPUNTOS DE VIDA RESTANTES: %d\n", vidarestante);
      break;
     
    }
  break;
}
  switch (alt2) {
  case 1:
  printf ("\n........................................");
  printf("\nSituacion 1: Te acabas de encontrar con una choza en el medio del bosque. Decides entrar y observas a una bruja y 3 de sus victimas. La bruja malvada te observa y se enfurece, por lo que decides:");
  printf("\n 1.Salir corriendo lo mas rapido posible.  2. Quedarte y enfrentar a la bruja: \n");
  scanf("%d", &respuestaalt2);
    switch (respuestaalt2) {
      case 1:
      printf("\nLa bruja furiosa trata de no dejarte escapar; usas tu arma para defenderte, pero ella te avienta un hechizo convirtiendote en rata y terminas cocinado en su caldero.Pierdes 70 puntos\n");
        vidatotal=vidarestante+arma-70;
        printf("\nPUNTOS TOTALES DE VIDA: %d\n", vidatotal);
      break;
      case 2:
      printf("\nTras una intensa y larga pelea, con suerte logras salir con vida del enfrentamiento gracias al manejo oportuno de tu arma. La bruja por su edad no pudo contra ti y escapa en su escoba voladora.Ganas 20 puntos\n");
        vidatotal=vidarestante+arma+20;
        printf("\nPUNTOS TOTALES DE VIDA: %d\n", vidatotal);
      break;
    }
  break;

  case 2:
  printf ("\n........................................");
  printf("\nSituacion 2: Despues de un largo paseo por la noche descubres que ¡estas perdido! y te encuentras en un lugar desconocido, un pantano tenebroso donde lo unico que puedes observar a la luz de la luna es el brillo de cientos de ojos rojos que te observan simultaneamente, asi que decides:");
  printf("\n 1.Rodear el pantano.  2. Adentrarse en el pantano \n");
  scanf("%d", &respuestaalt2);
    switch (respuestaalt2) {
      case 1:
      printf("\nRodear el pantano y recorrerlo atentamente, pues la curiosidad no abandona tus pensamientos; y, despues de un largo recorrido observas a tu alrededor y notas que te encuentras rodeado de cientos de animales que no puedes reconocer, tratas de usar tu arma pero el miedo te invade y no logras eliminar a todos . ¡No lo vas a lograr!. Acabas de perder 65 puntos\n");
        vidatotal=vidarestante+arma-65;
        printf("\nPUNTOS DE VIDA TOTALES: %d\n", vidatotal);
      break;
      case 2:
      printf("\nEn un intento de escapar decides atravesar el pantano con la esperanza de encontrar alguna salida pero pronto descubres que ¡mientras mas avanzas tus movimientos se limitan cada vez mas ¡Estas atrapado!, Con miedo te aferras a tu arma y eliminas a unas cuantas criaturas; pero, de las profundidades sale una criatura de la cual no tienes escapatoria, esto no va a terminar bien.... Acabas de perder 50 puntos\n");
        vidatotal=vidarestante+arma-50;
        printf("\nPUNTOS TOTALES DE VIDA: %d\n", vidatotal);
      break;
    }
  break;

  case 3:
 printf ("\n........................................");
  printf("\nSituacion 3: Es una noche oscura y lluviosa, te encontrabas caminado por las calles de una ciudad lejana; pero, en la busqueda de un refugio para protegerte del diluvio encuentras una gran casa con la puerta abierta. Con la esperanza de encontrar alojamiento decides ingresar a la morada y al final del salon logras visualizar una mesa con un festin; por lo que decides: ");
  printf("\n 1.Entrar a la casa y buscar al dueño  2. Huir por un mal presentimiento: \n");
  scanf("%d", &respuestaalt2);
    switch (respuestaalt2) {
      case 1:
      printf("\nLlegas hasta el final de la habitacion y sentado en un rincon observas a un hombre mirando fijamente la pared, intentas no llamar su atencion pero el voltea y te observa fijamente; la cena solo era un señuelo para que alguien inocente como tu caiga a manos de este asesino en serie, intentas defenderte con tu arma y hieres al hombre; mas, este es mas fuerte, no tienes forma de escapar... Pierdes 90 puntos\n");
        vidatotal=vidarestante+arma-90;
        printf("\nPUNTOS DE VIDA TOTALES: %d\n", vidatotal);
      break;
      case 2:
      printf("\nSientes que algo no anda bien, en esta ocasion tu intuicion no te permite ingresar a la casa; y, a pesar de la gran tormenta decides continuar con tu camino y tras horas de un largo reccorrido logras hospedarte en un lugar seguro y tranquilo. Dias mas tarde, en los encabezados de lo periodicos lees una noticia de un asesinato en el mismo lugar que habias encontrado. Esta vez corriste con suerte, tu vida se mantiene intacta.  \n");
        vidatotal=vidarestante+0;
        printf("\nPUNTOS DE VIDA TOTALES: %d\n", vidatotal);
      break;
    }
  break;

  case 4:
  printf ("\n........................................");
  printf("\nSituacion 4: Te adentras al bosque oscuro, terminas cayendo en una telaraña de araña gigante; por lo que decides");
  printf("\nEscriba una opcion: 1.Intentar usar tu arma  2.Hacerte el muerto \n");
  scanf("%d", &respuestaalt2);
    switch (respuestaalt2) {
      case 1:
      printf("\nHaciendo uso de tu arma, exitosamente logras librerarte exitosamente antes de que la araña te coma. ¡Bien hecho! Acabas de ganar 22 puntos\n");
        vidatotal=vidarestante+arma+22;
        printf("\nPUNTOS TOTALES DE VIDA: %d\n", vidatotal);
      break;
      case 2:
      printf("\nHacerte el muerto no funciono, asi que tratas de usar tu arma; mas, solo logras herirla leventemente, asi que se enoja y te come... es tu fin. Pierdes 37 puntos.\n");
        vidatotal=vidarestante+arma-37;
        printf("\nPUNTOS TOTALES DE VIDA: %d\n", vidatotal);
      break;
    }
  break;

  case 5:
  printf ("\n........................................");
  printf("\nSituacion 5: Te encontrabas en un viaje familiar en medio del bosque y planean realizar una caminata para recorrer el lugar; mas, despues de un largo recorrido observan a la distancia unos ogros que rapidamente se aproximan a ustedes; asi que decides: ");
  printf("\n 1.Quedarse inmoviles esperando a los ogros 2.Rezar  \n");
  scanf("%d", &respuestaalt2);
    switch (respuestaalt2) {
      case 1:
      printf("\nComo era de esperarse, los ogros no tenian buenas intenciones; y, a pesar de que les causaste daño con tu arma, ellos fueron mas fuertes y terminaron destruyendolos a todos... buena suerte para la proxima. Pierdes 40 puntos.\n");
        vidatotal=vidarestante+arma-40;
        printf("\nPUNTOS TOTALES DE VIDA: %d\n", vidatotal);
      break;
      case 2:
      printf("\nTus suplicas han sido escuchadas, una docena de hechiceros termina rodeando a los ogros y con un par de hechizos los convierte en diminutos duendes que con tu arma los eliminas completemente. Por tu victoria ganas 20 puntos adicionales \n");
        vidatotal=vidarestante+arma+20;
        printf("\nPUNTOS DE VIDA TOTALES: %d\n", vidatotal);
      break;
    }
  break;
}

if (vidatotal>=1){
 printf ("\n........................................");
 printf ("\nUsted acaba de ganar el juego. FELICIDADES\n");
}
  else {
 printf ("\n........................................");
 printf ("\nUsted acaba de perder\n");
  }
  
return 0;
}