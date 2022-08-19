#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct tagStudent {	//	구조체형 데이터 타입 . 사용자 정의 데이터타입
	int age;		
	int grade;		// 구조체 멤버
	char name[18];	// 문자 배열
	struct tagStudent* NextNode;	//다음 노드의 주소값
};

typedef struct tagStudent Student;

int main()
{
	Student a = { 10, 3, "monster",NULL };
	Student b = { 11, 2, "monster2",NULL };
	Student c = { 12, 1, "monster3",NULL };

	a.NextNode = &b;	// 다음 노드의 주소값에 b의 주소를 입력
	b.NextNode = &c;

	Student* pnode = &a;
	while (pnode != NULL) {
		printf("이름: %s, 학년: %d, 나이: %d\n", pnode->name, pnode->grade, pnode->age);
		pnode = pnode->NextNode;	// 주소값으로 구조체 멤버에 접근할때 = 화살표연산자 사용
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

	printf("이름: %s, 학년: %d, 나이: %d\n", (&c)->name, (&c)->grade, (&c)->age);

	return 0;
}