#include <stdio.h>
#include <stdlib.h>

void writefile(int);

int main()
{
    int i;
    int length;
    printf("Please enter the length of the Long cat you would like \n");
    printf("The minimum length is 240 Characthers \n");
    scanf("%d",&length);
    printf("   /\\___/\\ \n");
    printf("  /       \\ \n");
    printf(" |  #    # | \n");
    printf(" \\     @   | \n");
    printf("  \\   _|_ / \n");
    printf("   /      \\______ \n");
    printf("  / _______ ___  \\ \n");
    printf("  |_____   \\  \\__/ \n");
    printf("  |     \\__/ \n");
    printf("  |       | \n");
    for(i=0; i < length;i++)
    {
    printf("  |       | \n");
    };
    printf("  /       \\ \n");
    printf(" /   ____  \\ \n");
    printf(" |  /    \\  | \n");
    printf(" |  |      | | \n");
    printf("/   |      |  \\ \n");
    printf("\\__/      \\__/ \n");
    
    writefile(length);
    
    flushall();
    getchar();
}

void writefile(int length)
{
  FILE * fp;
  int i;
    
  fp = fopen("longcat.txt","w+");
  
    fprintf(fp,"   /\\___/\\ \n");
    fprintf(fp,"  /       \\ \n");
    fprintf(fp," |  #    # | \n");
    fprintf(fp," \\     @   | \n");
    fprintf(fp,"  \\   _|_ / \n");
    fprintf(fp,"   /      \\______ \n");
    fprintf(fp,"  / _______ ___  \\ \n");
    fprintf(fp,"  |_____   \\  \\__/ \n");
    fprintf(fp,"  |     \\__/ \n");
    fprintf(fp,"  |       | \n");
    for(i=0; i < length;i++)
    {
    fprintf(fp,"  |       | \n");
    };
    fprintf(fp,"  /       \\ \n");
    fprintf(fp," /   ____  \\ \n");
    fprintf(fp," |  /    \\  | \n");
    fprintf(fp," |  |      | | \n");
    fprintf(fp,"/   |      |  \\ \n");
    fprintf(fp,"\\__/      \\__/ \n");
  
}
            