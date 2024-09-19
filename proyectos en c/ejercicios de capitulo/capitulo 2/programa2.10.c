#include <stdio.h>

/* par impar o nulo. */
void main(){
int num = 0;
printf ( "ingrese el numero:" );
scanf("%d", &num);
if ( num == 0 ){
    printf("\n nulo pariguallo jajjasjkas");
}
else{
    if ( pow (-1, num) > 0){
    printf("\n par");}
else {
    printf("\n impar");
}
}
}
