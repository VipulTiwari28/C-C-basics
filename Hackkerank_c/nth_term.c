#include<stdio.h>
int series(int arr[],int n)
{
    
    for (int i=3; i<n; i++) {
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];    
    }
    return arr[n-1];
    
}
int main()
{
    int n,x;
    
    scanf("%d",&n);
    int arr[n];
    scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
    x=series(arr,n);
    printf("%d",x);
    return 0;
    
}