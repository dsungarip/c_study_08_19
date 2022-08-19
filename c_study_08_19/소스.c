#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct tagStudent {	//	����ü�� ������ Ÿ�� . ����� ���� ������Ÿ��
	int age;		
	int grade;		// ����ü ���
	char name[18];	// ���� �迭
	struct tagStudent* NextNode;	//���� ����� �ּҰ�
};

typedef struct tagStudent Student;

int main()
{
	Student a = { 10, 3, "monster",NULL };
	Student b = { 11, 2, "monster2",NULL };
	Student c = { 12, 1, "monster3",NULL };

	a.NextNode = &b;	// ���� ����� �ּҰ��� b�� �ּҸ� �Է�
	b.NextNode = &c;

	Student* pnode = &a;
	while (pnode != NULL) {
		printf("�̸�: %s, �г�: %d, ����: %d\n", pnode->name, pnode->grade, pnode->age);
		pnode = pnode->NextNode;	// �ּҰ����� ����ü ����� �����Ҷ� = ȭ��ǥ������ ���
	}

	a.NextNode->NextNode->age = 100;
	a.NextNode->NextNode->grade = 1;
	a.NextNode->NextNode->name[0] = 'D';
	a.NextNode->NextNode->name[1] = 'o';
	a.NextNode->NextNode->name[2] = 'g';
	a.NextNode->NextNode->name[3] = '\0';

	b.NextNode->age = 500;
	b.NextNode->grade = 7;
	b.NextNode->name[0] = 'G';
	b.NextNode->name[1] = 'A';
	b.NextNode->name[2] = 'M';
	b.NextNode->name[3] = 'E';
	b.NextNode->name[4] = '\0';

	printf("�̸�: %s, �г�: %d, ����: %d\n", (&c)->name, (&c)->grade, (&c)->age);

	return 0;
}