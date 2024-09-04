#include <stdio.h>
#include <string.h>
 
int main(){
    int n, tam, i, cont, aux;
    char palavra[100];
    scanf("%d\n", &n);
 
    while(n){
        cont = 0;
        scanf("%[^\n]s", palavra);
        getchar();
        tam = strlen(palavra);
        for(i=0;i<tam-1;i++){
            if(palavra[i] != palavra[i+1]){
                cont++;
                aux = palavra[i];
                palavra[i] = palavra[i+1];
                palavra[i+1] = aux;
                break;
            }
        }
        if(cont == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            printf("%s\n", palavra);
        }
        n--;
    }
 
    return 0;
}