
#include <Servo.h>

Servo myservo;  
Servo myservo1;
Servo myservo3;
Servo myservo2;
int pos = 0;
int pos1= 47;   
int pos2= 85;
int pos3=100;

void setup() {
  myservo.attach(2); 
  myservo1.attach(6);
  myservo2.attach(5);
  myservo3.attach(3);
}

void loop() {
  for (pos = 0; pos <= 180; pos ++) { // se mueve la base hacia la izquierda
    myservo.write(pos);              
    delay(15);                       
  }
  
  for (pos1 = 47; pos1 <= 116; pos1 ++) { //baja la primera articulacion 
    myservo1.write(pos1);              
    delay(15);
  }

  for (pos = 180; pos >= 0; pos --) { //se mueve la base hacia la derecha
    myservo.write(pos);            
    delay(15);                       
  }
  for (pos1 = 116; pos1 >= 47; pos1 --) { //sube la primera articulacion 
    myservo1.write(pos1);            
    delay(15);                                              
  }
  for(pos2=85; pos>=160;pos2 --){ //mueve la segunda articulacion 
  myservo2.write(pos2);
  delay(15);
  }
  for (pos2=160;pos2<=85; pos2 ++) { //mueve la segunda articulacion en el sentido contrario  
    myservo2.write(pos2);              
    delay(15);
}
for(pos3=100; pos3>=140;pos3 --){  //abre o cierra la garra 
  myservo3.write(pos3);
  delay(15);
  }
  for (pos3=140;pos3<=100; pos3 ++) {//abre o cierra la garra  
    myservo3.write(pos3);              
    delay(15);
}
}
