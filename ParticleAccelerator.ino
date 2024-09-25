#define LDRpin1 A0
#define LDRpin2 A1
#define LDRpin3 A2
#define LDRpin4 A3
#define LDRpin5 A4
#define LDRpin6 A5
int LDRValue1 = 0;
int LDRValue2 = 0;
int LDRValue3 = 0;
int LDRValue4 = 0;
int LDRValue5 = 0;
int LDRValue6 = 0;


void setup()
{
  //Laserpin for 6 components
  pinMode(2, OUTPUT);

  //Pins for Electromagnet
   pinMode(3, OUTPUT);
   pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
    
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(2, HIGH);
  LDRValue1 = analogRead(LDRpin1);
  LDRValue2 = analogRead(LDRpin2);
  LDRValue3 = analogRead(LDRpin3);
  LDRValue4 = analogRead(LDRpin4);
  LDRValue5 = analogRead(LDRpin5);
  LDRValue6 = analogRead(LDRpin6);

}
