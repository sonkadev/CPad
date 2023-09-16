#include <stdio.h>
#include <string.h>

int main(){
    FILE *fl;

    char input[420];
    char input2[420];
    printf("CPAD V 0.0.2 \ntype **/commands for commands\nwrite something\n");
    int exit = 0;
    while (exit == 0){

    gets(input2);
    FILE *fop;
    

    if (strcmp(input2, "**/commands") == 0){
        printf("\n\n===commands\nprefix: **/\n**/save: it will save it as file.txt \n**/open: opens file.txt \n **/exit: i don't think i need to explain this\nmore commands coming soon!");
    }
    else if (strcmp(input2, "**/save") == 0){
        
        fl = fopen("file.txt", "w");
        input[0] = ' ';
        fprintf(fl, input);
        fclose(fl);

        printf("\n\nsaved!");

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
    else{
        strcat(input, input2); 
    }

    }
    return 0;
}

