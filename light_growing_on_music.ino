int sensor = A5;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;


void setup()
{
Serial.begin(9600);
pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);
pinMode(LED6, OUTPUT);

}

void loop()
{
long sum = 0;
for(int i=0; i<=100; i++) // taking 100 sample of sound
{
sum += analogRead(sensor);
}

sum = sum/100; // average the sample of sound

if (sum>=541) {digitalWrite(LED1, HIGH); }else {digitalWrite(LED1, LOW);}
if (sum>=542) {digitalWrite(LED2, HIGH); }else {digitalWrite(LED2, LOW);}
if (sum>=543) {digitalWrite(LED3, HIGH); }else {digitalWrite(LED3, LOW);}
if (sum>=544) {digitalWrite(LED4, HIGH); }else {digitalWrite(LED4, LOW);}
if (sum>=545) {digitalWrite(LED5, HIGH); }else {digitalWrite(LED5, LOW);}
if (sum>=546) {digitalWrite(LED6, HIGH); }else {digitalWrite(LED6, LOW);}
// delay(100); 
Serial.println(sum);
}
