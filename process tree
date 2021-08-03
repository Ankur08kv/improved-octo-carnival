#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<signal.h>
int main(){
   id_t pid1, pid2, pid3, pid4;
    printf("parent of all: %d\n", getpid());

    pid1=fork();

    if(pid1==0){
        printf("p1 child with id: %d and its parent id: %d \n", getpid(),getppid());
        pid2=fork();
        if(pid2==0){
            printf("p2 child with id: %d and its parent id: %d \n", getpid(),getppid());
        }
    }
    
    if(pid1 > 0){
        pid3=fork();
        if(pid3 == 0){
            printf("p3 child with id: %d and its parent id: %d \n",getpid(), getppid());
            pid4=fork();
            if(pid4==0){
                printf("p4 child with id: %d and its parent id: %d \n",getpid(),getppid());
            }
        }
    }
    
    sleep(1);
    if(pid1 > 0 && pid3 > 0){ //killing parent
        kill(getpid(), SIGTERM);
    }
    
    sleep(1);
    printf("child with id: %d and its parent id: %d \n",getpid(),getppid());
    sleep(1);
}

OUTPUT:

parent of all: 17411
p1 child with id: 17412 and its parent id: 17411 
p3 child with id: 17413 and its parent id: 17411 
p2 child with id: 17414 and its parent id: 17412 
p4 child with id: 17415 and its parent id: 17413 
Terminated
child with id: 17413 and its parent id: 1 
child with id: 17414 and its parent id: 17412 
child with id: 17412 and its parent id: 1 
child with id: 17415 and its parent id: 17413 
