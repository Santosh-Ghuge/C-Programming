#include<stdio.h>

int main()
{
    int iArr[4] = {10,20,30,40};

    char cArr[4] =  {'A','B','C','D'};

    float fArr[4] = {10.5,20.5,30.5,40.5};

    double dArr[4] = {10.0,20.0,30.0,40.0};

    printf("%d\n",iArr[0]);
    printf("%d\n",iArr[1]);
    printf("%d\n",iArr[2]);
    printf("%d\n",iArr[3]);

    printf("%c\n", cArr[0]);
    printf("%c\n", cArr[1]);
    printf("%c\n", cArr[2]);
    printf("%c\n", cArr[3]);

    printf("%f\n", fArr[0]);
    printf("%f\n", fArr[1]);
    printf("%f\n", fArr[2]);
    printf("%f\n", fArr[3]);

    printf("%f\n", dArr[0]);
    printf("%f\n", dArr[1]);
    printf("%f\n", dArr[2]);
    printf("%f\n", dArr[3]);

    return 0;
}