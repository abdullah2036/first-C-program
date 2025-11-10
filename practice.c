#include<stdio.h>
#include<math.h>

int comp (){
    float x, y;

    printf("enter x value\n");
    scanf("%f", &x);
    printf("enter y value\n");
    scanf("%f", &y);

    x = round(x * 100) / 100;
    y = round(y * 100) / 100;

    if(x > y) {
        printf("%.1f is greater than %.1f\n", x, y);
    }
    else if(x == y) {
        printf("%.1f is equal to %.1f\n", x, y);
    }
    else if(x < y) {
        printf("%.1f is greater than %.1f\n", y, x);
    }
    else {
        printf("invalid input");
    }
    return 0;

}
int main() {

    printf("hello world, from c\n");
    return comp();


}