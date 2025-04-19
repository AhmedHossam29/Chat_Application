#pragma once
class ChatRoom
{
public:
	string RoomId;
	vector<User>users;
	list<Message>messages;
	User admin;

	void usersInfo();
	void addUser(User user);
	void diplayMsg();
	void appendMsg(Message msg);
	void deleteMsg(list<Message>::iterator it);
	void editMsg(list<Message>::iterator it, string newContent);

};

