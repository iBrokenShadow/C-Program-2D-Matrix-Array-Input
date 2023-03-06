// 2D Array as an Matrix by input //
// Whole Code is Written by ANKUSh GUPTA, aka. Broken Shadow //

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main () {

    system("cls");
    int c1,c2;
    printf("Enter the total limit(x,x) : \n");                          // To getthe Row and Column
    scanf("%d %d", &c1, &c2); printf("\n");

    int ele[c1][c2];
    printf("Enter the Following Elements :-\n");                        // Getting Imput of all Elements into the Array
        for (int i=0; i<=c1-1; i++)
        {
            for (int j=0; j<=c2-1; j++)
            {
                printf("\t(%d,%d) Element: ", i,j);
                scanf("%d", &ele[i][j]);
            }
        }

    system("cls");
    printf("\n");

/* 
Now in the Form of Matrix and i designed the Line bars on row and column using trial and error method
and it totally working and perfect even you put long digits too
*/
    printf("In the form of Matrix : \n");
    printf("       __|");                                    // To put the Line Design
    for (int i=1; i<=c2; i++)
    {
        printf("_______");                                   // To put the Line Design
    }
    printf("\n         |\n         |");                      // To put the Line Design

    for (int i=0; i<=c1-1; i++) {     // row

        for (int j=0; j<=c2-1; j++) {      // column
            printf("  %d  ", ele[i][j]);
        }
        printf("\n         |\n         |");                  // To put the Line Design
    }

/* 
Ths nect Block to Print the Elements line by line simply just for convinience of the User to see
What he put at which specific Element
*/
    printf("\n\n");
    printf("-// Do You Want to Print the Elements Seperatly (y/n): ");
    char r = getche();

    if ((r!='n' || r !='N') && (r=='y' || r=='Y'))
        {
            printf("\n\n");
            for (int i=0; i<=c1-1; i++) 
            {
                for (int j=0; j<=c2-1; j++) 
                {
                    printf("\t(%d,%d) element: %d\n", i,j, ele[i][j]);
                }
            }
        }
    else { printf("\n.\n.\n.\n"); exit(0); }                  // Will Exit the whole code if User enter No or Rather than Yes
    
    printf("\n  ----------------------------------------");
    printf("\n--------------------------------------------");
    getch();
}