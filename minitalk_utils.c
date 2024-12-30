#include "minitalk.h"

/*
stringT0n returns : -1 is string is null
          returns : 0 if the stringf is 0
          returns : the number in string 
          returns : -2 if the number is negative
          returns : -3 if the number is the given string is empty 
numberT0s returns : Null if the given param is Null
          returns : the return number as a string
        
get_number_len : returns 0 if num is 0 
                 returns -1 if the num is negative
                 returns the len of the num 
*/

int_dt get_number_len(int_dt num)
{
    int_dt len;

    len = 0;
    if (num == 0)
        return (len = 0, len);
    if (num < 0)
        return (len = -1, len);
    while (num > 0)
    {
        num = num / 10;
        len++;
    }
    return (len);
}

lint_dt stringT0n(char *string)
{
    lint_dt result;
    uint_dt index;
    lint_dt status;

    index = 0;
    result = 0;
    if (!string)
        return (status = -1, status);
    while (string[index] >= '0' && string[index] <= '9')
    {
        result = (result * 10) + (string[index] - '0' );
        index++;
    }
    return (result);
}

Nothing printNum(int_dt num)
{
    int_dt len;
    s_dt *newSTR;

    if (num < 0)
        return;
    if (num == 0)
    {
        printer("0");
        return;
    }
    len =  get_number_len(num);
    newSTR = malloc((len + 1) * sizeof(s_dt));
    if (!newSTR)
        return;
    newSTR[len] = '\0';
    len--;
    while (num > 0)
    {
        newSTR[len] = (num % 10) + '0';
        num = num / 10;
        len--;
    }
    printer(newSTR);
    free(newSTR);
}


int main()
{
    // lint_dt  s  = stringT0n("82874362");
    // int_dt p = get_number_len();

    // printf("the len is : %d", p);
    // printf("result : %lld", s);


    printNum(4678678);


    return (0);
}