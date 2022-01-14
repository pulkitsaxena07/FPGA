#include <stdio.h>

int main(){
    unsigned char  A=0x01,B=0x01,C=0x10;
    unsigned char out1;
    unsigned char out2;
    out1 = A&B|B&C;
    out2=A&(B|C);

    if(out1==out2)
        printf("Follows Distributive law");
    else
        printf("Error");
    return 0;
}