#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
int pid;
pid = fork();
int status;
if(pid>0)
{
wait(&status);
}
