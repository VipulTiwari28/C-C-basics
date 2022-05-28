#include <stdio.h>

void update(int *a,int *b) {
    int a_1=(*a)+(*b);
    int b_1;
    if ((*a)-(*b)>0) {
        b_1=(*a)-(*b);
    }
    if ((*a)-(*b)<0) {
        b_1=((*a)-(*b))*(-1);
    }
          
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a_1, b_1);

    return 0;
}