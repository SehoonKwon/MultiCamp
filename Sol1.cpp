//#include <iostream>
//#include <string>
//using namespace std;
//
//#define endl "\n"
//#define MAXL ((int)1e6 + 10)
//
//string Slog;
//
//struct Node
//{
//	char c;
//	Node* next, * prev;
//};
//
//Node *Head, *Tail, *Cur;
//
//void DeleteAllNode(Node* p)
//{
//	Node* delnode;
//	for (;;)
//	{
//		if (p == NULL) break;
//		delnode = p;
//		p = p->next;
//		delete delnode;
//	}
//}
//
//void Init()
//{
//	//�Ҵ� ������ ������ ��� ����
//	if (Head != NULL)
//		DeleteAllNode(Head);
//
//	//���� �ʱ�ȭ
//	Head = new Node(); //�����Ҵ�� ()�ٿ���� �ʱ�ȭ
//	Tail = new Node();
//	Cur = Tail;
//
//	Head->next = Tail;
//	Tail->prev = Head;
//}
//
////�ѱ��ھ� �ϸ� �־��� ��� cout 100�����̹Ƿ� �迭�� ��� �ѹ��� �� �� �ֵ���
//void PRT()
//{
//	int i;
//	Node* p;
//	for (i = 0, p = Head->next; p != Tail; i++, p = p->next)
//	{
//		//�Է¹��� �迭 ����(���� ���̱�)
//		Slog[i] = p->c;
//	}
//	Slog[i] = 0;
//	Slog.erase(i);
//
//	cout << Slog << endl;
//}
//
//void input()
//{
//	Slog.clear();
//	cin >> Slog;
//}
//
//void SelfDelete(Node* p)
//{
//	p->prev->next = p->next;
//	p->next->prev = p->prev;
//	delete p;
//}
//
//void Del()
//{
//	if (Cur->prev == Head) return;
//	else
//		SelfDelete(Cur->prev);
//}
//
//void Left()
//{
//	if (Cur->prev == Head) return;
//	else
//		Cur = Cur->prev;
//}
//
//void Right()
//{
//	if (Cur == Tail) return; //������ ������. Ŀ�� �պκп� �ۼ��Ѵٰ� ����
//	Cur = Cur->next;
//}
//
//void Insert(char c)
//{
//	Node* p = new Node;
//	p->c = c;
//	p->next = Cur; //Ŀ�� �տ� ���� �߰�
//	p->prev = Cur->prev;
//	Cur->prev->next = p;
//	Cur->prev = p;
//}
//
//void solve()
//{
//	for (int i = 0; Slog[i] != 0; i++)
//	{
//		switch (Slog[i])
//		{
//		case '-':
//			Del();
//			break;
//		case '<':
//			Left();
//			break;
//		case '>':
//			Right();
//			break;
//		default:
//			Insert(Slog[i]);
//			break;
//		}
//	}
//
//	PRT();
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//
//	for (int num = 1; num < T + 1; num++)
//	{
//		//�ʱ�ȭ
//		Init();
//		input();
//		solve();
//	}
//
//	return 0;
//}