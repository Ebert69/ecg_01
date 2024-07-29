#include<iostream>
#include"node.h"

node::node(const std::string& new_name) {
	name = new_name;
	
}
node::~node(){
	std::cout << "enter ~node() of " << "\"" << name << "\"" << std::endl;
	for (int i = 0; i < vec.size(); i++) {
		//std::cout << vec.size();
		delete vec[i];
	}
	std::cout << "leave ~node() of " << "\"" << name << "\"" << std::endl;
}

std::string node::get_name() const {
	std::cout << name <<std::endl;
	return name;
}
void node::set_name(std::string new_name){
	name = new_name;
}
int node::get_nr_children() const{
	return vec.size();
}
node* node::get_child(int i) const{
	if (i < vec.size())
		return vec[i];
	else
		return NULL;
}
void node::add_child(node * child){
	//node* children = new node(child);
	vec.push_back(child);
}