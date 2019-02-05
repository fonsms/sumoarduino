#define LED_R  9
#define LED_G  10
#define LED_B  11




void setupLED() {
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  

}
void driverled(int color){
  
  digitalWrite(LED_R,color%2?HIGH:LOW);
  digitalWrite(LED_G,(color/2)%2?HIGH:LOW);
  digitalWrite(LED_B,(color/4)%2?HIGH:LOW);
  
    
}



void setup() {
 setupLED();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<8; i++){
    driverled(i);
    delay(1000);
  }
}
