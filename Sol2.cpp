//#include <iostream>
//#include <string>
//using namespace std;
//
////동적할당 말고 배열로 푸는법
////배열로 풀 때 빈 공간 찾아가면서 하면 느려서 못품. Idx를 바로바로 받는 함수 만들어서 풀기
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
////한글자씩 하면 최악의 경우 cout 100만번이므로 배열에 담아 한번에 할 수 있도록
//void PRT()
//{
//	int i;
//	Node* p;
//	
//	for (i = 0, p = Head->next; p != Tail; i++, p = p->next)
//	{
//		//입력받은 배열 재사용(공간 줄이기)
//		Slog[i] = p->c;
//	}
//	Slog[i] = 0;
//
//	Slog.erase(i); //뒤에부분 다 지우기
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
//	if (Cur == Tail) return; //테일이 마지막. 커서 앞부분에 작성한다고 가정
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
//		//초기화
//		Init();
//		input();
//		solve();
//	}
//
//	return 0;
//}