#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int n[5],i,a;
        for ( i = 0; i < 5; i++)
        {
            scanf("%d",&n[i]);
        }
         for ( i = 0; i < 4; i++)
        {
            if (n[i]>n[i+1])
            {
                a=n[i];
                n[i]=n[i+1];
                n[i+1]=a;

            }
            
        }
        for ( i = 0; i <5; i++)
        {
            printf("%d\n",n[i]);
        } 
        return 0;
    }
    

