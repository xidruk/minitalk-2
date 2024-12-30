#ifndef MINITALK_H
#define MINITALK_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

typedef unsigned int uint_dt;
typedef unsigned long long int ulint_dt;
typedef long long int lint_dt;
typedef char s_dt;
typedef int int_dt;
typedef void Nothing;

// functions 

int printer(char *string);
ssize_t get_len(char *string);
int_dt get_number_len(int_dt num);


#endif

