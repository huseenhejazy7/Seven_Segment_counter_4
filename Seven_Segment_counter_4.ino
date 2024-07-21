char a = 2;
char b = 3;
char c = 4;
char d = 5;
char e = 6;
char f = 7;
char g = 8;

char digit1 = 13;
char digit2 = 12;
char digit3 = 11;
char digit4 = 10;

char Number[10]= {
    0b1111110, // 0
    0b0110000, // 1
    0b1101101, // 2
    0b1111001, // 3
    0b0110011, // 4
    0b1011011, // 5
    0b1011111, // 6
    0b1110000, // 7
    0b1111111, // 8
    0b1111011  // 9  
    };
void display(int n)
{
digitalWrite(a, Number[n] & 0b1000000);
digitalWrite(b, Number[n] & 0b0100000);
digitalWrite(c, Number[n] & 0b0010000);
digitalWrite(d, Number[n] & 0b0001000);
digitalWrite(e, Number[n] & 0b0000100);
digitalWrite(f, Number[n] & 0b0000010);
digitalWrite(g, Number[n] & 0b0000001);

}
void offdisplay()
{  
  digitalWrite(digit1, 1); 
  digitalWrite(digit2, 1); 
  digitalWrite(digit1, 1); 
  digitalWrite(digit2, 1);
   } 

   
void setup()
{
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  pinMode(digit3, OUTPUT);
  pinMode(digit4, OUTPUT);
  
}

int count =10;
void loop()
{
   
  //count = count+1;   //int count = 1969;

  char n1 = (count % 10000) / 1000;
  char n2 = (count % 1000) / 100;
  char n3 = (count % 100) / 10;
  char n4 = count % 10;
  
  offdisplay();
  display(n1);
  digitalWrite(digit1, 0);
  delay(5);

  offdisplay();
  display(n2);
  digitalWrite(digit2, 0);
  delay(5);

  offdisplay();
  display(n3);
  digitalWrite(digit3, 0);
  delay(5);

  offdisplay();
  display(n4);
  digitalWrite(digit4, 0);
  delay(5);


}

 
