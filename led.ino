void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  int j=1;
  while (j<=14)
  {
  digitalWrite (2,HIGH);
  digitalWrite (3,HIGH);
  digitalWrite (4,HIGH);
  digitalWrite (8,HIGH);
  digitalWrite (10,HIGH);
  digitalWrite (9,HIGH);
  delay (250);
  digitalWrite (2,LOW);
  digitalWrite (3,LOW);
  digitalWrite (4,LOW);
  digitalWrite (8,LOW);
  digitalWrite (10,LOW);
  digitalWrite (9,LOW);
  delay (250);
  j++;
  }
  digitalWrite (6,HIGH);
  for (int fv=255;fv>=0;fv=fv-10)
  {
    analogWrite (6,fv);
    delay (30);
  }
  digitalWrite (6, LOW); 
  for (j=1;j<=8;j++)
 { for (int i=2;i<=11;i++)
  {
    digitalWrite (i,HIGH);
    delay (90);
    digitalWrite (i,LOW);
  }
    for (int i=11;i>=2;i--)
  {
    digitalWrite (i,HIGH);
    delay (50);
    digitalWrite (i,LOW);
  }
  delay (500);
 } 
  int y=1;
  do
  {
    for (int x=1;x<=2;x++)
    {
      for (int i=2;i<=11;i++)
     {
       digitalWrite (i,HIGH);
       delay (105);
       digitalWrite (i,LOW);
     }
      for (int fv=255;fv>=0;fv=fv-10)
    {
      for (int i=2;i<=10;i++)
      analogWrite (i,fv);
      delay (30);
     }
     delay (60);
     for (int i=11;i>=2;i--)
     {
      digitalWrite (i,HIGH);
      delay (105);
      digitalWrite (i,LOW);
     }
    for (int fv=255;fv>=0;fv=fv-10)
     {
         for (int i=2;i<=10;i++)
           analogWrite (i,fv);
       delay (30);
    }
     delay (60);
  y++;
  }
  }
  while (y<=8);
  delay (3000);
}
