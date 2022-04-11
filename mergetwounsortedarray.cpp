#include<stdio.h>
void Merge_Array(int arr[],int arr2[],int size,int size2)
{
    int m_size=size+size2;
    int merge_arr[m_size];
    int i=0,k=0,j=0;
    while(k<m_size){
        if(i<size){
            merge_arr[k]=arr[i];
            i++;
            k++;
        }
        if(j<size2){
            merge_arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    int p;
    printf("After Merge two Array element are:");
    for(p=0;p<m_size;p++){
        printf("%d ",merge_arr[p]);
    }

}
int main()
{
    printf("Enter the size of the 1st array:");
    int size,i;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the size of the 2nd array:");
    int size2;
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the Element of the 1st array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Element of the 2nd array:\n");
    for(i=0;i<size2;i++){
        scanf("%d",&arr2[i]);
    }
    Merge_Array(arr,arr2,size,size2);
}
