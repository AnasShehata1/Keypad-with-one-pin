//This video explain the range of each button
//https://youtu.be/G14tREsVqz0?si=_PgHpnTXE73tvoWe

#define btn A1
int value = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(btn);
  delay(100);
  //Serial.println(value);
  switch(value) 
  {
    case 45 ... 49 :Serial.println('*');
    break;
    case 50 ... 54 :Serial.println('0');
    break;
    case 55 ... 58 :Serial.println('#');
    break;
    case 59 ... 62 :Serial.println('7');
    break;
    case 63 ... 65 :Serial.println('D');
    break;
    case 66 ... 72 :Serial.println('8');
    break;
    case 75 ... 80 :Serial.println('9');
    break;
    case 83 ... 88 :Serial.println('4');
    break;
    case 90 ... 95 :Serial.println('C');
    break;
    case 100 ... 105 :Serial.println('5');
    break;
    case 125 ... 130 :Serial.println('6');
    break;
    case 144 ... 150 :Serial.println('1');
    break;
    case 168 ... 175 :Serial.println('B');
    break;
    case 202 ... 208 :Serial.println('2');
    break;
    case 338 ... 344 :Serial.println('3');
    break;
    case 1020 ... 1023 :Serial.println('A');
    break;
    default:Serial.println("N/A");
    break;
  }
}
