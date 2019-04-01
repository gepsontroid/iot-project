  #include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
  int pos = 0;
  LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
  
  void setup() {
    // set up the LCD's number of columns and rows:
    pinMode(A3, INPUT);
    lcd.begin(16, 2);
    // Print a message to the LCD.
   
    }
  
  void loop() {
    // set the cursor to column 0, line 1
    // (note: line 1 is the second row, since counting begins with 0):
    lcd.noDisplay();
    int temp = analogRead(A3);
  lcd.setCursor(0,0);  
  //sets the cursor at row 0 column 0
  lcd.print(temp);
  }
