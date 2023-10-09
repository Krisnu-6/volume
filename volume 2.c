#include<stdio.h>

struct student
      {
      	int rollno;
      	char name [100];
      	int chem_marks;
      	int phy_marks;
      	int maths_marks;
	  };
	  
main()
{
	struct student s[5];
	int i,sum,ave;
	
	for(i=0;i<5;i++)
	{
	
		printf("Enter Student Roll No. = ");
		scanf("%d",&s[i].rollno);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].name);
		printf("Enter Student Chemistry Marks = ");
		scanf("%d",&s[i].chem_Marks);
		printf("Enter Student Physics Marks = ");
		scanf("%d",&s[i].phy_Marks);
		printf("Enter Student Maths Marks = ");
		scanf("%d",&s[i].maths_Marks);
		printf("\n\n\n");
	}
	printf("\nstudent result\n\n");
	for(i=0;i<5;i++)
	
	{
		sum = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
		ave = sum * 100 / 300;
		printf("Student Roll No. = %d\n",s[i].rollno);
		printf("Student Name = %s\n",s[i].name);
	    printf("Student Chemistry Marks = %d\n",s[i].chem_marks);
        printf("Student Physics Marks = %d\n",s[i].phy_marks);
	    printf("Student Maths Marks = %d\n",s[i].maths_marks);
	    printf("Total Marks = %d\n", sum);
	    printf("Total Parentege = %d\n",ave);
	    printf("\n\n\n");
	}
}
	  