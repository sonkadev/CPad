#include <stdio.h>
#include <string.h>

int main(){
    FILE *fl;
    char inputmatrix[420][420];
    int lines = 0;
    char input[420];
    char input2[420];
    printf("CPAD V 0.0.6 \ntype **/commands for commands\nwrite something\n");
    int exit = 0;
    while (exit == 0){
    char filename[260];
    gets(input2);
    FILE *fop;
    FILE *fl2;

    if (strcmp(input2, "**/commands") == 0){
        printf("\n\n===commands\nprefix: **/\n**/save: it will save it as file.txt \n**/open: opens file.txt \n**/exit: i don't think i need to explain this\n**/saveas: save as\nmore commands coming soon!\n");
    }
    else if (strcmp(input2, "**/save") == 0){
        
        fl = fopen("file.txt", "wt");
        int i;
                for (i = 0; i < lines; i++)
                {
                fprintf(fl, inputmatrix[i]);
                fprintf(fl, "\n");
            }
        
        fclose(fl);

        printf("\nsaved!\n");

        
    }
    else if (strcmp(input2, "**/saveas") == 0){
        
        printf("\nenter file's name\n");
        gets(filename);

        
        fl2 = fopen(filename, "wt");
        int i;
                for (i = 0; i < lines; i++)
                {
                fprintf(fl2, inputmatrix[i]);
                fprintf(fl2, "\n");
            }
        
        fclose(fl2);

        printf("\nsaved as %s!\n", filename);
       
    }
     else if (strcmp(input2, "**/openas") == 0){
        
        printf("\nenter file's name\n");
        gets(filename);
        fop = fopen(filename, "r");
        while( fgets (input, 420, fop)!=NULL ) {
            printf("%s", input);
        }
        fclose (fop);
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
         lines = 0;
        }
    /*else if (strcmp(input2, "*import")){
        fop = fopen("file.txt","rb");
        strcat(fop, input);
    }*/
    
    else{
        strcpy(input, input2); 
        
        strcpy(inputmatrix[lines], input2);
        lines++;
    }
    
    }
    return 0;
}

