#include <stdio.h>

struct name {
	char a[20]; //19글자까지 받을 수 있다.(맨 뒤에는 널문자가 들어가야 함.)
};
int main(void)
{
	struct name v;
	printf("이름을 입력하시오. : ");
	scanf_s("%s", v.a, sizeof(v.a));

	printf("당신의 이름은 %s입니다.\n", v.a);

	return 0;
}