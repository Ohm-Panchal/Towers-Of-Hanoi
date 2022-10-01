#include<stdio.h>
#include<conio.h>


void hanoiTree(int n,int S[],int I[],int D[]){
    if(n<=0){

    }
    else{
        //Step1:S->I
        hanoiTree(n-1,S,D,I);
         
        //Step2:S->D
        //POP(S[top])--------------------------------------------/
        int item = S[S[8]]; //Getting Disk from top of the tower-S
        S[8] -= 1; //Decreamenting Tower S's top 
        //-------------------------------------------------------/
        //PUSH(D[TOP],item)--------------------------------------/
        D[8] += 1; //Increamenting Tower D's top 
        D[D[8]] = item; 
        //-------------------------------------------------------/
        printf("\nDisk:%d from STACK(%d) to STACK(%d)",item,S[9],D[9]);
        
        //Stepcd3:I->D
        hanoiTree(n-1,I,S,D);
    }
}
void main(){
    //Towers
    /*a, b and c are three towers 
    a[8], b[8] and c[8] = Top of the towers
    a[9], b[9] and c[9] = identifiers of the towers
    */
    int a[10]={3,2,1,0,0,0,0,0,2,1},b[10]={0,0,0,0,0,0,0,0,-1,2},c[10]={0,0,0,0,0,0,0,0,-1,3};

    int n=3; //Number of Disks

    printf("---------Towers Of Hanoi---------");

    hanoiTree(n,a,b,c);

    printf("\n---------------------------------");
}