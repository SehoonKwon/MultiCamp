//#include <iostream>
//#include <string>
//using namespace std;
//
////�����Ҵ� ���� �迭�� Ǫ�¹�
////�迭�� Ǯ �� �� ���� ã�ư��鼭 �ϸ� ������ ��ǰ. Idx�� �ٷιٷ� �޴� �Լ� ���� Ǯ��
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
//Node Temp[MAXL];
//int TempIdx;
//
//Node* Myalloc(char ch, Node* p)
//{
//	Node* ret = &Temp[TempIdx];
//	TempIdx++;
//
//	if (p == NULL)
//	{
//		ret->c = 0;
//		ret->next = 0;
//		ret->prev = 0;
//	}
//	else
//	{
//		ret->c = ch;
//		ret->next = p;
//		ret->prev = p->prev;
//		p->prev->next = ret;
//	}
//
//	return ret;
//}
//
//
//void DeleteAllNode(Node* p)
//{
//	Node* delnode;
//	for (;;)
//	{
//		if (p == NULL) break;
//		delnode = p;
//		p = p->next;
//	}
//}
//
//void Init()
//{
//	TempIdx = 0;
//	Head = Myalloc(0, NULL);//dummy node
//	Cur = Tail = Myalloc(0, NULL);//dummy node
//	Head->next = Tail;
//	Tail->prev = Head;
//
//}
//
////�ѱ��ھ� �ϸ� �־��� ��� cout 100�����̹Ƿ� �迭�� ��� �ѹ��� �� �� �ֵ���
//void PRT()
//{
//	int i;
//	Node* p;
//	
//	for (i = 0, p = Head->next; p != Tail; i++, p = p->next)
//	{
//		//�Է¹��� �迭 ����(���� ���̱�)
//		Slog[i] = p->c;
//	}
//	Slog[i] = 0;
//
//	Slog.erase(i); //�ڿ��κ� �� �����
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
//	Cur->prev = Myalloc(c, Cur);
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