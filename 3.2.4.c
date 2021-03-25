#include <stdio.h>
#include <stdlib.h>

int main()
{
    void zamien(int * a, int * b){
    int pom;
    if (a > b)
    {
        pom=*a;
        *a=*b;
        *b=pom;
    }


    }

}
