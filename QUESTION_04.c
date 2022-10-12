#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a,const void *b){
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    qsort(a,n,sizeof(int),cmpfunc);
    qsort(b,n,sizeof(int),cmpfunc);
    int j=n-1,sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]*b[j];
        j--;
    }
    printf("%d",sum);
    return 0;
}

