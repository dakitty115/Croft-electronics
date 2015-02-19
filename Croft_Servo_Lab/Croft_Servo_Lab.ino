#include<Servo.h>

int PR = 0;//photo resistor on pin 13
int PRV = 0;
Servo servoA;
Servo servoB;

void setup(){
  servoA.attach(9);
  servoB.attach(10);
  
  servoA.write(90);//start both of the servos stopped
  servoB.write(90);
  delay(1);
  
  servoA.write(0);//spins a servo clockwise for 2 sec
  delay(2000);
  servoA.write(90);
  delay(2000);
  
  servoB.write(0);//spins b servo clockwise for 2 sec
  delay(2000);
  servoB.write(90);
  delay(2000);
  
  servoA.write(180);//spins a and b counterclockwise for 4 sec
  servoB.write(180);
  delay(4000);
  
  servoA.write(0);//spins a and b clockwise for 3 sec
  servoB.write(0);
  delay(3000);
  
  servoA.write(90);//stops both of the servos for 1/2 sec
  servoB.write(90);
  delay(500);
  
  servoB.write(180);
  delay(1000);
  servoB.write(90);
  delay(1);
  
  servoA.write(180);
  delay(1000);
  servoA.write(90);
  delay(1);
  

}

void loop(){
  PRV = analogRead(PR);
  if (analogRead(0) > 550){
    servoA.write(180);
    servoB.write(0);
  }
   
  if(analogRead(0) < 550){
    servoA.write(90);
    servoB.write(90);
  }
}
