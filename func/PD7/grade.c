#include <stdio.h>
char checkGrade(int mark);
int main()
{
    int mark;
    char grade;
    scanf("%d", &mark);

    grade = checkGrade(mark);
    printf("%c\n",grade);
}
char checkGrade(int mark)
{
    if (mark >= 80 && mark <= 100)
    {
        return 'A';
    }
    else if (mark >= 60 && mark <= 79)
    {
        return 'B';
    }
    else if (mark >= 40 && mark <= 59)
    {
        return 'C';
    }
    else if (mark < 40)
    {
        return 'F';
    }
}