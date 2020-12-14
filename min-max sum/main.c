#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



int main()
{
    int arr [5];
    int i,j;
    long long int minSum=0,maxSum=0;
    
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<4;i++){
        minSum += arr[i];
    }
    for(i=1;i<5;i++){
        maxSum += arr[i];
    }
    printf("%lld %lld",minSum,maxSum);
    
    return 0;
}

    
    
    
