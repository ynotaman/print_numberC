// print numbers from 0 to n

# include <stdio.h>
#include <math.h>
int main ()

{
    int i=0,n;
    printf ("\tenter the value of n\n");
    scanf ("\t %d",&n);
    
    do { printf ("%d \n",i);
        i=i+1;  
}while (i<=n);
 return 0;
    
}

