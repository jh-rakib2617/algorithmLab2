#include<stdio.h>
int main(){
    int k[]={99,31,10,42,34,77,21,90,18,16};
    int m=10;
    printf("Insertion Sort In Ascending Order\n");
    insertionSortAsc(k,m);
    printf("Insertion Sort In Descending Order\n");
    insertionSortDesc(k,m);
    return 0;
}
void display(int P[],int m){
    int i;
    for(i=0;i<m;i++){
        printf("%d\t",P[i]);
    }
    printf("\n");
}

int insertionSortAsc(int P[],int m){
    int i,j,C[m];

    for(i=0; i<m; i++){
        j=i-1;
        while(C[j]>P[i] && j>=0){
            C[j+1]=C[j];
            j--;
        }
        C[j+1]=P[i];
    }
    display(C,m);
}
int insertionSortDesc(int P[],int m){
    int i,j,C[m];

    for(i=0; i<m; i++){
        j=i-1;
        while(C[j]<P[i] && j>=0){
            C[j+1]=C[j];
            j--;
        }
        C[j+1]=P[i];
    }
    display(C,m);
}
