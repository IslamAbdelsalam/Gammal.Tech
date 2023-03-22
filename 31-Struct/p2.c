/*
برنامج يطلب من المستخدم إدخال اسم وعلامة طالبين ويطبع اسم الطالب الذي تحصل على العلامة الأكبر وبجانبه علامته
*/
#include <stdio.h>
struct student
{
    float grade;
    char name[1000];
};

int main()
{
    struct student s1, s2;

    for (int i = 1; i < 3; i++)
    {
        printf("Enter the name of student no %i:\n",i);
        scanf("%s", s1.name);
        printf("Enter the grade of student no %i\n",i);
        scanf("%f",&s1.grade);
    }

    if (s1.grade > s2.grade)
        printf("%s his grade greater than %s and his grade is %0.1f\n", s1.name, s2.name, s1.grade);
    else if (s2.grade > s1.grade)
        printf("%s his grade greater than %s and his grade is %0.1f\n", s2.name, s1.name, s2.grade);
    else
        printf("They are having the same grade\n");

    return 0;
}
//DONE