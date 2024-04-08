//Set Array Size

#include<stdio.h>

int main(){
    //Declare an array of four integers:
    int myNumbers[4];
    int i;

    //Add Element to it
    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;

    for(i=0; i<=3; i++){
            printf("%d\n", myNumbers[i]);

    }



    return 0;
}
