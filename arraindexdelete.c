#include<stdio.h>
int main(int argc, char const *argv[])
{
      printf("\t\t\t Name:MD.Mustafizur Rahman\n\t\t\tID:193-35-2918\n\n");

    int arr[6],n,i,k,m=0,r;
    printf("Enter 5 intger number:");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("Enter your searching number:");
    scanf("%d",&n);
    for ( i = 0; i < 5 ; i++)
    {
        if (arr[i]==n)
        {
            arr[i]=arr[i+1];
           k=i;
           m++;
        }
       
    }
    if(m==1)
    {
    for ( i = 0; i < 5; i++)
    {
        arr[k]=arr[k+1];
        k++;
    }
    }
    if (m==1)
    {
        
    
    
    for ( i = 0; i < 4; i++)
    {
        printf("%d\n",arr[i]);
    }
    }
    else
    {
        printf("\nThis element can not be deleted as it is not exist\n");
    }
    
    
    return 0;
}
