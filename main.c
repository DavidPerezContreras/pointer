#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    int x;
    int *z;

    x=69;
    z = malloc(sizeof(int));

    *z = x;
    x=70;

    printf("%d\n",*z);


    z = &x;
    x=100;

    printf("%d\n",*z);

return EXIT_SUCCESS;
}
