#include <stdio.h>

int main(){

    int marks[5];//Declaration of an array that holds 5 marks
    marks[0] = 3;
    marks[1] = 10;
    marks[2] = 33;
    marks[3] = 44;
    marks[4] = 89;


    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d \n", marks[i]);
    }
    



    return 0;
}