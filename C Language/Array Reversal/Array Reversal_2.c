
#include <stdio.h>

int main()
{
    int Size;
   scanf("%d",&Size);
    int a[Size],counter=Size-1,Temp=0;
 
   
 
   //Inserting elements into the array
   for (int i = 0; i < Size; i++) 
   {
      scanf("%d", &a[i]);
   }
   
   
   for(int i=0;i<Size/2;i++)
   {
       Temp=a[i];
       a[i]=a[counter];
       a[counter]=Temp;
       counter --;
   }
   
   //printing array
   for(int i=0;i<Size;i++)
   {
       printf("%d\t",a[i]);
       
   }
   

    return 0;
}
