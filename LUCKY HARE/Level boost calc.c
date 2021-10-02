#include <stdio.h> <math.h>
int main ()
{
    float vl, hr;
    int  xp, xph, skill, type;

    printf("Category:\n1.Gathering\n2.Artisan\n3.Support\n4.Combat\n");
    scanf("%d",&type);

    switch (type){
        case 1:
        printf("\nSkill:\n1.Archeology\n2.Divination\n3.Farming\n4.Fishing\n5.Hunter\n6.Mining\n7.Woodcutting\n");
        scanf("%d%*c",&skill);

        if((skill == 1)||(skill == 2)||(skill == 4)||(skill == 6)||(skill == 7)){

            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*5.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);

        }else if (skill == 3){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*9.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);

        }if (skill == 5){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*7.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);             
        }break;

        case 2:
        printf("\nSkill:\n1.Crafting\n2.Cooking\n3.Construction\n4.Firemaking\n5.Fletching\n6.Herblore\n7.Runecrafting\n8.Smithing\n");
        scanf("%d%*c",&skill);

        if ((skill == 1)||(skill == 2)||(skill == 4)||(skill == 5)){

            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*7.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);

        }else if ((skill == 3)||(skill == 6)||(skill == 7)||(skill == 8)){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*9.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);            
        }break;

        case 3:
        printf("\nSkill:\n1.Agility\n2.Dungeoneering\n3.Slayer\n4.Thieving\n");
        scanf("%d%*c",&skill);

        if ((skill == 1)||(skill == 2)){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*10.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr); 

        }else if ((skill == 3)||(skill == 4)){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*9.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);            
        }break;

          case 4:
        printf("\nSkills:\n1.Attack\n2.Defense\n3.Magic\n4.Ranged\n5.Strength\n");
        scanf("%d%*c",&skill);

        if ((skill == 1)||(skill == 2)||(skill == 5)){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*7.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);

        }else if ((skill == 3)||(skill == 4)){
            printf("EXP/h:\n");
            scanf("%d%*c",&xph);
            printf("EXP Needed:\n");
            scanf("%d%*c",&xp);

             hr = (xp / xph) + 1;
             vl = hr*8.00;

            printf("Total amount will be: R$%.2f with a total of %.fHRs\n", vl, hr);            
        }break;

        default:
            printf("Invalid option");

    }
    return 0;
}
