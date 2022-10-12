#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n,min=INT_MAX,temp1,temp2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(min>abs(a[i]-a[j])){
                min=abs(a[i]-a[j]);
                temp1=a[i];
                temp2=a[j];
            }    
        }
    }
   
    //printf("%d\n",min);
    printf("Minimum difference is between %d and %d is %d",temp1,temp2,min);
   
    return 0;
}
