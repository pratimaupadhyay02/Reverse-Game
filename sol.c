#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    #include<stdio.h>

      int t,n,i,c,p,k; 

    scanf("%d\n",&t);
    while(t--)
    {   scanf("%d %d",&n,&k);
        c=0;
        int a[n],b[n];
        for(i=n-1;i>=n/2;i--)
        {   a[i]=c;
            c=c+2;
        }
        p=1;
        for(i=0;i<=n/2;i++)
        {   b[i]=p;
            p=p+2;
        }
        if(k>n/2)
        printf("%d\n",a[k]);
        else
        if(k<n/2)
        printf("%d\n",b[k]);
        else
        if(a[n/2]<n)
        printf("%d\n",a[k]);
        else
        printf("%d\n",b[k]);
   }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

