//  Door switch prototype v0.1

int pin_DOOR = 10;
int pin_BUZZ = 8;
int pin_switch = 2;
 
void setup() 
{
    Serial.begin(9600);
    Serial.print("Sketch:   ");   Serial.println(__FILE__);
    Serial.print("Uploaded: ");   Serial.println(__DATE__);
    Serial.println(" ");
 
    pinMode(pin_DOOR, OUTPUT);  
    digitalWrite(pin_DOOR,LOW); 
    pinMode(pin_BUZZ, OUTPUT);  
    digitalWrite(pin_BUZZ,LOW); 
 
    pinMode(pin_switch, INPUT); 
}
 
void loop()
{
    if ( digitalRead(pin_switch) == HIGH) 
    {
       digitalWrite(pin_DOOR, HIGH);
       digitalWrite(pin_BUZZ, HIGH);
    }
    else
    {
       delay(300);
       digitalWrite(pin_DOOR, LOW);
       digitalWrite(pin_BUZZ, LOW);
       delay(500);
       digitalWrite(pin_BUZZ, HIGH);
       digitalWrite(pin_DOOR, LOW);
       delay(6000);
    }   
}
