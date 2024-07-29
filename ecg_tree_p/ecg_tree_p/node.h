#pragma once
#include<iostream>
#include<vector>

class node {
private:
	std::string name;
	std::vector<node*> vec;
	
public:
	node(const std::string& new_name);
	virtual ~node();

	std::string get_name() const;
	void set_name(std::string new_name);
	int get_nr_children() const;
	node* get_child(int i) const;
	void add_child(node * child);
};