#include <stdio.h>
#include <stdlib.h>

int a = 199;
void printa(void);
void printaglobal(void);
int main()
{
    int a = 10;
    printf("\n valor de a en main: %i", a);

    printa();
    printaglobal();
    return 0;
}
void printa (void)
{
    int a = 1024;
    printf("\n valor de a en printa: %i", a);
}

void printaglobal(void)
{
    printf("\n valor de a en printaglobal: %i", a);
    return 0;
}
