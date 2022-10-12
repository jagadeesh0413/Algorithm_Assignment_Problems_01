#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MIN(i,j) (((i)<(j)) ? (i) : (j))
int cmpfunc(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n,k,min=INT_MAX;
    scanf("%d",&n);
int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmpfunc);
    scanf("%d",&k);
    for(int i=0;i<=n-k;i++){
        min=MIN(min,(a[i+k-1]-a[i]));
    }
    printf("%d",min);
    return 0;
}

