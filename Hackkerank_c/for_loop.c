#include<stdio.h>
int main() 
{

    int a, b;
    scanf("%d %d", &a, &b);
  	char s[][20]={"t","one","two","three","three","four","five","six","seven","eight","nine"};
    for (int i=a; i<b+1 ;i++ ) {
        if (i>0 && i<10) {
            printf("%s\n",s[i]);
        }
        else {
            if (i%2==0) {
                printf("even\n");
            }
            else{
                printf("odd\n");
                
            }
        
        }
    }

    return 0;    
}
