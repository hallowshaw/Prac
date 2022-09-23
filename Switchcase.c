#include<stdio.h>
struct marks
{
	int rollno;
	float chem, maths, phy;
};
int main(void)
{
	int i;
	struct marks s[2];
	for(i=1; i<=2; i++)
	{
		printf("Enter the rollno of student %d:\n", i);
		scanf("%d", &s[i].rollno);
		printf("Enter the marks of Chemistry of student %d:\n", i);
		scanf("%d", &s[i].chem);
		printf("Enter the marks of Maths of student %d:\n", i);
		scanf("%d", &s[i].maths);
		printf("Enter the marks of Physics of student %d:\n", i);
		scanf("%d", &s[i].phy);
	}
	for(i=1;i<=2;i++)
	{
        printf("Percentage of Student %d is %f\n", i, (s[i].chem+s[i].maths+s[i].phy)/3.0);
	}
}