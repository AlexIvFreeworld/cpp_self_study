#include <iostream>//binary tree
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)
using namespace std;
struct Elem {
	int num;
	Elem *left, *right, *parent;
	Elem(int i_num) {
		num = i_num;
	}
};
class Tree {
	Elem *root;
public:
	Tree();
	~Tree();
	void Print(Elem *Node);
	Elem *Search(Elem *Node, int Key);
	Elem *Min(Elem *Node);
	Elem *Max(Elem *Node);
	Elem *Next(Elem *Node);
	Elem *Previous(Elem *Node);
	void Insert(Elem *Z);
	void Delete(Elem *Z = 0);
	Elem *getRoot();
};
Tree::Tree() {
	root = NULL;
}
Tree::~Tree() {
	Delete();
}
void Tree::Print(Elem *Node) {
	if (Node != NULL) {
		Print(Node->left);
		cout << Node->num << endl;
		Print(Node->right);
	}
}
Elem *Tree::Search(Elem *Node, int Key) {
	while (Node != NULL && Key != Node->num) {
		if (Key < Node->num) {
			Node = Node->left;
		}
		else {
			Node = Node->right;
		}
	}
	return Node;
}
Elem *Tree::Min(Elem *Node) {
	if (Node != NULL) {
		while (Node->left != NULL) {
			Node = Node->left;
		}
	}
	return Node;
}
Elem *Tree::Max(Elem *Node) {
	if (Node != NULL) {
		while (Node->right != NULL) {
			Node = Node->right;
		}
	}
	return Node;
}
Elem *Tree::Next(Elem *Node) {
	Elem *y = 0;
	if (Node != 0) {
		if (Node->right != 0) {
			return Min(Node->right);
		}
		y = Node->parent;
		while (y != 0 && Node == y->right) {
			Node = y;
			y = y->parent;
		}
	}
	return y;
}
Elem *Tree::Previous(Elem *Node) {
	Elem *y = 0;
	if (Node != 0) {
		if (Node->left != 0) {
			return Max(Node->left);
		}
		y = Node->parent;
		while (y != 0 && Node == y->left) {
			Node = y;
			y = y->parent;
		}
	}
	return y;
}
void Tree::Insert(Elem *Z) {
	Z->left = 0;
	Z->right = 0;
	Elem *y = 0;
	Elem *Node = root;
	while (Node != 0) {
		y = Node;
		if (Z->num < Node->num) {
			Node = Node->left;
		}
		else {
			Node = Node->right;
		}
	}
	Z->parent = y;
	if (y == 0) {
		root = Z;
	}
	else if (Z->num < y->num){
		y->left = Z;
	}
	else {
		y->right = Z;
	}
}
void Tree::Delete(Elem *Z) {
	if (Z != 0) {
		Elem *Node, *y;
		if (Z->left == 0 || Z->right == 0) {
			y = Z;
		}
		else {
			y = Next(Z);
		}
		if (y->left != 0) {
			Node = y->left;
		}
		else {
			Node = y->right;
		}
		if (Node != 0) {
			Node->parent = y->parent;
		}
		if (y->parent == 0) {
			root = Node;
		}
		else if (y == y->parent->left) {//пришли слева
			y->parent->left = Node;
		}
		else {
			y->parent->right = Node;
		}
		if (y != Z) {
			Z->num = y->num;
		}
	}
	else {
		while (root != 0) {
			Delete(root);
		}
	}
}
Elem *Tree::getRoot() {
	return root;
}
int main() {
	Tree T;
	Elem L10(10),L8(8),L12(12),L6(6),L9(9),L11(11),L13(13);
	T.Insert(&L10);
	T.Insert(&L8);
	T.Insert(&L12);
	T.Insert(&L6);
	T.Insert(&L9);
	T.Insert(&L11);
	T.Insert(&L13);
	T.Print(T.getRoot());
	cout << "-------------------------------------------" << endl;
	T.Print(&L8);
	cout << "-------------------------------------------" << endl;
	T.Print(&L12);
	cout << "previous L13 = " << T.Previous(&L13)->num << endl;
	cout << "previous L12 = " << T.Previous(&L12)->num << endl;
	cout << "previous L11 = " << T.Previous(&L11)->num << endl;
	cout << "previous L10 = " << T.Previous(&L10)->num << endl;
	cout << "previous L9 = " << T.Previous(&L9)->num << endl;
	cout << "previous L8 = " << T.Previous(&L8)->num << endl;
	cout << "-------------------------------------------" << endl;
	cout << "next L6 "  << T.Next(&L6)->num << endl;
	cout << "next L8 " << T.Next(&L8)->num << endl;
	cout << "next L9 " << T.Next(&L9)->num << endl;
	cout << "next L10 " << T.Next(&L10)->num << endl;
	cout << "next L11 " << T.Next(&L11)->num << endl;
	cout << "next L12 " << T.Next(&L12)->num << endl;
	cout << "-------------------------------------------" << endl;
	T.Delete(&L8);
	cout << "-------------------T.Delete(&L8)------------------------" << endl;
	T.Print(T.getRoot());
	cout << "L8.num = " << L8.num << endl;
	cout << "L8.right " << L8.right<< endl;
	cin.get();
	return 0;
}
