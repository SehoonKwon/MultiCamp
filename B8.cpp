//#include <stdio.h>
//
//int Float_To_Int(float n)
//{
//	// 코드설계
//	float cmp;
//	int ans;
//
//	if (n >= 0)
//	{
//		cmp = (int)n + 0.5;
//		if (n >= cmp) ans = (int)n + 1;
//		else ans = (int)n;
//	}
//
//	else
//	{
//		cmp = (int)n -0.5;
//		if (n >= cmp) ans = (int)n;
//		else ans = (int)n - 1;
//	}
//
//	return ans;
//}
//
//void main(void)
//{
//	float f;
//
//	scanf("%f", &f);
//	printf("%d\n", Float_To_Int(f));
//}