#define NOTE_C 262
#define NOTE_D 294
#define NOTE_E 330
#define NOTE_F 349
#define NOTE_G 392

int btnC = 13;
int btnD = 12;
int btnE = 11;
int btnF = 10;
int btnG = 9;

int led = 7;

int sound = 3;

void setup(){
  Serial.begin(9600);
  pinMode(btnC, INPUT);
  pinMode(btnD, INPUT);
  pinMode(btnE, INPUT);
  pinMode(btnF, INPUT);
  pinMode(btnG, INPUT);
  pinMode(led, OUTPUT); 
}

void loop(){
  int C = digitalRead(btnC);
  int D = digitalRead(btnD);
  int E = digitalRead(btnE);
  int F = digitalRead(btnF);
  int G = digitalRead(btnG);
  
  if(C){
    tone(sound, NOTE_C,8); 
    digitalWrite(led,HIGH);
  }
  else if(D){
    tone(sound, NOTE_D,8);
    digitalWrite(led,HIGH);
  }
  else if(E){
    tone(sound, NOTE_E,8);
    digitalWrite(led,HIGH);
  }
  else if(F){
    tone(sound, NOTE_F,8);
    digitalWrite(led,HIGH);
  }
  else if(G){
    tone(sound, NOTE_G,8);
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
}