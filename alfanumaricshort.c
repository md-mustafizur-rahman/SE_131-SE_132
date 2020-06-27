#include<stdio.h>
    int main(int argc, char const *argv[])
    {
        int n[]={10, 30, 20, 50, 70, 90},i,a;
         for ( i = 0; i < 6; i++)
         {
            if (n[i]<n[i+1])
            {
                a=n[i];
                n[i]=n[i+1];
                n[i+1]=a;

            }
            
        }
        for ( i = 0; i <6; i++)
        {
            printf("%d\n",n[i]);
        } 
        return 0;
    }
    

