const int button = 2;
const int R = 3;
const int B = 4;
const int G = 5;

int buttonstate = 0 ;
int color = 0 ;
bool buttonpress = false;
String currentcolor = "led";

void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);
pinMode(B,OUTPUT);
Serial .begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate = digitalRead(button);

Serial.print("Current Color; ");
Serial.println(currentcolor);

if (buttonstate == HIGH && !buttonpress) {
  color=color+1;
  buttonpress = true;
 }
 if (buttonstate == LOW && buttonpress) {
  buttonpress = false;
 }
if(color == 0){
  //white
  currentcolor="white";
  digitalWrite(R,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
}
else if(color == 1){
  //cyan
   currentcolor="cyan";
  digitalWrite(R,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(G,LOW);
}
else if(color == 2){
  //blue
    currentcolor="blue";
  digitalWrite(R,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(G,HIGH);
}
else if(color == 3){
  //purple
  currentcolor="purple";
  digitalWrite(R,LOW);
  digitalWrite(B,LOW);
  digitalWrite(G,HIGH);
}
else if(color == 4){
  //green
  currentcolor="green";
  digitalWrite(R,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(G,LOW);
}
else if(color == 5){
  color=0;
}
}

