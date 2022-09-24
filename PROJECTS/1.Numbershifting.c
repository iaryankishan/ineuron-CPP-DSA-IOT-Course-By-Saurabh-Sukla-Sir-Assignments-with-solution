#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<windows.h>
#include<string.h>


int Upkey(int arr[][4]);
int Downkey(int arr[][4]);
int Rightkey(int arr[][4]);
int Leftkey(int arr[][4]);
int creatematrix(int arr[][4]);
void displaymatrix(int arr[][4]);
void gamerules(int arr[][4]);
int winner(int arr[][4]);
void swap(int *x,int *y);
int readkey();


int Upkey(int arr[][4])
{
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                if (arr[i][j] == 0)
                    break;
            if (j < 4)
                break;
        }
        if (i == 3)
            return 0;


        swap(&arr[i][j], &arr[i + 1][j]);
        return 1;
}


int Downkey(int arr[][4])
{
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                if (arr[i][j] == 0)
                    break;
            if (j < 4)
                break;
        }
        if (i == 0) // shifting not possible
            return 0;
        swap(&arr[i][j], &arr[i - 1][j]); // swap numbers

        return 1; // shift up success
}


int Rightkey(int arr[][4])
{
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                if (arr[i][j] == 0)
                    break;
            if (j < 4)
                break;
        }
        if (j == 0) // shifting not possible
            return 0;

        swap(&arr[i][j], &arr[i][j - 1]);

        return 1; // shift up success
    }



int Leftkey(int arr[][4])
{
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                if (arr[i][j] == 0)
                    break;
            if (j < 4)
                break;
        }

        if (j == 3) // shifting not possible
            return 0;

        swap(&arr[i][j], &arr[i][j + 1]);
        return 1; // shift up success
}



int creatematrix(int arr[][4])
{
    int i,j,n=15,num[n],index,lastindex=n-1;
    for(i=0;i<15;i++)
      num[i]=i+1;

      srand(time(NULL));
      for(i=0;i<4;i++)
        for(j=0;j<4;j++)
      {
          if(lastindex>=0)
          {
              index=rand()%(lastindex+1);
              arr[i][j]=num[index];
              num[index]=num[lastindex--];
          }
      }
      arr[i-1][j-1]=0;
}


void displaymatrix(int arr[][4])
{

   int i,j;
   printf("--------------------\n");
   for(i=0;i<4;i++)
   {
       printf("|");
       for(j=0;j<4;j++)
       {
           if(arr[i][j]!=0)
            printf("%2d | ", arr[i][j]);
           else
           printf("   | ");
       }
       printf("\n");
   }
    printf("--------------------\n");
}

void gamerules(int arr[][4])
{
    system("cls");
    int i,j,k=1;
  printf("            RULE OF THIS GAME\n");
    printf("\n1. You can move only one step at a time by arrow key\nMove Up: by arrow key\nMove Down: by Down arrow key\nMove left: by Left arrow key\nMove Right: by Right arrow key\n");
    printf("\n2. You can Move number at empty position only\n");
    printf("\n3. For each valid move: your total number will decrease by 1\n");
    printf("\n4. Winning situation: number in 4*4 matrix should be in order from 1 to 15\n");
    printf("\n            Winning situation:\n\n");
    printf("--------------------\n");
    for(i=0;i<4;i++)
    {
        printf("| ");
        for(j=0;j<4;j++)
        {
            if(arr[i][j]!=0)
            printf("%2d | ",4*i+j+1);
            else
            printf("   |");
        }
        printf("\n");
    }
    printf("--------------------");
        printf("\n5.You can exit the game at any time by pressing 'E' or 'e' ");
        printf("\nSo Try to win in minimum no of move \n");
        printf("\nEnter any key to start.....   ");
        int x = readkey();
    }


int winner(int arr[][4])
{
    int i,j,k=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++,k++)
        if(arr[i][j]!= k  && k != 16)
            break;
        if(j<4)
            break;
    }
    if(j<4)
        return 0;
    return 1;
}

void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    printf("");
}


 int readkey()
 {
     char c;
     c = _getch();
     if(c == -32)
        c = _getch();
     return c ;
 }

int main()
{
    int arr[4][4];
    int chance = 5;
    char username[20];
    int i;
    printf("Enter Player Name: ");
    scanf("%s",&username);
    system("cls");

    while(1)
    {
       creatematrix(arr);
       gamerules(arr);

   while(!winner(arr))
    {
    system("cls");
     if(!chance)
        break;

     printf("\n\n  Player Name %s , Move remaining : %d\n\n",username,chance);
    displaymatrix(arr);

        int key=readkey();
        switch(key)
    {
        case 101:

        case 69:
                printf("\a\a\a\a\a\a\n     Thanks for Playing ! \n\a");
                printf("\nHit 'Enter' to exit the game \n");
                key = readkey();
                return 0;

        case 72:
            if(Upkey(arr))
                chance--;
            break;

        case 80:
            if(Downkey(arr))
                chance--;
            break;
        case 77:
            if(Rightkey(arr))
                chance--;
            break;
        case 75:
            if(Leftkey(arr))
                chance--;
            break;
        default:
        printf("\n\n   \a\a Not Allowed\a");

    }

}

 if(!chance)
    printf("\n   YOU LOSE     \n");
 else
    printf("\n     congratulations  %s for winning this game   \n",username);

 fflush(stdin);
 char check;
 printf("\n    Want play Again \n");
 printf(" Enter 'y' to,play again: ");
 scanf("%c",&check);

 if((check!='y') && (check != 'Y'))
    break;

 //chance=5;
}
return 0;
}

