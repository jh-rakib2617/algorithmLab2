#include <stdio.h>

int main(){
    int s=10;
    int D[10] = {27,16,15,19,57,7,22,48,9,13};
    printf("Bubble Sort In Ascending Order\n");
    bubbleSortAsc(D,s);
    printf("Bubble Sort In Descending Order\n");
    bubbleSortDesc(D,s);
    return 0;
}
void bubbleSortAsc(int D[], int s)
{
    int i, j,temp;
    for (i=0; i<s-1; i++){
        for (j=0; j<s-i-1; j++){
            if (D[j] > D[j+1]){
                temp = D[j];
                D[j] = D[j+1];
                D[j+1] = temp;
            }
        }
    }
    display(D,s);
}
void bubbleSortDesc(int D[], int s)
{
    int i, j,temp;
    for (i=0; i<s-1; i++){
        for (j=0; j<s-i-1; j++){
            if (D[j] < D[j+1]){
                temp = D[j];
                D[j] = D[j+1];
                D[j+1] = temp;
            }
        }
    }
    display(D,s);
}

void display(int D[],int s){
    int i;
    for(i=0;i<s;i++){
        printf("%d\t",D[i]);
    }
    printf("\n");
}
