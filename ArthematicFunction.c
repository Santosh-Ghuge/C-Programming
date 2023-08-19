#include<stdio.h>

int Addition(int No1 , int No2)

{
    int sum = 0;
    sum = No1 + No2;
    return sum;

}

int substraction(int Data1, int Data2)
{
    int sub = 0;
    sub = Data1 - Data2;
    return sub;
}
int multiplication( int A , int B)
{
    int C = 0;
    C = A * B;
    return C;
}
int Division(int X , int Y)
{
    int Z = 0;
    Z = X / Y;
    return Z;
}

int main()

{
    int Value1 = 10;
    int Value2 = 5;
    int Ans = 0;

    Ans = Addition(Value1,Value2);
    printf("Addition is : %d\n", Ans);

    Ans = substraction(Value1, Value2);
    printf("substraction is : %d\n", Ans);

    Ans = multiplication(Value1, Value2);
    printf("Multiplication is : %d\n", Ans);

    Ans = Division(Value1,Value2);
    printf("Division is :%d\n", Ans);

    return 0;
}