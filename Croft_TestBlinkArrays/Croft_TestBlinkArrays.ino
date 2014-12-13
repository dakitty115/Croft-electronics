//Conor Croft 
void LED(){
  int out []={6,7,8,9,10,11,12,13};
  for(int i=0; i<=7; i++){
   digitalWrite(out[i], HIGH);
   delay(250);
   digitalWrite(out[i], LOW);
   delay(250);
  }
  
   for(int i=7; i>-1;i--){
   digitalWrite(out[i], HIGH);
   delay(250);
   digitalWrite(out[i], LOW);
   delay(250);
 }
 
}

void setup(){
  for(int x =6; x<=13; x++){
  pinMode(x, OUTPUT);
  }
}

void loop(){
  LED();
}
