#include<stdio.h>
#include<stdlib.h>
void main(){
    int *arr =(int *)malloc(5*sizeof(int));

    printf("Enter the array elements :\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    printf("array elements :\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
        printf("\n");
    }
    
    free (arr);
}