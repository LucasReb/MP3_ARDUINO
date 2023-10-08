// DECLARAÇÕES
#include <LiquidCrystal.h>

#define NOTE_B0 31
#define NOTE_C1 33
#define NOTE_CS1 35
#define NOTE_D1 37
#define NOTE_DS1 39
#define NOTE_E1 41
#define NOTE_F1 44
#define NOTE_FS1 46
#define NOTE_G1 49
#define NOTE_GS1 52
#define NOTE_A1 55
#define NOTE_AS1 58
#define NOTE_B1 62
#define NOTE_C2 65
#define NOTE_CS2 69
#define NOTE_D2 73
#define NOTE_DS2 78
#define NOTE_E2 82
#define NOTE_F2 87
#define NOTE_FS2 93
#define NOTE_G2 98
#define NOTE_GS2 104
#define NOTE_A2 110
#define NOTE_AS2 117
#define NOTE_B2 123
#define NOTE_C3 131
#define NOTE_CS3 139
#define NOTE_D3 147
#define NOTE_DS3 156
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_FS3 185
#define NOTE_G3 196
#define NOTE_GS3 208
#define NOTE_A3 220
#define NOTE_AS3 233
#define NOTE_B3 247
#define NOTE_C4 262
#define NOTE_CS4 277
#define NOTE_D4 294
#define NOTE_DS4 311
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_FS4 370
#define NOTE_G4 392
#define NOTE_GS4 415
#define NOTE_A4 440
#define NOTE_AS4 466
#define NOTE_B4 494
#define NOTE_C5 523
#define NOTE_CS5 554
#define NOTE_D5 587
#define NOTE_DS5 622
#define NOTE_E5 659
#define NOTE_F5 698
#define NOTE_FS5 740
#define NOTE_G5 784
#define NOTE_GS5 831
#define NOTE_A5 880
#define NOTE_AS5 932
#define NOTE_B5 988
#define NOTE_C6 1047
#define NOTE_CS6 1109
#define NOTE_D6 1175
#define NOTE_DS6 1245
#define NOTE_E6 1319
#define NOTE_F6 1397
#define NOTE_FS6 1480
#define NOTE_G6 1568
#define NOTE_GS6 1661
#define NOTE_A6 1760
#define NOTE_AS6 1865
#define NOTE_B6 1976
#define NOTE_C7 2093
#define NOTE_CS7 2217
#define NOTE_D7 2349
#define NOTE_DS7 2489
#define NOTE_E7 2637
#define NOTE_F7 2794
#define NOTE_FS7 2960
#define NOTE_G7 3136
#define NOTE_GS7 3322
#define NOTE_A7 3520
#define NOTE_AS7 3729
#define NOTE_B7 3951
#define NOTE_C8 4186
#define NOTE_CS8 4435
#define NOTE_D8 4699
#define NOTE_DS8 4978
#define REST 0
// ...

/* Consultar https://github.com/robsoncouto/arduino-songs para restante das notas
É notável dizer que todas foram usadas, porém serão omitidas no relatório para
não consumir muitas linhas, o mesmo se aplica para os arrays de música abaixo. 
*/

int godfather[] = {
    REST, 4, REST, 8, REST, 8, REST, 8, NOTE_E4, 8, NOTE_A4, 8, NOTE_C5, 8, // 1
    NOTE_B4, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_A4, 8, NOTE_F4, 8, NOTE_G4, 8,
    NOTE_E4, 2, NOTE_E4, 8, NOTE_A4, 8, NOTE_C5, 8,
    NOTE_B4, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_A4, 8, NOTE_C5, 8, NOTE_A4, 8, NOTE_E4, 8, NOTE_DS4, 8,

    NOTE_D4, 2, NOTE_D4, 8, NOTE_F4, 8, NOTE_GS4, 8, // 5
    NOTE_B4, 2, NOTE_D4, 8, NOTE_F4, 8, NOTE_GS4, 8,
    NOTE_A4, 2, NOTE_C4, 8, NOTE_C4, 8, NOTE_G4, 8,
    NOTE_F4, 8, NOTE_E4, 8, NOTE_G4, 8, NOTE_F4, 8, NOTE_F4, 8, NOTE_E4, 8, NOTE_E4, 8, NOTE_GS4, 8,

    NOTE_A4, 2, REST, 8, NOTE_A4, 8, NOTE_A4, 8, NOTE_GS4, 8, // 9
    NOTE_G4, 2, NOTE_B4, 8, NOTE_A4, 8, NOTE_F4, 8,
    NOTE_E4, 2, NOTE_E4, 8, NOTE_G4, 8, NOTE_E4, 8,
    NOTE_D4, 2, NOTE_D4, 8, NOTE_D4, 8, NOTE_F4, 8, NOTE_DS4, 8,

    NOTE_E4, 2, REST, 8, NOTE_E4, 8, NOTE_A4, 8, NOTE_C5, 8, // 13

};

int imperialMarch[] = {
    NOTE_A4, -4, NOTE_A4, -4, NOTE_A4, 16, NOTE_A4, 16, NOTE_A4, 16, NOTE_A4, 16, NOTE_F4, 
    8,  REST,  8,  NOTE_A4,  -4,  NOTE_A4,  -4,  NOTE_A4,  16,  NOTE_A4,  16,  NOTE_A4,  16,  NOTE_A4,  16,  NOTE_F4, 8,
    REST, 8, NOTE_A4, 4, NOTE_A4, 4, NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16, NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16, NOTE_A4, 2,
    NOTE_E5, 4, NOTE_E5, 4, NOTE_E5, 4, NOTE_F5, -8, NOTE_C5, 16, NOTE_A4, 4, NOTE_F4, -8, NOTE_C5, 16, NOTE_A4, 2, NOTE_A5, 4,
    NOTE_A4, -8, NOTE_A4, 16, NOTE_A5, 4, NOTE_GS5, -8, NOTE_G5, 16, NOTE_DS5, 16, NOTE_D5, 16, NOTE_DS5, 8, REST, 8, NOTE_A4, 8, NOTE_DS5,
    4, NOTE_D5, -8, NOTE_CS5, 16, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 16, REST, 8, NOTE_F4, 8, NOTE_GS4, 4, NOTE_F4, -8, NOTE_A4, -16, NOTE_C5, 4,
    NOTE_A4, -8, NOTE_C5, 16, NOTE_E5, 2, NOTE_A5, 4, NOTE_A4, -8, NOTE_A4, 16, NOTE_A5, 4, NOTE_GS5, -8, NOTE_G5, 16, NOTE_DS5, 16, NOTE_D5, 16, NOTE_DS5, 8, REST, 8, NOTE_A4,
    8, NOTE_DS5, 4, NOTE_D5, -8, NOTE_CS5, 16, NOTE_C5, 16, NOTE_B4, 16, NOTE_C5, 16, REST, 8, NOTE_F4, 8, NOTE_GS4, 4, NOTE_F4, -8, NOTE_A4,
};

int zelda[] = {
    NOTE_E4, 2, NOTE_G4, 4, NOTE_D4, 2, NOTE_C4,
    8,NOTE_D4,8,NOTE_E4,2,NOTE_G4,4,NOTE_D4,-2,NOTE_E4,2,NOTE_G4,4,
    NOTE_D5, 2, NOTE_C5, 4, NOTE_G4, 2, NOTE_F4, 8, NOTE_E4, 8, NOTE_D4, -2, NOTE_E4, 2, NOTE_G4, 4, NOTE_D4, 2, NOTE_C4, 8,
    NOTE_D4, 8, NOTE_E4, 2, NOTE_G4, 4, NOTE_D4, -2, NOTE_E4, 2, NOTE_G4, 4,
};

int harryPotter[] = {
    REST, 2, NOTE_D4, 4, NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, NOTE_G4, 2, // A
    NOTE_D5, 4, NOTE_C5, -2, NOTE_A4, -2, NOTE_G4, -4, NOTE_AS4, 8,        // B
    NOTE_A4, 4, NOTE_F4, 2, NOTE_GS4, 4, NOTE_D4, -1, NOTE_D4, 4,          // C
    NOTE_G4, -4, NOTE_AS4, 8, NOTE_A4, 4, NOTE_G4, 2, NOTE_D5, 4,          // D
    NOTE_F5, 2, NOTE_E5, 4, NOTE_DS5, 2, NOTE_B4, 4, NOTE_DS5,             // E
    -4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_CS4, 2, NOTE_B4, 4,                  // F
    NOTE_G4, -1, NOTE_AS4, 4, NOTE_D5, 2, NOTE_AS4, 4, NOTE_D5,            // G
    2, NOTE_AS4, 4, NOTE_DS5, 2, NOTE_D5, 4, NOTE_CS5, 2, NOTE_A4,         // H
    4, NOTE_AS4, -4, NOTE_D5, 8, NOTE_CS5, 4, NOTE_CS4, 2,                 // I
    NOTE_D4, 4, NOTE_D5, -1, REST, 4, NOTE_AS4, 4,                         // J

};

// CÓDIGO
// Declaração LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Declaração variaveis escopo global
int musicDisplay = 0;
int continuaNota = 0;
boolean selectedMusic = false;
boolean playing = false;
boolean startedSong = false;

// ARRAY MUSICAS
const String menuItems[6] = {"Bem vindo ao MP3", "-> Godfather", "-> Star Wars", "-> Zelda", "-> Harry Potter", "-> ???"};

void setup()
{
    lcd.begin(16, 2);
    pinMode(6, INPUT_PULLUP); // STOP VOLTA MENU
    pinMode(7, INPUT_PULLUP); // PLAY PAUSE
    pinMode(8, INPUT_PULLUP); // UP
    pinMode(9, INPUT_PULLUP); // DOWN
    pinMode(10, OUTPUT);      // SPEAKER
    pinMode(0, OUTPUT);       // LED VERMELHO
    pinMode(1, OUTPUT);       // LED VERDE
}

// METHODS
void playSong(int melody[], int tamanho, int starterNote)
{   
    // ALTERA AS VARIAVEIS GLOBAIS
    startedSong = true;
    int buzzer = 10;
    int tempo;

    // DEFINE O TEMPO CORRETO PARA CADA MÚSICA
    switch (musicDisplay)
    {
    case 1:
        tempo = 80;
        break;
    case 2:
        tempo = 144;
        break;
    case 3:
        tempo = 108;
        break;
    case 4:
        tempo = 144;
        break;
    case 5:
        tempo = 114;
        break;
    default:
        tempo = 100;
        break;
    }

    // CALCULA O TAMANHO DA MÚSICA
    int notes = tamanho / 2;
    int wholenote = (60000 * 4) / tempo;
    lcd.clear();
    
    // PERCORRE TODO O ARRAY DA MÚISICA 
    for (int thisNote = starterNote; thisNote < notes * 2; thisNote += 2)
    {   
        // ACENDE A LUZ VERDE E APAGA O LED VERMELHO PARA SINALIZAR QUE A MUSICA ESTA SENDO REPRODUZIDA
        digitalWrite(1, LOW);
        digitalWrite(0, HIGH);
        if (playing)
        {
            displayInfo();
            int divider = 0, noteDuration = 0;

            divider = melody[thisNote + 1];
            if (divider > 0)
            {
                noteDuration = (wholenote) / divider;
            }
            else if (divider < 0)
            {
                noteDuration = (wholenote) / abs(divider);
                noteDuration *= 1.5;
            }

            if (melody[thisNote] == REST)
            {
                delay(noteDuration);
            }
            else
            {
                tone(buzzer, melody[thisNote], noteDuration * 0.9);
                delay(noteDuration);
                noTone(buzzer);
            }

            // CODICIONAL QUE VERIFICA SE FOI REALIZADA UMA REQUISICAO DE PAUSE
            if (digitalRead(7) == LOW)
            {
                while (digitalRead(7) == LOW)
                {
                }
                playPause();

                if (!playing)
                {
                    continuaNota = thisNote;
                    noTone(buzzer);
                    break;
                }
            }
        }

        // LISTENERS PARA EXECUTAR AS FUNÇÕES DOS BOTÕES
        // STOP
        if (digitalRead(6) == LOW)
        {
            while (digitalRead(6) == LOW)
            {
            }
            stopMusic();
            startedSong = false;
        }

        // PLAY PAUSE
        if (digitalRead(7) == LOW)
        {
            while (digitalRead(7) == LOW)
            {
            }
            playPause();

            if (!playing)
            {
                continuaNota = thisNote;
                noTone(buzzer);
                break;
            }
        }
    }
    playing = false;
    displayInfo();
    digitalWrite(1, HIGH);
    digitalWrite(0, LOW);
    lcd.clear();
}

// METODO DE MANIPULAÇÃO DE STRING PARA REMOVER A SETA NO INICIO DA STRING E EXIBIR O NOME DA MUSICA DE MANEIRA MAIS AGRADAVEL
String pulaSeta(const String &input)
{
    int arrowPos = input.indexOf("->");
    if (arrowPos != -1 && arrowPos < input.length() - 2)
    {
        return input.substring(arrowPos + 3);
    }
    return input;
}

// METODO RESPOSAVEL POR ENVIAR USUARIO DE VOLTA AO MENU, TAMBEM PARANDO A MUSICA
void stopMusic()
{
    if (musicDisplay != 0 && selectedMusic)
    {
        playing = false;
        selectedMusic = false;
        startedSong = false;
    }

    if (musicDisplay == 0)
    {
        musicDisplay += 1;
    }

    lcd.clear();
}

// METODO RESPONSAVEL POR INICIAR A REPRODUÇÃO DE UMA MÚSICA E POR PARAR ESSA REPRODUÇÃO
void playPause()
{
    if (musicDisplay != 0)
    {
        playing = !playing;
        selectedMusic = true;

        // SELECIONA A MUSICA A SER TOCADA ATRAVES DA VARIAVEL GLOBAL QUE E MANIPULADA PELOS METODOS UP E DOWN
        if (musicDisplay == 1)
        {
            int tamanhoDoArray = sizeof(godfather) / sizeof(godfather[0]);
            if (startedSong)
            {
                playSong(godfather, tamanhoDoArray, continuaNota);
            }
            else
            {
                playSong(godfather, tamanhoDoArray, 0);
            }
        }
        if (musicDisplay == 2)
        {
            int tamanhoDoArray = sizeof(imperialMarch) / sizeof(imperialMarch[0]);
            if (startedSong)
            {
                playSong(imperialMarch, tamanhoDoArray, continuaNota);
            }
            else
            {
                playSong(imperialMarch, tamanhoDoArray, 0);
            }
        }
        if (musicDisplay == 3)
        {
            int tamanhoDoArray = sizeof(zelda) / sizeof(zelda[0]);
            if (startedSong)
            {
                playSong(zelda, tamanhoDoArray, continuaNota);
            }
            else
            {
                playSong(zelda, tamanhoDoArray, 0);
            }
        }

        if (musicDisplay == 4)
        {
            int tamanhoDoArray = sizeof(harryPotter) / sizeof(harryPotter[0]);
            if (startedSong)
            {
                playSong(harryPotter, tamanhoDoArray, continuaNota);
            }
            else
            {
                playSong(harryPotter, tamanhoDoArray, 0);
            }
        }
        if (musicDisplay == 5)
        {
            int tamanhoDoArray = sizeof(rickroll) / sizeof(rickroll[0]);
            if (startedSong)
            {
                playSong(rickroll, tamanhoDoArray, continuaNota);
            }
            else
            {
                playSong(rickroll, tamanhoDoArray, 0);
            }
        }
    }
    else
    {
        musicDisplay += 1;
    }

    lcd.clear();
}

// ALTERA VARIAVEL GLOBAL PARA NAVEGAR ENTRE AS MUSICAS
void upMov()
{
    musicDisplay = (musicDisplay == 5) ? 1 : musicDisplay + 1;
    lcd.clear();
}

// ALTERA VARIAVEL GLOBAL PARA NAVEGAR ENTRE AS MUSICAS
void downMov()
{
    musicDisplay = (musicDisplay == 1) ? 5 : musicDisplay - 1;
    lcd.clear();
}

// EXIBE TODAS AS INFORMAÇÕES NECESSÁRIAS DENTRO DO LCD
void displayInfo()
{

    if (!selectedMusic)
    {
        lcd.setCursor(0, 0);
        lcd.print(menuItems[musicDisplay]);
    }
    else
    {
        lcd.setCursor(0, 0);
        lcd.print(pulaSeta(menuItems[musicDisplay]));
        lcd.setCursor(0, 1);
        lcd.print(playing ? "Reproduzindo" : "Pausado");
    }
}

// MAIN LOOP
// DENTRO DO LOOP ADICIONAMOS LISTENERS DOS BOTÕES PARA ACIONAR OS MÉTODOS DECLARADOS ACIMA
void loop()
{
    // STOP
    if (digitalRead(6) == LOW)
    {
        while (digitalRead(6) == LOW)
        {
        }
        stopMusic();
    }

    // PLAY PAUSE
    if (digitalRead(7) == LOW)
    {
        while (digitalRead(7) == LOW)
        {
        }
        playPause();
    }

    if (!selectedMusic)
    {
        // UP
        if (digitalRead(8) == LOW)
        {
            while (digitalRead(8) == LOW)
            {
            }
            upMov();
        }

        // DOWN
        if (digitalRead(9) == LOW)
        {
            while (digitalRead(9) == LOW)
            {
            }
            downMov();
        }
    }

    displayInfo();
    delay(110);
}
