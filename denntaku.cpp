/*
[dentaku.cpp]
Copyright(c)[2021][tadanohiroyuki]
This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(void)
{
	int choice;//演算子
	double g, num;//初期値と入力値

	g = 0;
	while (1)
	{
		printf("1:+,2:-,3:*,4:/,5:sin,6:cos,7:tan,8:log,9:ln,0:終了,から選択");//演算子の入力
		printf("\n");
		scanf("%d", &choice);

		if (choice == 0 || choice > 10)
			break;//計算終了,合計値へ

		printf("数値=");
		scanf("%lf", &num);
		switch (choice)//演算処理 
		{
		case 1:
			g += num;
			break;
		case 2:
			g -= num;
			break;
		case 3:
			g *= num;
			break;
		case 4:
			g /= num;
			break;
		case 5:
			num = sin(num * PI / 180.0);
			break;
		case 6:
			num = cos(num * PI / 180.0);
			break;
		case 7:
			num = tan(num * PI / 180.0);
			break;
		case 8:
			if (num < 0) //真数は0以上のみ
			{
				num = 0;
			}
			else
			{
				num = log10(num);//10を底とするlog
			}
				break;
		case 9:
			if (num < 0) //真数は0以上のみ
			{
				num = 0;
			}
			else 
			{
				num = log(num);//eを底とするlog
			}
			break;
		}
		if (choice > 4 && choice < 10)
		{
			printf("関数=%fの処理 1:+,2:-,3:*,4:/,から符号を選択（初期値0に注意！）", num);//関数の数値を決めた後の演算子を選択
			printf("\n");
			scanf("%d", &choice);

			switch (choice)
			{
			case 1:
				g += num;
				break;
			case 2:
				g -= num;
				break;
			case 3:
				g *= num;
				break;
			case 4:
				g /= num;
				break;
			}
		}
		printf("途中値=%f\n", g);
	}
	printf("合計値=%f\n", g);

	return 0;
}
