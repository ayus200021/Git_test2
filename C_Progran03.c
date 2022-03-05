#include<stdio.h>

int total(int a, int b, int c){
    return a+b+c;
}

float percentage(int a, int b, int c){
    return ((a+b+c)/300.0)*100;
}

int main(){
    int m1, m2, m3;
    printf("enter the marks of 1st subject: \n");
    scanf("%d", &m1);
    printf("enter the marks of 2nd subject: \n");
    scanf("%d", &m2);
    printf("enter the marks of 3rd subject: \n");
    scanf("%d", &m3);
    printf("total of all three marks is: %d\n", total(m1, m2, m3));
    printf("percentage of all three marks is: %f\n", percentage(m1, m2, m3));

    return 0;
}
