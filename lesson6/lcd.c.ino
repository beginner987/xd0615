#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
  lcd.begin(16,2);
  lcd.setCursor(9,0);
  lcd.print("li ming");
  lcd.setCursor(10,1);
  lcd.print("190404");
}

void loop()
{
}
  