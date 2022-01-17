#include <stdio.h>

unsigned int NAND(unsigned int A,unsigned int B)
{
    return!(A&B);
}

int main(){
    unsigned char A[8]={0,0,0,0,1,1,1,1};
    unsigned char B[8]={0,0,1,1,0,0,1,1};
    unsigned char C[8]={0,1,0,1,0,1,0,1};
    unsigned char out_nand[8]={0};

    //unsigned char out[8]={0,0,0,0,0,1,1,1};
    unsigned char out[8];
    unsigned char out1[8];


    int count=0;
    printf("A\tB\tC\tA.B+A.C\tA.(B+C)\tNANDOutput");

    for(int i=0;i<8;i++){
        

        out_nand[i]=NAND(NAND(A[i],B[i]),NAND(A[i],C[i]));
        out[i]=A[i]&B[i]|A[i]&C[i];
        out1[i]=A[i]&(B[i]|C[i]);
        
        if(out_nand[i]!=out[i]){
            
            printf("Output Incorrect\n");
            return 0;
        }

        printf("\n%x\t%x\t%x\t%x\t%x\t%x",A[i],B[i],C[i],out[i],out1[i],out_nand[i]);



    }

    printf("\nOutput Matching\n");
    return 0;

}