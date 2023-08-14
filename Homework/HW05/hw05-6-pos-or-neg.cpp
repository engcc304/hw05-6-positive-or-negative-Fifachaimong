/*
    จงรับค่าจากผู้ใชิ และวิเคราะห์ว่าจำนวนดังกล่าวเป็นจำนวนเต็มบวก หรือจำนวนเต็มลบ
    
    Test case:
        Input :
            49

    Output:
        Positive

    Test case:
        Input :
            -90

    Output:
        Negative

*/
#include <stdio.h>
int main(){
    int i;
    printf("Test case:\n");
    printf("Input :\n");
    scanf("%d",&i);
    if (i > 0){
        printf("Output:\n Positive");
    }if(i < 0){
        printf("Output:\n Negative");
    }
    
}