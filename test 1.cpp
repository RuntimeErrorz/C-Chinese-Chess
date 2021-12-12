//#include "chess.h"
//#include <stdio.h>
//
//extern qiZi_T board[MAX_ROW][MAX_COL];
//extern bool player;
//extern locate_T list[2][16];
//
//int main()
//{
//	initialize();
//	int a, b, c, d;
//	int n=0;
//	while (1)
//	{
//		show(n);
//		scanf_s("%d %d %d %d", &a, &b, &c, &d);
//		n = isLegal(a, b, c, d);
//		printf("\n");
//		for (int i = 9; i >= 0; i--)
//		{
//			for (int j = 0; j <= 8; j++)
//				printf("%c ", board[i][j].type);
//			printf("\n");
//		}
//		printf("Return = %d\n", n);
//		if (n == 0)
//		{
//			board[d][c] = board[b][a];
//			board[b][a].type = 'k';
//			player = !player;
//		}
//	}
//	return 0;
//}