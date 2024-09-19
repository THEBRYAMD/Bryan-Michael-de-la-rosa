
#include <stdio.h>
#include <stdlib.h>

int main(){
int edad = 0;

printf("ingresa tu edad:");
scanf("%i", &edad);

if(edad >0 && edad <3){
printf("usted es un bebe \n");
}
else if(edad >4 && edad <12){
printf("usted es un nino \n");
}
else if(edad >13 && edad <18){
printf("usted es un adolecente \n");
}
else if(edad >18 && edad <60){
printf("usted es un adulto \n");
}
else if(edad >60 && edad <80){
printf("usted es un mayor de edad \n");
}
else if(edad >80 && edad <120){
printf("\nValla buscando caja");
}
return 0;
}
