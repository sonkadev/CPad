#include <stdio.h>
#include <string.h>

int main(){
    FILE *fl;

    char input[420];
    char input2[420];
    printf("CPAD V 0.0.1 \ntype **/commands for commands\nwrite something\n");
    int exit = 0;
    while (exit == 0){

    gets(input2);
    
    strcat(input, input2); 

    if (strcmp(input2, "**/commands") == 0){
        printf("\n\n===commands\nprefix: **/\n**/save: it will save it as file.txt \n more commands coming soon if my lazy ass will continue the project");
    }
     if (strcmp(input2, "**/save") == 0){
        
        fl = fopen("file.txt", "w");
        fprintf(fl, "%s", input);
        fclose(fl);

        printf("\n\nsaved!");

    }
    if (strcmp(input2, "d") == 0) {
        printf("-.-");
    }
        if (strcmp(input, "**/exit") == 0){
        exit == 1;
        break;
    }

    }

    
  

    


    return 0;
}