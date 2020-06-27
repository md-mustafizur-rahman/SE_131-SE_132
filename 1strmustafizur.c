#include <stdio.h>
#include <string.h>
void main()
{
  char str[100],ch,n;
  int i,j,l;
  
       printf("Name:Mustafizur Rahman\nId:193-35-2918\n\n\n");
       printf("Enter your number of string element:");
       scanf("%d",&n) ;
       printf("Input the string : ");
       for ( i = 0; i < n; i++)
       {
           scanf("%s",&str[i]);
       }
       
  l=strlen(str);
  /* sorting process */
  for(i=1;i<l;i++)
    for(j=0;j<l-i;j++)
	if(str[j]>str[j+1])
	{
	  ch=str[j];
	  str[j] = str[j+1];
	  str[j+1]=ch;
	}
   printf("Sorted list in Ascending order string: \n");
  for ( i = 0; i < l; i++)
  {
    printf("%c\n",str[i]);
  }
  
  }