#include "stdio.h"


char arr[0];
void countingChar();
void findingcharWH();
void findingcharN();
int main(){

    countingChar();
    findingcharWH();
    printf("\n\n");
    findingcharN();

    return 0;
}

void countingChar() {
    FILE *fptr;

    fptr = fopen("ass.txt", "r");
    char c = fgetc(fptr);
    int i = 0;
    int count = 0;
    while (!feof(fptr)) {

        if (c != 32) {

            arr[i] = c;
            i++;
            count++;
        }

        c = fgetc(fptr);

    }


    printf("index is %d\n",count);


}

void findingcharWH(){

    char myArr[100];
    int i=0;
    int j=0;
    int count=0;


   for(i=0;i<4132;i++){
       if(arr[i]==119 && arr[i+6]==116){
           if(arr[i+1]==105 && arr[i+5]==117){
               count++;
               printf("\n%d->",count);

               for(j=0;j<7;j++) {
                   myArr[j]=arr[i];
                   i++;
               }

               for(j=0;j<7;j++) {
                   printf("%c",myArr[j]);
               }

           }
       }
   }

}

void findingcharN(){

    char myArr[100];
    int i=0;
    int j=0;
    int count=0;


    for(i=0;i<4132;i++){
        if(arr[i]==78 && arr[i+16]==121){
            if(arr[i+1]==97 && arr[i+15]==116){
                count++;
                printf("%d->",count);

                for(j=0;j<17;j++) {
                    myArr[j]=arr[i];
                    i++;
                }

                for(j=0;j<17;j++) {
                    printf("%c",myArr[j]);
                }

            }
        }
    }

}
