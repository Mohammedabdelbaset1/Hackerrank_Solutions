#include <stdio.h>
int roman_to_int_sym(char c)
{
     switch(c)
        {
            case 'I':
                return 1;
            break;
            case 'V':
                return 5;
            break;
            case 'X':
                return 10;
            break;
            case 'L':
                return 50;
            break;
            case 'C':
                return 100;
            break;
            case 'D':
                return 500;
            break;
            case 'M':
                return 1000;
            break;
            default:
                return 0;            
        }
    
}
int romanToInt(char * s){
    int count;
    for( count=0;(s[count] != '\0');count++){}
    int i=count,num=0;
    while(i>=0)
    {
        int curr = roman_to_int_sym(s[i]);
        int next= roman_to_int_sym(s[i-1]);
        if(next<curr)
        {
            num=num+(curr-next);
            i--;
        }
        else
        {
            num+=curr;
        }
        i--;
    }
return num;
}
int main() {
   // char s[] = {'M','C','M','X','C','I','V','\0'};
   char s[]={'L','V','I','I','I','\0'};
    int back=romanToInt(s);
    // Write C code here
    printf("%d\n",back);
    
    return 0;
}