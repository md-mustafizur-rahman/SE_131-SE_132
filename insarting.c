#include<stdio.h>

    int main(int argc, char const *argv[])
    {
        int arr[7]={1,2,3,4,5},i,index,num;
           printf("Enter your index number:");
           scanf("%d",&index);
           printf("Enter your number:");
           scanf("%d",&num);

           for ( i = 6; index<=i; i--)
           {
               arr[i+1]=arr[i];
           }
           arr[index]=num;
        for ( i = 0; i < 6; i++)
       {
           printf("%d\n",arr[i]);
       }
       
        
        return 0;
    }
