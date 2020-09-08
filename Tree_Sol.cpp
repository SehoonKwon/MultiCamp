//#include <iostream>
//using namespace std;
//
//#define endl "\n"
//
//int Array[100];
//
//struct Tree
//{
//	int num;
//	Tree* left;
//	Tree* right;
//};
//
//Tree* Root;
//
//void Create(Tree* p)
//{
//	cin >> p->num;
//	if (p->num == -1) return;
//
//	p->left = new Tree();
//	p->right = new Tree();
//	Create(p->left);
//	Create(p->right);
//}
//
//void PostOrder(Tree* p)
//{
//	if (p->num == -1) return;
//	if (p->left) PostOrder(p->left);
//	if (p->right) PostOrder(p->right);
//	cout << p->num << " ";
//}
//
//void PreOrder(Tree* p)
//{
//	if (p->num == -1) return;
//	cout << p->num << " ";
//	if (p->left) PreOrder(p->left);
//	if (p->right) PreOrder(p->right);
//
//}
//
//void InOrder(Tree* p)
//{
//	if (p->num == -1) return;
//	if (p->left) InOrder(p->left);
//	cout << p->num << " ";
//	if (p->right) InOrder(p->right);
//}
//
//int main()
//{
//	Root = new Tree();
//	Create(Root);
//	PostOrder(Root);
//	cout << endl;
//	PreOrder(Root);
//	cout << endl;
//	InOrder(Root);
//
//	return 0;
//}