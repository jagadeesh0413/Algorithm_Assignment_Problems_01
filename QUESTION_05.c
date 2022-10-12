#include <stdio.h>
#include <stdlib.h>
int cmpfunc(const void *a,const void *b){
    return (*(int*)a - *(int*)b);
}
int main()
{
    int n,j=0;
    scanf("%d",&n);
    int a[n],temp[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(a,n,sizeof(int),cmpfunc);
    for(int i=n-1;i>=0;i--){
        if(a[i]%2==1){
            temp[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            temp[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",temp[i]);
    }
    return 0;
}