
#include <stdio.h>

#define min 0.0
#define max 300.0
#define YourFast 4 //  км/год

int main()
{
        //Суто про тебе
    int YourChoice;
    char InTheWay;
    int WeightIsOnYou;
    
        //про всяки у грі
    float LengthOfRoad;


    //Тут я об'являю зміні
    InTheWay = 'n';
    YourChoice = '+';
    WeightIsOnYou = 0;
    LengthOfRoad = 120.0;

    //невеликий опис предисторії
    printf("\n");
    printf("\t%s\n \t%s\n\n", "This world dying... Help him.","The Kingdoms quarreling with himself."); //"You must mines the ore."
    printf("\t%s\n\t%s\n\n\n","Подоружуй і доставляй посилки між країнами для збереження миру.","Адже лише ти це можеш зробити...");

    //тут починаэться гра //Here beginng the game
    while (YourChoice != '-'){
        //printf("%s\n","Направляєшся до столиці Туманного Королівства? (120км)  (Y/N)");

        //вибір дій
        printf("%s\n \t%s\n \t%s\n","Твої дії:","1: Глянути на стан персонажа","2: Описати все навкруги");
        if (InTheWay == 'n')
            printf("\t%s\n","3: Піти на запланований шлях");
        else printf("\t%s\n","3: Зійти з дороги (у пошуках чогось цікавого)");
        
        YourChoice = getchar();


        //наслідки дій
        if (YourChoice == '3'){
            //якщо ти ще не в дорозі, але уже вирішив піти
            if (InTheWay == 'n'){ 
                printf("\t%s\n", "Отож ти відправився в далеку подорож...  (мін. 10 дн. в дорозі)");
                printf("\t%s\n\n","Напрямок до => Столиця Туманного Князівства (120км)");
                
                printf("%s\t %s\n","Скільки годин ти витрачаєш на дорогу?","До 3 год.");

                YourChoice = getchar();
                if ((YourChoice = getchar()) <= '3'){
                    // LengthOfRoad = LengthOfRoad - (YourFast - (YourFast / 100 * (WeightIsOnYou * 5))
                    LengthOfRoad = LengthOfRoad - (YourFast - (YourFast / 20 * WeightIsOnYou) * YourChoice); //воно не правильно все рахує
                    printf("%s\t %4.2f %s\n","Лишилося дороги:", LengthOfRoad, " км...");
                }
            }
        }

        else printf("%s\n","Ти лишився у всоєму старому містечку...");

    }






    
    //fahr = 0;
    // while (fahr <= 300) {
    //         celsius = 5.0 / 9.0 * (fahr-32.0);
    //         printf("%4.0f \t %4.4f \t %4.4f \n" , fahr, celsius, (5.0 / 9.0 * (fahr-32.0)));
    //         fahr = fahr + 30;
    // }
    // for (fahr = min; fahr <= max; fahr = fahr + 20.0)
    //     printf("%3.2f \t %3.2f \n", fahr, (5.0 / 9.0)*(fahr - 32.0) );
    // printf("\n %d %c %s %% \n\n", 5565 ,'g',"str");
    //printf("\n");
    return 0;
}