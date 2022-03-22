#include<stdio.h>
int main()
{
    printf("Enter the size of the array:");
    int size;
    scanf("%d",&size);
    int arr[size],j,i;
    printf("Enter the Element of the array:\n");
    for(j=0;j<size;j++){
        scanf("%d",&arr[j]);
    }
    printf("\nodd numbers are:");
    for(i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    printf("\nEven numbers are:");
    for(i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
}