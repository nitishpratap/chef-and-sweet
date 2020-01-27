#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,arr[100],lar;
    long s,p,v;
    int mod,profit;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
            scanf("%ld %ld %ld",&s,&p,&v);
          mod=p/(s+1);
          profit=mod*v;
          arr[i]=profit;

       }
       lar=arr[0];
       for(int j=1;j<n;j++)
       {
           if(arr[j]>lar)
           {
               lar=arr[j];
           }
       }
        printf("%d\n",lar);
         //printf("%d\t %d %d",arr[0],arr[1],arr[2]);
    }
    return 0;
}
