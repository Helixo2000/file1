#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// ---------------------VOID CLASS--------------------//    
void apriFirefox()
{
    #ifdef _WIN32
        system("start firefox");
    #elif __APPLE__
        system("open -a firefox");
    #elif __linux__
        system("firefox &");
    #endif
}

void apriChrome()
{
    #ifdef _WIN32
        system("start chrome");
    #elif __APPLE__
        system("open -a chrome");
    #elif __linux__
        system("chrome &");
    #endif
}


void apriOpera()
{
    #ifdef _WIN32
        system("start Opera");
    #elif __APPLE__
        system("open -a Opera");
    #elif __linux__
        system("Opera &");
    #endif
}

void apricmd() 
{
    #ifdef _WIN32
        system("Terminale");
    #elif __APPLE__
        system("Terminale");
    #elif __linux__
        system("Terminale");
    #endif
}



void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #elif __APPLE__
        system("clear");
    #elif __linux__
        system("clear");
    #endif
}
// ---------info void----------//
void info()
{
    printf("Ecco le funzioni disponibili del chatbot:\n");
    printf("- ciao/salve: saluta il chatbot\n");
    printf("- come stai/come va: chiede al chatbot come sta\n");
    printf("- come ti chiami: chiede al chatbot come si chiama\n");
    printf("- apri firefox / google / opera: apre il browser \n");
     printf("- apri cmd: apre il terminale \n");
    printf("- clear: pulisce la chat\n");
    printf("- arrivederci/exit: chiude la conversazione con il chatbot\n");
}

//--------------------------------VOID END CLASS----------------------------//
int main()
{
    char input[100];
    char name[100];

printf("Inserisci il tuo nome: ");
fgets(name, 100, stdin);  // Use fgets to read the user's name
name[strcspn(name, "\n")] = 0;  // Remove the newline character from the name string

printf("Ciao, %s. Come posso aiutarti oggi?\n", name);
printf("Promemoria:Digitando info e inviando il messaggio riceverai una lista di comandi utilizabbili in chat \n", name);

while (1)
{
    printf("%s: ", name);
    fgets(input, 100, stdin);  // Use fgets to read the user's input
    input[strcspn(input, "\n")] = 0;  // Remove the newline character from the input string

    if (strcmp(input, "ciao") == 0 || strcmp(input, "salve") == 0)
    {
        printf(" Zovvi AI: Ciao, %s!\n", name);
    }
    else if (strcmp(input, "come stai") == 0 || strcmp(input, "come va") == 0 || strcmp(input, "come va?") == 0 || strcmp(input, "come stai?") == 0)
    {
        printf(" Zovvi AI: Sono solo un programma informatico, quindi non ho sentimenti. Funziono sempre "
               "al 100%% della mia capacità. Grazie di avermelo chiesto.\n");
    }
    else if (strcmp(input, "come ti chiami") == 0)
    {
        printf(" Zovvi AI: Mi chiamo  Zovvi AI.\n");
    }
//--------------------ELSE CLASS VOID---------------------//

// -------------------ELSE CLASS VOID BROSWER------------------//
    else if (strcmp(input, "apri firefox") == 0)
    {
        apriFirefox();
        printf("Zovvi Ai:Se non possiedi il broswer specificato clicca control+c");
        printf(" Zovvi AI: Firefox è stato aperto.\n");
    }

 else if (strcmp(input, "apri google") == 0)
    {
        apriChrome();
        printf("Zovvi Ai:Se non possiedi il broswer specificato clicca control+c");
        printf(" Zovvi AI: Chrome è stato aperto.\n");
    }

    else if (strcmp(input, "apri opera") == 0)
    {
        apriOpera();
        printf("Zovvi Ai:Se non possiedi il broswer specificato clicca control+c");
        printf(" Zovvi AI: Opera è stato aperto.\n");
    }



// ------------------- END ELSE CLASS VOID BROSWER------------------//



    else if (strcmp(input, "apri cmd") == 0)
    {
        apricmd();
        printf(" Zovvi AI: Terminale è stato aperto.\n");
    }

   else if (strcmp(input, "info") == 0)
    {
        info();
        printf(" Zovvi AI:In questa sezione troverai tutti i comandi il cui è possibile digitare in chat\n");
    }


     else if (strcmp(input, "clear") == 0)
        {
            clearScreen();
            printf(" Zovvi AI: La chat è ora pulita.\n" );
        }

  
    else if (strcmp(input, "arrivederci") == 0 || strcmp(input, "exit") == 0)
    {
        printf(" Zovvi AI: Arrivederci, %s!\n", name);
        break;
    }
    else
    {
        printf(" Zovvi AI: Mi dispiace, non ho capito il tuo input. Potresti riformulare la tua domanda o digitare "
               "'arrivederci' per terminare la nostra conversazione?\n");
    }
//-----------------------------------END ELSE CLASS VOID-------------------//
}

    return 0;

}
