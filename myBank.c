#include <stdio.h>
#include "myBank.h"

void open(double Bank [2][50]){
   
    for (size_t i = 0; i < 50; i++)
    {
        if (Bank[0][i] == 0)
        {
            double sum;
            printf("Initial deposit: ");
            scanf("%lf", &sum);
            if (sum < 0 )
            {
                printf("Negativ number, error\n");
                return;
            }
            double valu = (int)(sum * 100);
            sum = (double) valu / 100;
            Bank [0][i] = 1; 
            int account = i + 901;
            Bank [1][i] = sum;
            printf("the number of the account is: %d \n" , account);
            return;
        }
   }
   printf("the bank is full\n"); 
   return;
}

void balance(double Bank [2][50]){
    printf("Account number : \n");
    int numberAccount;
    scanf("%d", &numberAccount);
    if (numberAccount < 901 || numberAccount > 950)
    {
        printf("undefine acount \n");
        return;
    }
    
    int i = numberAccount - 901;
    if (Bank [0][i] == 0)
    {
        printf("the account is close\n");
        return;
    }
    double sum = Bank [1][i];
    printf("the amount is %lf \n", sum); 
    return;
}
void deposit(double Bank [2][50]){
    int numberAccount;
    printf("Account number : \n");
    scanf("%d", &numberAccount);
    if (numberAccount < 901 || numberAccount > 950)
    {
        printf("undefine acount \n");
        return;
    }
    int i = numberAccount - 901;
    if (Bank [0][i] == 1)
    {
        double sum; 
        printf("Amount ? ");
        scanf("%lf", &sum);
        if (sum <= 0 )
            {
                printf("Negativ number or 0, error\n");
                return;
            }
        double valu = (int)(sum * 100);
        sum = (double) valu / 100;
        Bank [1][i] +=sum;
        printf("the balance is : %lf \n" ,  Bank [1][i]);
        return;
    }
     printf("the bank is close\n"); 
     return;
}
void withdrawal(double Bank [2][50]){
    int numberAccount;
    printf("Account number : \n");
    scanf("%d", &numberAccount);
    if (numberAccount < 901 || numberAccount > 950)
    {
        printf("undefine acount \n");
        return;
    }
    int i = numberAccount - 901;
    if (Bank [0][i] == 1)
    {
        double sum; 
        printf("Amount ? ");
        scanf("%lf", &sum);
        if (sum <= 0 )
            {
                printf("Negativ number or 0 , error\n");
                return;
            }
        double valu = (int)(sum * 100);
        sum = (double) valu / 100;
        if (Bank[1][i]>=sum)
        {
            Bank[1][i] -= sum;
            printf("the balance is : %lf \n" ,  Bank [1][i]);
            return;
        }
        printf("Not enough money \n");
        return;
    }
     printf("the bank is close\n"); 
     return;
}

void close(double Bank[2][50]){
    int numberAccount;
    printf("Account number : \n");
    scanf("%d", &numberAccount);
    if (numberAccount < 901 || numberAccount > 950)
    {
        printf("undefine acount \n");
        return;
    }
    int i = numberAccount - 901;
    if (Bank[0][i] == 1)
    {
        Bank[0][i] = 0;
        return;
    }
     printf("the bank is alredy close\n");
     return;
} 

void inseret(double Bank [2][50]){
    double rate; 
    printf("interest_rate? ");
    scanf("%lf", &rate);
    if (rate <= 0 )
    {
        printf("Negativ number or 0, error\n");
        return;
    }
    rate /= 100;
    for (int i = 0; i < 50; i++)
    {
        if (Bank[0][i] == 1)
        {
            Bank [1][i] -= (Bank [1][i])*rate;
            double valu = (int)(Bank [1][i]  * 100);
            Bank [1][i]  = (double) valu / 100;
        } 
    }
}

void print(double Bank[2][50]){
    int a = 0;
    for (int i = 0; i <  50; i++)
    {
        if (Bank[0][i] == 1)
        {
            a++;
            printf("the number of acount: %d, the amount: %lf \n" , (i+901) ,Bank[1][i]);
        }        
    }
    if (a == 0)
    {
        printf("all the acount is close \n");
    }
}

void ex(double Bank[2][50]){
    for (size_t i = 0; i < 50; i++)
    {
        Bank[0][i] = 0;
        Bank[1][i] = 0; 

    }
}
