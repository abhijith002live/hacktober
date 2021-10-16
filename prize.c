#include <stdio.h>

void main() {
    int n,a,y=0;
    scanf("%d",&n);
    int b[10000];
    for (int i = 0; i < n; i++)
    {
        int sum=0;

        scanf("%d",&a);
        long int x[a];
         long int rank[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%ld",&rank[i]);
        }
        for (int i = 0; i < a; i++)
        {
            x[i]=1;
        }
        for (int i = 0; i < a; i++)
        {
            if((rank[i] > rank[i+1])||(rank[i-1]<rank[i])){
                sum=sum+2;

            }
            else
            {
                sum=sum+1;
            }
        }
       b[y]=sum;
       y++;
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\n",b[i]);
    }
    
}