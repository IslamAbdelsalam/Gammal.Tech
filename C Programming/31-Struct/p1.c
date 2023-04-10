/*

برنامج يخزن بيانات طالب و يطبعها جنب بعضها

*/

#include <stdio.h>
#include <string.h>

struct student
{
    char name[100], phoneNumber[15];
    float grade;
};

int main()
{
    struct student st;
    strcpy(st.name,"islam");
    strcpy(st.phoneNumber,"012234569774");
    st.grade = 105;
    // char n[100] = "islamradi";

    printf("Hi %s\nyour number is %s\nyour grade => %0.1f\n", st.name, st.phoneNumber, st.grade);
}
//DONE