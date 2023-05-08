#include <stdio.h>

int main() {
    int a;
    a = 10;
    int *p;
    p = &a;

    printf("-------打印输出--------\n");

    printf("int size = %d\n",sizeof(int));
    printf("float size = %d\n",sizeof(float));
    printf("char size = %d\n",sizeof(char));
    printf("double size = %d\n",sizeof(double));


    return 0;
}
