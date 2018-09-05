#define  pos_supply 4
#define  neg_supply 5
#define pos_supply_error 6 
#define neg_supply_error 7
#define pos_monitoring A0
#define neg_monitoring A1
int val_pos = 0;
int val_neg = 0;
int positive_voltage = 0;
int negative_voltage = 0;

void setup()

{
  // put your setup code here, to run once:
  Serial.begin(9600);
  
pinMode(pos_supply,INPUT);
pinMode(neg_supply,INPUT);
pinMode(pos_supply_error, OUTPUT);
pinMode(neg_supply_error, OUTPUT);
pinMode(pos_monitoring, INPUT);
pinMode(neg_monitoring, INPUT); 
}

void loop()

{
  // put your main code here, to run repeatedly:
 val_pos = digitalRead(pos_supply);   // read the input pin
    digitalWrite(pos_supply_error,!val_pos);
 val_neg = digitalRead(neg_supply);   // read the input pin
    digitalWrite(neg_supply_error,!val_neg);
 positive_voltage = analogRead(pos_monitoring); //read the input analog pin for positive voltage
    Serial.print("The positive voltage is:");
    Serial.println(pos_monitoring);
 negative_voltage = analogRead(neg_monitoring); //read the input analog pin for negative voltage
    Serial.print("The negative voltage is:");
    Serial.println(neg_monitoring);
      
}
