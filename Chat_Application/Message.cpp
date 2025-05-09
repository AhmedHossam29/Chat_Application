#include "Message.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Message {
private:
    string content;
    string senderId;
    string receiverId;
public:
    Message(string senderId, string receiverId, string content) {
        this->senderId = senderId;
        this->receiverId = receiverId;
        this->content = content;

    }
    Message(string content) {
        this->content = content;
    }

    string getContent() {
        return content;
    }
    string getSenderId() {
        return senderId;
    }
    string getReceiverId() {
        return receiverId;
    }

    void setContent(string Content) {
        content = Content;
    }
    void setSenderId(string SenderId) {
        senderId = SenderId;
    }
    void setReceiverId(string ReceiverId) {
        receiverId = ReceiverId;
    }

    void editContent(string newContent) {
        content = newContent;
    }
    void display() {
        cout << content << endl;
    }
};