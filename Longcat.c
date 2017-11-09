#include <stdio.h>
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
    printf(" | |      | | \n");
    printf("/  |      |  \\ \n");
    printf("\\__/      \\__/ \n");
    flushall();
    getchar();
}
            