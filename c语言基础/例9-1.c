#include"stdio.h"
int main(void)
{struct Student
	{long int num;
	char name[20];
	char sex[10];
	char addr[20];
	}a={1001,"yanglin","men","123 jiangning road"};
	printf("no.:%ld\nname:%s\nsex:%s\naddress:%s\n",a.num,a.name,a.sex,a.addr);
	return 0;

}