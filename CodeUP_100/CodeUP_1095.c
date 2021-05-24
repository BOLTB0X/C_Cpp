#include     <stdio.h>

int main()
{
    int input, i;
    int x[10000] = { 0 };
    scanf("%d", &input);   
    
    for(i = 0; i < input; i++)  
    {
        scanf("%d", &x[i]); 
        if(x[i] < x[0])     
            x[0] = x[i];   
    }
    
    printf("%d", x[0]);    
}
