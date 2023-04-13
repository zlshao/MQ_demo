#include<stdio.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>


#define MSGKEY 1024

struct msgstru
{
    long msgtype;
    char msgtext[2048];
};

void childproc(){
    msgstru msgs;
    int msgid,ret_value;
    int str[512];

    while(1){
        msgid=msgget(MSGKEY,IPC_EXCL);
        if(msgid<0){
            printf("msq not existed! errno=%d [%s]\n",errno,strerror(errno));
            sleep(2);
            continue;
        }

        ret_value=msgrcv(msgid,&msgs,sizeof(struct msgstru),0,0);
        printf("text=[%s] pid=[%d]\n",msgs.msgtext,getpid());
    }
    return;
}

int main(){
    int i,cpid;

    for(i=0;i<5;i++){
        cpid=fork();
        if(cpid<0) printf("fork falied\n");
        else if(cpid==0){
            childproc();
        }
    }
    return 0;
}