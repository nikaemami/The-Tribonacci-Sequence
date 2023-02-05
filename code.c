#include <stdio.h>
int main(){
    int i,number,first,second,third,sum;
    //get number of elements in sequence//
    if (scanf("%d", &number)==1){
        
        //get the first 3 numbers of the sequence//
        if (scanf("%d %d %d", &first,&second,&third)==3){
            //do not show anything if the number is 0 or less than 0//
            if (number<=0){
                    return 0;
            }
            if((first>=0) && (second>=0) && (third>=0)){
            //calculate and print all the elements in the sequence//
                    for (i=1;i<=number ;i++){
                        printf("%d, ",first);
                        sum= first+second+third;
                        first=second;
                        second=third;
                        third=sum;
                    }
            }
            //show an error if the inputs are incorrect//
               else{
                printf("illegal input\n");
                return 0;
            }
            }
                else{
                    printf("illegal input\n");
                    return 0;
                }
            }
                else{
                    printf("illegal input\n");
                    return 0;
                }
   
    return 0;
    }
