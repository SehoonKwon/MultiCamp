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
//	//할당 받은게 있으면 모두 삭제
//	if (Head != NULL)
//		DeleteAllNode(Head);
//
//	//새로 초기화
//	Head = new Node(); //동적할당시 ()붙여줘야 초기화
//	Tail = new Node();
//	Cur = Tail;
//
//	Head->next = Tail;
//	Tail->prev = Head;
//}
//
////한글자씩 하면 최악의 경우 cout 100만번이므로 배열에 담아 한번에 할 수 있도록
//void PRT()
//{
//	int i;
//	Node* p;
//	for (i = 0, p = Head->next; p != Tail; i++, p = p->next)
//	{
//		//입력받은 배열 재사용(공간 줄이기)
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
//	if (Cur == Tail) return; //테일이 마지막. 커서 앞부분에 작성한다고 가정
//	Cur = Cur->next;
//}
//
//void Insert(char c)
//{
//	Node* p = new Node;
//	p->c = c;
//	p->next = Cur; //커서 앞에 문자 추가
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
//		//초기화
//		Init();
//		input();
//		solve();
//	}
//
//	return 0;
//}