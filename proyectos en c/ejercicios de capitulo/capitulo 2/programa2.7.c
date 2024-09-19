#include <stdio.h>

/* ESTE PROGRAMA RESIVE 3 VALORES QUE REPRESENTAN LAS VENTAS DE LOS VENDEDORES DE UNA TIENDA, ESCRIBE LAS VENTAS EN ORDEN DESCENDENTE*/

void main(){
float p = 0.0;
float s = 0.0;
float r = 0.0;
printf("ingrese la venta de los tres vendedores: ");
scanf("%f %f %f", &p, &s, &r);
if (p>s){
    if(p>r){
        if(s>r){
            printf("\n\n el orden es p, s y r: %8.2f %8.2f %8.2f ",p ,s, r);
    }
    else{
        printf("\n\n el orden es p,r y s: %8.2f %8.2f %8.2f",p ,r, s);
    }
}else{ printf("\n\n el orden es r, p y s: %8.2f %8.2f %8.2f ", r, p,s);
}
}else if (s > r){
    if(p > r){
            printf("\n\n el orden es s, p y r: %8.2f %8.2f %8.2f ", s, p, r);
    } else { printf("\n\n el orden es s, r y p: %8.2f %8.2f %8.2f", s, r, p);
    }
} else {
        printf("\n\n el orden es r, s y p: %8.2f %8.2f %8.2f ", r, s, p);
    }
}
