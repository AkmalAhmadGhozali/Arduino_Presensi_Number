int sw1 = 2; 
int sw2 = 3;
int sw3 = 4;
int a = 5;
int b = 6;
int c = 7;
int d = 8;
int e = 9;
int f = 10;
int g = 11;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(sw1,INPUT_PULLUP);
  pinMode(sw2,INPUT_PULLUP);
  pinMode(sw3,INPUT_PULLUP);  
}

void loop() {
  if(digitalRead(sw1)==0){ //mencetak angka 0
    delay(100);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 0);
    digitalWrite(g, 1);    
  }

  if(digitalRead(sw2)==0){ //mencetak angka 2
    delay(100);
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 1);
    digitalWrite(d, 0);
    digitalWrite(e, 0);
    digitalWrite(f, 1);
    digitalWrite(g, 0);
  }

  if(digitalRead(sw3)==0){ //menghapus semua angka pada seven segment
    delay(100);
    digitalWrite(a, 1);
    digitalWrite(b, 1);
    digitalWrite(c, 1);
    digitalWrite(d, 1);
    digitalWrite(e, 1);
    digitalWrite(f, 1);
    digitalWrite(g, 1);
  }
}
