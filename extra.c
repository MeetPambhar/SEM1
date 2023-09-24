#include <stdio.h>
void main() {
    int i=1,k;
    scanf("%d",&k);
    while (i<=k) {
        i*=9;
        printf(" %d\n",i);
        i++;
    }
}