#include <stdio.h>

void main(){
int num = 0;
int num2 = 0;
int i = 0;
for (i = 0; i <= 10; i++){
    num = i;
    num2 = num * num;
    printf("\nquadrade de num[%i] es : %i", num, num2);

}
for (; i >= 0; i--){
    printf("\npara atras %i", i);
}
}
