//Conor Croft

//LED functions

void doubles (){
  int d [] = {6,7,8,9,10,11,12,13};
  for (int i=0; i<=7;i++){
    digitalWrite(d[i], HIGH);
    delay(250);
    digitalWrite(d[i], LOW);
    delay(250);
    i=i+1;
 
  }
  for (int i=1; i<=7;i++){
    digitalWrite(d[i], HIGH);
    delay(250);
    digitalWrite(d[i], LOW);
    delay(250);
    i=i+1;
  }
}


void allOn (int n,int x){//turns all LED's on and then off again
   int d[] = {6,7,8,9,10,11,12,13};
for (int i=0; i<x;i++){
   digitalWrite (d[0], HIGH);
   digitalWrite (d[1], HIGH);
   digitalWrite (d[2], HIGH);
   digitalWrite (d[3], HIGH);
   digitalWrite (d[4], HIGH);
   digitalWrite (d[5], HIGH);
   digitalWrite (d[6], HIGH);
   digitalWrite (d[7], HIGH);
   delay (n);
   digitalWrite (d[0], LOW);
   digitalWrite (d[1], LOW);
   digitalWrite (d[2], LOW);
   digitalWrite (d[3], LOW);
   digitalWrite (d[4], LOW);
   digitalWrite (d[5], LOW);
   digitalWrite (d[6], LOW);
   digitalWrite (d[7], LOW);
   delay(n);
 }
}


 int fib (int n){
 int a=0;
 int b=1;
 int fib;
 int i=0;
 for (i=0; i<n; i++){
 fib= a+b;
 a=b;
 b=fib;

 } 
 return fib;
}

void cylon() {
   int out []={6,7,8,9,10,11,12,13};
   for(int i=0; i<=7; i++){
   digitalWrite(out[i], HIGH);
   delay(80);
   digitalWrite(out[i], LOW);
   delay(1);
  }
  
   for(int i=7; i>-1;i--){
   digitalWrite(out[i], HIGH);
   delay(80);
   digitalWrite(out[i], LOW);
   delay(1);
 }
}

void opposite(int n) {
   int x;
   int o[] = {6,7,8,9,10,11,12,13};
   digitalWrite (o[0], HIGH);  
   digitalWrite (o[2], HIGH);   
   digitalWrite (o[4], HIGH);   
   digitalWrite (o[6], HIGH);
   delay (n);
   digitalWrite (o[0], LOW);   
   digitalWrite (o[2], LOW);  
   digitalWrite (o[4], LOW);   
   digitalWrite (o[6], LOW); 
   delay(n);
   digitalWrite (o[1], HIGH);
   digitalWrite (o[3], HIGH);
   digitalWrite (o[5], HIGH);
   digitalWrite (o[7], HIGH);
   delay(n);
   digitalWrite (o[1], LOW);
   digitalWrite (o[3], LOW);
   digitalWrite (o[5], LOW);
   digitalWrite (o[7], LOW);
}

void setup (){
  for(int x =6; x<=13; x++){
   pinMode(x, OUTPUT);
  }
  allOn(500,fib(3));//define number to go to in fib sequence 
}

void loop (){
  doubles();
  cylon();
  opposite(100);
}
