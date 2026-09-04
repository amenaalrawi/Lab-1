#include <stdio.h>
#include "status.h"
#include "student.h"

int main(){
    printf("%d\n", ENROLLED);
    student_t student1;

    //Build blocks of programming exercise 3
    int num;
    printf("Please enter a number : ");
    scanf("%d", &num); 
    if (num % 3 == 0 && num % 5 == 0)
        printf("foobar\n");
    else if (num % 3 == 0)
        printf("foo\n");
    else if (num % 5 == 0)
        printf("bar\n");
    
    return 0;
}