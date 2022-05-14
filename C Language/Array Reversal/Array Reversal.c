#include <stdio.h>

int main()
{
    int Size;
   //printf("\nPlease Enter the size of an array: ");
   scanf("%d",&Size);
    int a[Size], b[Size],counter=Size-1;
 
   
 
   //Inserting elements into the array
   //printf("\nPlease Enter array elements: ");
   for (int i = 0; i < Size; i++) 
   {
      scanf("%d", &a[i]);
   }
   
   for(int i=0;i<Size;i++)
   {
       b[counter]=a[i];
       
       counter--;
       
   }
   for(int i=0;i<Size;i++)
   {
       printf("%d ",b[i]);
       
   }
   

    return 0;
}
