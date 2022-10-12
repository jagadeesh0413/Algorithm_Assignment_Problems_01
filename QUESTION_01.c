#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n;
    scanf("%d",&n);
    int arrl[n],ex[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arrl[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&ex[i]);
    }
    qsort(arrl, n, sizeof(int), cmpfunc);
    qsort(ex, n, sizeof(int), cmpfunc);
    int guest = 1, max = 1, time = arrl[0];
   int i = 1, j = 0;
   while (i < n && j < n)
   {
      if (arrl[i] <= ex[j])
      {
          guest++;
          if (guest > max)
          {
              max = guest;
              time = arrl[i];
          }
          i++;
      }
      else
      {    
          guest--;
          j++;
      }
   }
   printf("Maximum Number of Guests is %d at time %d",max,time);
    return 0;
}