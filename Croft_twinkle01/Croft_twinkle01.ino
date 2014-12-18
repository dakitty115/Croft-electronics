//Conor Croft
//twinkle 
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

void twinkle1(){
  int lineA [] = {c4, c4, g4, g4, an4, an4, g4, f4, f4, e4, e4, d4, d4, c4};
  int lineARythm[] = {q,q,q,q,q,q,h,q,q,q,q,q,h};
  
  for (int n=0;n<14;n++) {
    tone(speaker, lineA[n],lineARythm[n]);
    delay(lineARythm[n]); 
  }
}

void twinkle2(){
  int lineA [] = {g4, g4, f4, f4, e4, e4, d4, g4, g4, f4, f4, e4, e4, c4};
  int lineARythm[] = {q,q,q,q,q,q,h,q,q,q,q,q,q};
  
  for (int n=0;n<14;n++) {
    tone(speaker, lineA[n],lineARythm[n]);
    delay(lineARythm[n]); 
  }
}


void twinkle3(){
  int lineA [] = {c4, c4, g4, g4, an4, an4, g4, f4, f4, e4, e4, d4, d4, c4};
  int lineARythm[] = {q,q,q,q,q,q,h,q,q,q,q,q,h};
  
  for (int n=0;n<14;n++) {
    tone(speaker, lineA[n],lineARythm[n]);
    delay(lineARythm[n]); 
  }
}

void setup(){
 pinMode(speaker, OUTPUT);
 //twinkle1(); 
}

void loop(){
 twinkle1();
 twinkle2();
 twinkle3();
}
