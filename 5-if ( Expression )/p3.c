/*
برنامج للتجار يطلب من الشخص أن يدخل رقمين مختلفين الاول يعبر عن قيمة مال مبدئى و الثاني يعبر عن اجمالى المال بعد شهر و يحسب قيمة الفرق، اذا كان ربح يطبع 
 " profit = ….  " و إذا كان خسارة يطبع 
" loss = …... "

*/
#include <stdio.h>

int main(){
    float startOfMonth, endOfMonth;

    printf("Start of the month\n");
    scanf("%f",&startOfMonth);

    printf("End of the month\n");
    scanf("%f",&endOfMonth);

    if( endOfMonth > startOfMonth )
        printf("profit = %0.1f\n",endOfMonth-startOfMonth);
    else if (endOfMonth < startOfMonth)
        printf("Loss = %0.2f\n",endOfMonth-startOfMonth);
    else
        printf("أباشا الفلوس مركونه خسارة معنوية");

    return 0;

}
//Done