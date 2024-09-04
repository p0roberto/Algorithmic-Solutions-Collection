#include <stdio.h>
 
int main(){ 
    int n, i, a, b, c;
 
    scanf("%d", &n);
 
    for(i=0;i<n;i++){
        scanf("%d %d %d", &a, &b, &c);
        if(c > b && b > a){
            printf("STAIR\n");
        }
        else if(b > a && b > c){
            printf("PEAK\n");
        }
        else{
            printf("NONE\n");
        }
    }
 
    return 0;
}