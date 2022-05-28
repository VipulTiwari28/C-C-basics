#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int counter=0;
    for (int j = 0; j < n; j++)
    {
        counter=counter+(arr[j]*pow(10,n-(j+1)));
        
    }
    printf("%d",counter);
    return 0;    
}