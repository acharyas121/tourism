#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *pas;
    char pas1;
    int choice,choice1;
    printf("\t\t\tFILED OF INTEREST\n");
    printf("\t\t\t=================\n\n");
    printf("Press '1' for cultural and religious interest\n");
    printf("Press '2' for Trekking and hiking interest\n");
    printf("Press '3' for Biological interest\n");
    printf("Press '4' for Adventurous interest\n");
    printf("Press '5' for Natural interest\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        goto cultures;
    }
    //if(choice==2)
    //{
    //    goto trekking;
    //}
    //if(choice==3)
    //{
     //   goto biology;
    //}
    //if(choice==4)
    //{
     //   goto adventure;
    //}
    //if(choice==5)
    //{
    //    goto nature;
    //}
    cultures:
        system("cls");
        printf("\t\tLIST:\n");
        printf("1. Pashupatinath Temple\n");
        printf("2. Bouddhanath Stupa\n");
        printf("3. Swayambhunath Stupa\n");
        printf("4. Changunarayan Temple\n");
        printf("6. Manakamana Temple\n");
        printf("7. Lumbini\n");
        printf("8. Chandragiri Temple\n");
        printf("0. Muktinath Temple\n");
        printf("10. Pathivara Temple\n");
        printf("Bindabasini Temple\n");
        printf("12. Gosaikunda\n");
        printf("Press the index number for more information about the place.\n");
        printf("Press '100' to exit to the home page");
        scanf("%d",&choice1);
        if(choice1==1)
        {
            system("cls");
            pas = fopen("1dot1.txt","r");
            pas1 = fgetc(pas);
            while (pas1!=EOF)
            {
               printf("%s",pas1);
            }
            fclose(pas);



        }




}
