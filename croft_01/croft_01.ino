//croft lab  01
void function1() {
 String result1= "I am an arduino and I communicate at "; 
 String result2= "9600 Baud rate. Ports 0 and 1 are used "; 
 String result3= "for serial communication. ";
 String result4= "";
 String result5= "Serial communication works well for debugging ";
 String result6= "and monitoring sensor values during the ";
 String result7= "execution of a program.";
 Serial.println (result1);
 Serial.println (result2);
 Serial.println (result3);
 Serial.println (result4);
 Serial.println (result5);
 Serial.println (result6);
 Serial.println (result7);
}

void function2a (int x, int y) {
 String Calc (x/2 * y);
 Serial.println (Calc);
}

void function2b (int x, int y) {
  String Calc2 (2*x +x * y);
  Serial.println (Calc2);
}

void function3(){
  String chars[] = {"iron man", "the hulk", "garfield", "captain america", "bumble bee"};
  Serial.println("My favorite movie characters are: ");
  for (int i = 4; i > -1; i--){
  Serial.println(chars[i]);
  } 
}

void function4(){
 String numbs[] = {"1", "2", "3", "4", "5", "6", "7", "8"}; 
 int x;
 for ( x = 0; x < 8; x++){
 Serial.println(numbs[x]);
 }
 for ( x = 7; x>=0; x--){
 Serial.println(numbs[x]);
 }
 for ( x=1; x<8; x+=2){
 Serial.println(numbs[x]);
 }
 for ( x=0; x<8; x+=2){
 Serial.println(numbs[x]);
 }
 for ( x=6; x>=0; x-=2){
 Serial.println(numbs[x]);
 }
 for ( x=7; x>=0; x-=2){
 Serial.println(numbs[x]);
 }
}

void function5() {
 String pitch[] = {"C", "D", "E", "F", "G", "A", "B", "C"};
 int x;
 for (x=0; x<8; x++){
 Serial.println(pitch[x]);
 }
 for (x=7; x>=0; x--){
 Serial.println(pitch[x]);
 }
  for (x=0; x<8; x++){
 Serial.println(pitch[x]);
 }
 for (x=7; x>=0; x--){
 Serial.println(pitch[x]);
 }
}

void function6(int n) {
 int a=0;
 int b=1;
 int fib;
 int i=0;
 for (i=0; i<n; i++){
 fib= a+b;
 Serial.println(fib);
 a=b;
 b=fib;
 }
}

void function7(int l, int w) {
  int area= (l*w);
  Serial.println(area);
}

void function8() {
 for (int i=0; i<100000; i++){
  Serial.println(i*10);
 } 
//A. I expect the number to be multiples of 10 and will calculate 100000 of them.
//B. It counts up by 10 into its positive limit and then counts down by ten to its negative limit.
//C. It is hitting the limit for an integer value, it counts by 10's, you could use a long data type and then it could count all the way to 100000.
}

void function9(){
  int i;
  long sum=0;
  for (i=0; i<1000; i++){
  
   if ((i%3==0)||(i%5==0)){
    sum+=i;
   
   }
}
   Serial.println(sum);
}

void function10(int n){
  String words [] = {"dog", "cat", "car", "can", "pot"};
  randomSeed(analogRead(0));
  String con= "";
  for(int i=0; i<n; i++){
  int t = random(5);
 // Serial.println(t);
  Serial.println(words[t]);
  con.concat(String(words[t])+" ");    
  }      
   Serial.println(con);
}

void setup () {
  Serial.begin(9600);
  function1();
  function2a(120,512);
  function2b(97,32);
  function3();
  function4();
  function5();
  function6(10);
  function7(10,7);
//  function8(); commented out to test other functions
  function9();
  function10(10);
  
}



void loop () {
  
}
