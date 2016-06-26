void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(analogRead(A0));
  bargraph(analogRead(A0));
  //delay(100);
}

void bargraph(int x) {
  int i;
  for (i = 0; i < x/10; i++){
    Serial.print("*");
   }
  Serial.println();
}

