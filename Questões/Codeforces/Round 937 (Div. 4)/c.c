#include <stdio.h>
 
int main(){
   int n, i, h1, h2, h;
    scanf("%d%*c", &n);
    char hora[5];
 
    for(i=0;i<n;i++){
        
        scanf("%c%c%c%c%c%*c", &hora[0], &hora[1], &hora[2], &hora[3], &hora[4]);
        
 
        h1 = hora[0] - '0';
        h2 = hora[1] - '0';
        h = (10*h1)+h2; 
    
 
        if(h<12){
            if(h==0){
                printf("12:%c%c AM\n",hora[3], hora[4]);
 
            }
            else{
                if(h==11){
                    printf("11:%c%c AM\n", hora[3], hora[4]);
                }
                else if(h==10){
                    printf("10:%c%c AM\n", hora[3], hora[4]);
                }
                else if(h<10){
                    printf("%c%d:%c%c AM\n", hora[0], h, hora[3], hora[4]);
 
                }
            }
            }
        
        else{
            if(h<22){
                h = h - 12;
                if(h==0){
                     printf("12:%c%c PM\n", hora[3], hora[4]);
 
                }
                else{
                    printf("0%d:%c%c PM\n", h, hora[3], hora[4]);
                }
            }
            else{
                if(h == 22){
                    printf("10:%c%c PM\n", hora[3], hora[4]);
                }
                else if(h == 23){
                    printf("11:%c%c PM\n", hora[3], hora[4]);
                }
 
            }
        }
    }
 
    return 0;
}