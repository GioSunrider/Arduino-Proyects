#include <Servo.h>

Servo l_servo, r_servo;

int L_MOTOR_PIN=10;
int R_MOTOR_PIN=9;

int MAX_SPD=122;
int MIN_SPD=0;
int L_STOP=89;
int R_STOP=90;

int TIEMPO=1000;

void setup() 
{ 
  l_servo.attach(L_MOTOR_PIN);  // attaches the servo on pin 9 to the servo object 
  r_servo.attach(R_MOTOR_PIN);  // attaches the servo on pin 9 to the servo object 
} 
 
void loop() 
{ 
 go_forward(TIEMPO);
 go_left(TIEMPO);
 go_right(TIEMPO);
 go_back(TIEMPO);
 go_stop(TIEMPO);
} 

void go_stop(int tiempo){
  l_servo.write(L_STOP);
  r_servo.write(R_STOP);
  delay(tiempo);
}
void go_forward(int tiempo){
  l_servo.write(-MAX_SPD);
  r_servo.write(MAX_SPD);
  delay(tiempo);
}
void go_back(int tiempo){
  l_servo.write(MAX_SPD);
  r_servo.write(-MAX_SPD);
  delay(tiempo);
}
void go_left(int tiempo){
  l_servo.write(MAX_SPD);
  r_servo.write(MIN_SPD);
  delay(tiempo);
}
void go_right(int tiempo){
  l_servo.write(MIN_SPD);
  r_servo.write(-MAX_SPD);
  delay(tiempo);
}
