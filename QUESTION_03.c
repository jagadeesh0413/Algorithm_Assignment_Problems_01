#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n,subarr=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmpfunc);
    for(int i=0;i<n-1;i++){
        if(a[i]+1!=a[i+1]){
            subarr++;
        }
    }
    printf("%d",subarr);
    return 0;
}

