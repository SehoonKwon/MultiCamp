//#include <stdio.h>
//
//int N;
//int Array[30000 + 10];
//int temp[30000 + 10];
//
//void input()
//{
//	int i;
//	scanf("%d", &N);
//
//	for (i = 0; i < N; i++)
//		scanf("%d", &Array[i]);
//}
//
//void MergeSort(int s, int e)
//{
//	if (s >= e) return; //��������, ��Ұ� 1���� ���	
//	
//	//�׻� ���ʺ��� ȣ��
//	int m = (s + e) / 2;
//	MergeSort(s, m);
//	MergeSort(m + 1, e);
//	
//	//����
//	int i = s, j = m + 1, k = s; // k�� temp�� IDX
//	while ((i <= m) && (j <= e)) //�Ѵ� ���� �����ϰ�쿡�� ���ؼ� ���
//	{
//		if (Array[i] <= Array[j])
//		{
//			//�Ʒ� 3���� ��� temp[k++] = Array[i++] ���ٷ� ��� ó������
//			temp[k] = Array[i];
//			k++;
//			i++;
//		}
//
//		else
//		{
//			temp[k] = Array[j];
//			k++;
//			j++;
//		}
//	}
//
//	//������ ��� ��������. ��� ���� ������ �𸣹Ƿ� �Ѵ� ���ش�.
//	while (i <= m)
//	{
//		temp[k] = Array[i];
//		k++;
//		i++;
//	}
//	while (j <= e)
//	{
//		temp[k] = Array[j];
//		k++;
//		j++;
//	}
//	
//	//���� �迭�� �Űܴ��
//	for (i = s; i < e + 1; i++) Array[i] = temp[i];
//}
//
//void PRT()
//{
//	int i;
//	for (i = 0; i < N; i++)
//		printf("%d ", Array[i]);
//}
//
//int main()
//{
//	input();
//	MergeSort(0, N - 1);
//	PRT();
//
//	return 0;
//}