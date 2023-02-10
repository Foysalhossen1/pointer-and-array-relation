#include<stdio.h>
int sum(int *a, int size){
    int i, sum = 0;
    for ( i = 0; i < size; i++)
    {
        sum = sum + *(a + i);
    }
    return sum;
}
int main(){
int i, arr[5];
printf("Enter the 5 value:\n");
for ( i = 0; i < 5; i++)
{
    scanf("%d",&arr[i]);
}
int result = sum(arr,5);
printf("Sum of the arry is: %d",result);
    return 0;
}