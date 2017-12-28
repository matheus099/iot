const int verde = 4;
const int amarelo = 3;
const int vermelho = 2;
const int sensor_temperatura = A0;
int buzina = 5;
int leitura_sensor;

float temperatura;



void setup() {
  // put your setup code here, to run once:
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzina, OUTPUT);
  analogReference(INTERNAL);
  Serial.begin(9600);
}

void loop() {
  leitura_sensor = analogRead (sensor_temperatura);
  temperatura = leitura_sensor * 0.1075268817204301;
  Serial.print("Temperatura; ");
  Serial.println(temperatura);
  delay(500);
  
  if ( temperatura < 25)
  {
    digitalWrite (verde, HIGH);
    digitalWrite (amarelo,LOW);
    digitalWrite (vermelho,LOW);
    noTone(buzina);
  }
  
  if ((temperatura > 25 && temperatura < 28))
  {
    digitalWrite (amarelo, HIGH);
    digitalWrite (verde, LOW);
    digitalWrite (vermelho, LOW);
    noTone(buzina);
  }
  if (temperatura > 30)
digitalWrite (verde,HIGH);
digitalWrite (vermelho,LOW);
digitalWrite (amarelo,LOW);
tone(buzina,1000);
  }

  


