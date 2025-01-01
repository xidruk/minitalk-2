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
lint_dt get_procid(char *string);
Nothing error_tree(int_dt err_id);
Nothing digits_printer(lint_dt num);


// signal struct 

typedef struct signal_info_struct {
    lint_dt sgl_pid;
    lint_dt sgl_status;
    s_dt *sgl_string;
} sgl_infos;

#endif

