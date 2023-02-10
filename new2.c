#include<stdio.h>
int main(){
int a[5] = {11,22,33,44,55};
int *ptr = &a[3];
printf("%d\n", *(ptr));
printf("%d\n", *(ptr +1));
printf("%d\n", *(ptr -1));
    return 0;
}