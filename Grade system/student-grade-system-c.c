/*
    Student Result Management System Features:
    - Accepts student name and 5 subject marks
    - Calculates total, average, and percentage
    - Finds highest and lowest marks
    - Assgin grade
    - Displays pass/fail result

    Author   :Santanu Kumar Sahoo
    Language :C
*/

#include <stdio.h>

int main()
{
  char student_name[30];
 char subject[5][20]={"Math","Physics","chemistry","Odia","English"};
  int mark[5], total = 0, i, fail = 0, highest_mark, lowest_mark;

  float average, percentage;

  printf("Enter Student Name: ");
  fgets(student_name,30,stdin);
  printf("\n");

  printf("Enter marks of 5 subjects:\n");

  for (i = 0; i < 5; i++)
  {
    printf("Enter marks for %s: ", subject[i]);
    scanf("%d", &mark[i]);

    if (mark[i] < 0 || mark[i] > 100)
    {
      printf("Invalid Marks Entered \n");
      return 1;
      
    }
    if (i == 0)
    {
      highest_mark = mark[i];
      lowest_mark = mark[i];
    }
    if (mark[i] > highest_mark)
    {
      highest_mark = mark[i];
    }
    if (mark[i] < lowest_mark)
    {
      lowest_mark = mark[i];
    }
    if (mark[i] < 33)
    {
      printf("Subject %d :Fail\n", i + 1);
      fail = 1;
    }
    else
    {
      printf("Subject %d :Pass\n", i + 1);
    }
    total = total + mark[i];
    printf("\n");
  }

  average = total / 5.0;
  percentage = (total / 500.0) * 100;

  printf("\n=====================================\n");
  printf("       STUDENT REPORT CARD\n");
  printf("=====================================\n");
  printf("Student Name   : %s\n", student_name);
  printf("Total Marks    : %d / 500\n", total);
  printf("Average Marks  : %.2f\n", average);
  printf("Percentage     : %.2f%%\n", percentage);
  printf("Highest Mark   : %d\n", highest_mark);
  printf("Lowest Mark    : %d\n", lowest_mark);

  printf("-------------------------------------\n");

  if (fail == 1)
  {
    printf("Grade          : F\n");
  }
  else if (percentage >= 90)
  {
    printf("Grade          : A\n");
  }
  else if (percentage >= 75)
  {
    printf("Grade          : B\n");
  }
  else if (percentage >= 60)
  {
    printf("Grade          : C\n");
  }
  else if (percentage >= 40)
  {
    printf("Grade          : D\n");
  }
  else
  {
    printf("Grade          : F\n");
  }

  if (fail == 1)
  {
    printf("Overall Result : FAIL\n");
  }
  else
  {
    printf("Overall Result : PASS\n");
  }

  printf("=====================================\n");
  return 0;
}
