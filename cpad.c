#include <stdio.h>
#include <string.h>

int main(){
    FILE *fl;

    char input[420];
    char input2[420];
    printf("CPAD V 0.0.4 \ntype **/commands for commands\nwrite something\n");
    int exit = 0;
    while (exit == 0){

    gets(input2);
    FILE *fop;
    

    if (strcmp(input2, "**/commands") == 0){
        printf("\n\n===commands\nprefix: **/\n**/save: it will save it as file.txt \n**/open: opens file.txt \n**/exit: i don't think i need to explain this\nmore commands coming soon!\n");
    }
    else if (strcmp(input2, "**/save") == 0){
        
        fl = fopen("file.txt", "wt");

        fprintf(fl, input);
        fclose(fl);

        printf("\nsaved!\n");

    }
    else if (strcmp(input2, "**/exit") == 0){
        exit == 1;
        break;
    }
    else if (strcmp(input2, "**/open") == 0){
        fop = fopen("file.txt","r");    
        fgets(input, 420, fop);
        printf("%s", input);
        fclose(fop);
    }
     else if (strcmp(input2, "**/clear") == 0){
         strcpy(input, " "); 
         strcpy(input2, " "); 
        }
    /*else if (strcmp(input2, "*import")){
        fop = fopen("file.txt","rb");
        strcat(fop, input);
    }
*/
    else{
        strcpy(input, input2); 
    }
    
    }
    return 0;
}

