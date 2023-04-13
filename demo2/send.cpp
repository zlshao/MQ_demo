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

int main(){
    msgstru msgs;
    int msg_type;
    char str[256];
    int ret_value;
    int msqid;

    msqid=msgget(MSGKEY,IPC_EXCL);
    if(msqid<0){
        msqid=msgget(MSGKEY,IPC_CREAT|0666);
        if(msqid <0){
        printf("failed to create msq | errno=%d [%s]\n",errno,strerror(errno));
        exit(-1);
    }
    }

    while(1){
        printf("input message type:  ");
        scanf("%d",&msg_type);
        if(msg_type==0) break;
        printf("input message to be sent:  ");
        scanf("%s",str);
        msgs.msgtype=msg_type;
        strcpy(msgs.msgtext,str);

        ret_value=msgsnd(msqid,&msgs,sizeof(struct msgstru),IPC_NOWAIT);
        if(ret_value<0){
            printf("msgsnd() write msg failed, errno=%d[%s]",errno,strerror(errno));
            exit(-1);
        }
    }

    msgctl(msqid,IPC_RMID,0);
    return 0;

}
