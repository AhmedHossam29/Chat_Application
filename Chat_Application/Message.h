#pragma once
class Message
{
private:
    string content;
    string senderId;
    string receiverId;
public:
    Message(string senderId, string receiverId, string content);
    Message(string content);
    string getContent();
    string getSenderId();
    string getReceiverId();
    void setContent(string Content);
    void setSenderId(string SenderId);
    void setReceiverId(string ReceiverId);
    void editContent(string newContent);
    void display();
};

