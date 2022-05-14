#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define size 1000

int main()
{
    int arr[10]={0};
    char a[size];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%s",a);
    int len = strlen(a);
    for(int i=0;i<len;i++)
    {
        if( ((a[i]<='9') && (a[i]>='0')) || ((a[i]>='a') && (a[i]<='z') )|| ((a[i]>='A') && (a[i]<='Z') ))
        {
            if(a[i] == '\0')
            {
                break;
            }
            
            switch(a[i])
            {
                case '0':
                arr[0] ++;
                break;
                
                case '1':
                arr[1] ++;
                break;
                
                case '2':
                arr[2] ++;
                break;
                
                case '3':
                arr[3] ++;
                break;
                
                case '4':
                arr[4] ++;
                break;
                
                case '5':
                arr[5] ++;
                break;
                
                case '6':
                arr[6] ++;
                break;
                
                case '7':
                arr[7] ++;
                break;
                
                case '8':
                arr[8] ++;
                break;
                
                case '9':
                arr[9] ++;
                break;
                
            }
        }
    }
    
    for(int i=0;i<10;i++)
    {
        printf("%d",arr[i]);
        printf(" ");
        
    }
    

    return 0;
}
