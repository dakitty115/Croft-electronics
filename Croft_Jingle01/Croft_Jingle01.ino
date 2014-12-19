//Conor Croft 
//jiingle bells 
int speaker = 13;

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

int line1 [] = {e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4};
int line1A [] = {q, q, h, q, q, h, q, q, q, q, w};
int line2 [] = {f4, f4, f4, f4, f4, e4, e4, e4, e4, d4, d4, e4, d4, g4};
int line2B [] = {q, q, q, q, q, q, q, q, q, q, q, q, h, h};
int line3 [] = {e4, e4, e4, e4, e4, e4, e4, g4, c4, d4, e4};
int line3C [] = {q, q, h, q, q, h, q, q, q, q, w};
int line4 [] = {f4, f4, f4, f4, f4, e4, e4, e4, g4, g4, f4, d4, c4};
int line4D [] = {q, q, q, q, q, q, q, q, q, q, q, q, w};

void jingle(){
    for (int n=0;n<11;n++){
     tone(speaker, line1[n], line1A[n]);
     delay(line1A[n]); 
    }
     for (int n=0;n<14;n++){
     tone(speaker, line2[n], line2B[n]);
     delay(line2B[n]); 
    }
     for (int n=0;n<11;n++){
     tone(speaker, line3[n], line3C[n]);
     delay(line3C[n]); 
    }
     for (int n=0;n<13;n++){
     tone(speaker, line4[n], line4D[n]);
     delay(line4D[n]); 
    }
}

void setup(){
  pinMode(speaker,OUTPUT);
}

void loop(){
  jingle();
}
