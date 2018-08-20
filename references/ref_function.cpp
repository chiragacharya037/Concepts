#include<stdio.h>
using namespace std;
int &fun()
{
 static int x;
 printf("in function val of x:%d \n",x);
 return x;
}

int main()
{
 fun() = 10;
 printf("main 1: %d \n", fun());
 fun() = 15;
 printf("main 2: %d \n", fun());
 return 0;
}
