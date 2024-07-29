#include<iostream>
#include"node.h"

int main() {

	node* root = new node("root");
	node* child1 = new node("left_child");
	node* child2 = new node("right_child");
	root->add_child(child1);
	(*root).add_child(child2); 
	delete root;
	
	/*(*root).get_name();
	(*root).get_nr_children(); */

	return 0;
}