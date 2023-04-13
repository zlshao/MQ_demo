#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;


#include"msg.pb.h"

struct Msgstruct{
    long type;
    char data[256];
};

int main(){
    messageQ::Msgbuf sendData;
    sendData.set_id(111);
    sendData.set_text("This is a protobuf message");
    string str=sendData.SerializePartialAsString();
    Msgstruct writeMsg;
    writeMsg.type=888;
    strcpy(writeMsg.data,str.c_str());
    int msgID=msgget(0x1234,IPC_CREAT|0777);
    if(msgID==-1){
        cout<<"Failure!"<<endl;
    }
    msgsnd(msgID,&writeMsg,sizeof(writeMsg.data),0);
  
    cout<<"The sent message is:  id= "<<sendData.id()<<"  text= "<<sendData.text()<<endl;

    msgctl(msgID,IPC_RMID,NULL);   //将队列从系统内核中删除
    return 0;

}