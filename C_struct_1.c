#include <stdio.h>

struct name {
	char a[20]; //19���ڱ��� ���� �� �ִ�.(�� �ڿ��� �ι��ڰ� ���� ��.)
};
int main(void)
{
	struct name v;
	printf("�̸��� �Է��Ͻÿ�. : ");
	scanf_s("%s", v.a, sizeof(v.a));

	printf("����� �̸��� %s�Դϴ�.\n", v.a);

	return 0;
}