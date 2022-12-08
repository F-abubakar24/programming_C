#include<stdio.h>
int grading(int n);
int main()
{
    int n;
    char ans;
    scanf("%d", &n);
    ans = grading(n);
    printf("%c", ans);
    return 0;
}
int grading(int n)
{
    char x;
    if (100 >= n && n >= 80){
        x = 'A';
    }else if(79 >= n && n >= 60){
        x = 'B';
    }else if(59 >= n && n >= 40){
        x = 'C';
    }else if(39 >= n && n >= 0){
        x = 'F';
    }
    return x;
}