//Conor Croft

int btn = 2;
int speaker = 5;

//variables for rythym 
int tempo= 1000;
int w = tempo;
int h = w/2;
int q = h/2;
int e = q/2;
int s = e/2;

// pitches for C scale 
int c4 = 261;
int d4 = 293;
int e4 = 330;
int f4 = 350;
int g4 = 392;
int an4 = 440;
int b4 = 494;
int c5 = 523;

void pacman1(){
 int lineA[]={an4, c5, b4, c5, an4, c5, b4, c5, g4, c5, b4, c5, g4, c5, b4, c5, an4, c5, b4, c5, an4, c5, b4, c5, g4, c5, b4, c5, g4, c5, b4, c5,};
 int lineAR[]= {e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e, e};
 
 for(int n=0; n<32; n++){
  tone (speaker, lineA[n], lineAR[n]); 
  delay(lineAR[n]);
 }
}


void setup(){
  Serial.begin(9600);
  pinMode(btn, INPUT);
  pinMode(speaker, OUTPUT);
}

void loop(){
 int btnState = digitalRead(btn);
  Serial.println(btnState);
  delay(100);
  //reads if the buttoin is being pushed and starts the song 
  if (btnState==1){
     pacman1();
  }
}
