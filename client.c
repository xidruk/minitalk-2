#include <signal.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t process_id = getpid();
    unsigned int pid = (unsigned int)process_id;
    printf("proces id is : %u", pid);

    return (0);
}