#include<stdio.h>
int main(){  
    int a;
    int b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    swap(a,b); 
    
return 0;
}
int swap(int a, int b)
{
 a=a+b;
 b=a-b;
 a=a-b;

 printf("%d ",a);
    printf("%d ",b);
     return (a,b);
}
