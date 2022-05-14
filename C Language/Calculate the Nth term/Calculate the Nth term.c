#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.
int sum =0;
int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  
  if(n == 1)
        return a;
    else if (n == 2)
        return b;
    else if (n == 3)
        return c;
        for(int i=1;i<n;i++)
        {
            sum+=find_nth_term(n-i,a ,b ,c );    
        }
        
    return sum;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
