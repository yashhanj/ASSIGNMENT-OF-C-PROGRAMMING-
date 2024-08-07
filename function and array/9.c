/* 9. WAP to show difference between struture ans union.*/
//difference in static
#include<stdio.h>
struct student {
	int rollno;
	float p;
	char grade;
	
};
union roll {
	int n1;
	char ch1;
	
};

int main()
{
	struct student s1;
	int n,i;
	printf("Enter the n:");
	scanf("%d",&n);
	
	s1.rollno=1;
	s1.p=95.6;
	s1.grade='A';
	printf("\n----->struture operation<-------");
	
		printf(" %d\n",s1.rollno);
		printf(" %c\n",s1.grade);
		printf("%.2f\n",s1.p);
		
	union roll r1;
	r1.n1=65;
	r1.ch1='a';
	
	printf("\n------->union operation<--------");
		printf(" %d\n",r1.n1);
		printf(" %c\n",r1.n1);
		printf(" %d\n",r1.ch1);
		printf(" %c\n",r1.ch1);		
	return 0;

}
