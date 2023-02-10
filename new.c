#include<stdio.h>
#include<stdlib.h>
int main(){
int a[5] = {1,2,3,4,5};
int i;
for ( i = 0; i < 5; i++)
{
    printf("%u\n",&a[i]);
}
printf("Addres:%u\n",a);


    return 0;
}
