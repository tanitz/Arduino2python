void setup() {
  Serial.begin(115200); // use the same baud-rate as the python side
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop() {
  //Serial.println("Hello world from Ardunio!"); // write a string
  delay(1000);
  if(Serial.available() > 0) {
    char data = Serial.read();
    char str[2];
    str[0] = data;
    str[1] = '\0';
    Serial.print(str);
    if(str[0] == '1'){
    digitalWrite(3, HIGH);
    delay(2000);  
    digitalWrite(3, LOW);
    }
    if(str[0] == '2'){
    digitalWrite(4, HIGH);  
    delay(2000);  
    digitalWrite(4, LOW);
    }
    if(str[0] == '3'){
    digitalWrite(5, HIGH); 
    delay(2000);  
    digitalWrite(5, LOW); 
    }
    if(str[0] == '4'){
    digitalWrite(6, HIGH);
    delay(2000);  
    digitalWrite(6, LOW);  
    }
  }
  asm volatile ("  jmp 0"); 
}
