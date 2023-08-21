#include <SPI.h>
#include <SD.h>

#define pinSensor A0
#define chipSelect 10
#define arquivo_name "dados.txt"

File data_File;

void escrever_arquivo(dados)
{

  dataFile = SD.open(nome_arquivo, FILE_WRITE);
  if (dataFile)
  {
    dataFile.println(dados);
    dataFile.close();
  }
  else
  {
    Serial.println("Erro ao abrir o arquivo");
  }
}

void setup()
{
  Serial.begin(9600);

  pinMode(pinSensor, INPUT);

  if (!SD.begin(chipSelect))
  {
    Serial.println("Falha ao inicializar o SD card");
    return;
  }

  Serial.println("SD card inicializado com sucesso");
}

void loop()
{
  int pressao = analogRead(pinSensor);

  // Serial.print("Valor lido: ");
  // Serial.println(pressao);
  // escrever_arquivo(pressao);

  // delay(1000);
}