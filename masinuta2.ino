const int trigger_Pin = 2;  
const int echo_Pin = 3;

int in1 = 12;
int in2 = 11;  

int in3 = 10;
int in4 = 9;

int kappa = 1;

int dist() {
  digitalWrite(trigger_Pin, HIGH);    //emitem un ultrasunet
  delayMicroseconds(10);              //un delay mai minuțios    
  digitalWrite(trigger_Pin, LOW);     //stop emitere semnal

  long durata = pulseIn(echo_Pin, HIGH);    //măsuram durata (în microsec) 

  long dist = 0.017 * durata;

  return dist;
}

void forward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void left() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void right() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  pinMode(trigger_Pin, OUTPUT);
  pinMode(echo_Pin, INPUT);

  randomSeed(analogRead(0));
}

void loop() {
    int i=0;
    while( dist() > 35 )
    {
      forward();
      i=1;
    }
    if(i == 1)
      kappa = random(0,2);
    if(kappa == 0)
      left(); 
    else
      right();
    delay(50);
}
