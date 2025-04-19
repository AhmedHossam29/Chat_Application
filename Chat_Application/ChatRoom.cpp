#include "ChatRoom.h"
#include "User.cpp"
#include "Message.cpp"
#include<iostream>
#include<string>
#include<vector>
#include<list>
using namespace std;
class ChatRoom {
public:
	string RoomId;
	vector<User>users;
	list<Message>messages;
	User admin;


	void usersInfo() {
		for (User user1 : users) {
			user1.display();
		}
	}
	void addUser(User user) {
		//if user exist in search =t
		users.push_back(user);
		//gui->not exist
	}
	void diplayMsg() {
		for (Message msg : messages) {
			msg.display();
		}

	}
	void appendMsg(Message msg) {
		messages.push_back(msg);
	}
	void deleteMsg(list<Message>::iterator it) {
		messages.erase(it);
	}
	void editMsg(list<Message>::iterator it, string newContent) {
		it->editContent(newContent);

	}
};
