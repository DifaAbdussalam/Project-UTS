int buzz = 8;
int DataCheck = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode(buzz, OUTPUT); 
  Serial.print("Melodic Keypad");
  Serial.println();
}

void loop(){
  if(Serial.available())
  {
    char data = Serial.read();
    Serial.print(data);
    
    if(data == '1'){DataCheck = 1; tone(buzz, 523, 500); Serial.println(" Do");}
    if(data == '2'){DataCheck = 1; tone(buzz, 587, 500); Serial.println(" Re");}
    if(data == '3'){DataCheck = 1; tone(buzz, 659, 500); Serial.println(" Mi");}
    if(data == '4'){DataCheck = 1; tone(buzz, 698, 500); Serial.println(" Fa");}
    if(data == '5'){DataCheck = 1; tone(buzz, 784, 500); Serial.println(" Sol");}
    if(DataCheck == 0){Serial.println("Perintah Salah. Silakan ulangi !!! ");}
    Serial.println();
    DataCheck = 0;
  }
}
