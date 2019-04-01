int led1=9;
int bri=0;
int fade=5;
int led2=10;
int brd=225;
void setup() {
  // put your setup code here, to run once:
pinMode(led1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(led1,bri);
bri=bri+fade;
if(bri<=0||bri>=255)
{
  fade=-fade;
  
}
delay(100);


  analogWrite(led2,brd);
  brd=brd-fade;
  if(brd<=0||brd>=255)
  {
    fade=-fade;
  }
  delay(100);
  
}

