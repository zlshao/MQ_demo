#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <string.h>
#include<iostream>

#include"msg.pb.h"

using namespace std;

struct Msgstruct{
    long type;
    char data[256];
};

int main(){
    Msgstruct readMsg;
    int msgID=msgget(0x1234,IPC_CREAT|0777);
    if(msgID==-1){
        cout<<"failure!"<<endl;
    }
    msgrcv(msgID,&readMsg,sizeof(readMsg.data),888,0);
    messageQ::Msgbuf rcvData;
    rcvData.ParseFromString(readMsg.data);
    cout<<"This is a received message: id= "<<rcvData.id()<<"  text= "<<rcvData.text()<<endl;
    
    msgctl(msgID,IPC_RMID,NULL);   //将队列从系统内核中删除
    return 0;

}