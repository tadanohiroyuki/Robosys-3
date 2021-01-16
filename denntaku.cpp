/*
[sqrt_Python1.py]
Copyright(c)[year][tadanohiroyuki]
This software is released under the MIT License.
http://opensource.org/licenses/mit-license.php
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14
int main(void)
{
	int choice;//���Z�q
	double g, num;//�����l�Ɠ��͒l

	g = 0;
	while (1)
	{
		printf("1:+,2:-,3:*,4:/,5:sin,6:cos,7:tan,8:log,9:ln,0:�I��,����I��");//���Z�q�̓���
		printf("\n");
		scanf("%d", &choice);

		if (choice == 0 || choice > 10)
			break;//�v�Z�I��,���v�l��

		printf("���l=");
		scanf("%lf", &num);
		switch (choice)//���Z���� 
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
			if (num < 0) //�^����0�ȏ�̂�
			{
				num = 0;
			}
			else
			{
				num = log10(num);//10���Ƃ���log
			}
				break;
		case 9:
			if (num < 0) //�^����0�ȏ�̂�
			{
				num = 0;
			}
			else 
			{
				num = log(num);//e���Ƃ���log
			}
			break;
		}
		if (choice > 4 && choice < 10)
		{
			printf("�֐�=%f�̏��� 1:+,2:-,3:*,4:/,���畄����I���i�����l0�ɒ��ӁI�j", num);//�֐��̐��l�����߂���̉��Z�q��I��
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
		printf("�r���l=%f\n", g);
	}
	printf("���v�l=%f\n", g);

	return 0;
}
