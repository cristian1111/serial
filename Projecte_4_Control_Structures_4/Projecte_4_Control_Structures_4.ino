/************************************************************************
**                                                                     **
**                        Descripció programa                          **
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************

int  KgCO2m2 = 4;

//******  Setup  ********************************************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( KgCO2m2 < 3.5)
  {
    Serial.print("A");
  }
 else if ( KgCO2m2 < 6.5)
  {
   Serial.print("B");
  }
 
  else if (KgCO2m2 < 11.1)
  {
  Serial.print("C");
  }
  else if (KgCO2m2 < 17.7)
  {
    Serial.print("D");
  }
  else if (KgCO2m2 < 38.2)
  {
    Serial.print("E");
}
else if (KgCO2m2 < 43.2)
{
  Serial.print("F");
}
else if (KgCO2m2 == 43.3 || KgCO2m2 > 43.2)
{
Serial.print("G");
}
else
{
  Serial.print("G");
}
}
void loop()   // we need this to be here even though its empty
{
}
