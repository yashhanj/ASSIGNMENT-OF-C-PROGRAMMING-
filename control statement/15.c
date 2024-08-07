
/*15. Write a C program to determine eligibility for admission to a professional course based on the following criteria.
Eligibility Criteria : Marks in Maths>=65 and Marks in Phy>=55 and Marks in Chem>=50 and 
Total in all three subject>=190 or
Total in maths and Physics>=140-------output:------------Input the marks obtained in Physics: 65
Input the marks obtained in Chemistry:51 Input the marks obtaiined in Mathematics:72 
Total marks of Maths,Physics and chemistry: 188
Total marks of maths and Physics:137. the candiate is not eligible.*/

#include<stdio.h>
int main()
{
	int Mmarks,Pmarks,Cmarks,total1,total2;
	printf("Admission criteria (eligibility test for your course):-");
	
	printf("\nEnter your marks obtain in Maths:");
	scanf("%d",&Mmarks);
	
	printf("\nEnter your marks obtain in phy:");
	scanf("%d",&Pmarks);
	
	printf("\nEnter your marks obtain in Chem:");
	scanf("%d",&Cmarks);
	
	total1 = Mmarks+Pmarks+Cmarks;
	printf("\nEnter the total of marks in all the subjects: %d ",total1);
	
	total2 = Mmarks+Pmarks;
	printf("\nEnter the total marks of maths and physics: %d",total2);
	
	if (total1>=190 && total2>=140)
	{
		printf("\nyou are eligible");
	} 
	else
	{
		printf("\nyou are not eliglble.");
	}
	
	return 0;
}
