#include <stdio.h>
#include "myBank.h"

int main(){
    double Bank [2][50] = {0};
    char k;    
    while(k != 'E')
        {
        printf("Enter Operation: ");
        scanf(" %c", &k);
        if (k == 'O')
        {
            open(Bank);
        }
        if (k == 'B')
        {
            balance(Bank);
        } 
         if (k == 'D')
        {
            deposit(Bank);
        } 
        if (k == 'W')
        {
            withdrawal(Bank);
        } 
         if (k == 'I')
        {
            inseret(Bank);
        } 
        if (k == 'P')
        {
            print(Bank);
        } 
        if (k == 'C')
        {
            close(Bank);
        } 
        if (k!='O' && k!='B' && k!='D' && k!='W' && k!='I'&&k!='P' && k!='C'  && k!='E' )
        {
            printf("please insert a correct input\n ");
        }
    }     
    if (k == 'E')
    {
        ex(Bank);
        return 0;
    }
    return 0;
}
