/*************************************************************************
**                                                                      **
**                    Descripció programa                               **
**                                                                      **
*************************************************************************/
//******  Includes  ******************************************************

//******  Variables  *****************************************************

//******  Setup  *********************************************************

void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l'operacio que vols realitzar?"); // prints with brake line
  Serial.println("1. Comprovar numero de tarjeta de credit");  // prints hello
  delay(1000);
  Serial.println("2. Comprovar numero de compte bancari");  // prints hello
  delay(1000);
  Serial.println("3. Buscar un digit perdut de tarjeta de credit");  // prints hello
  delay(1000);
}
//******  Loop  **********************************************************
void loop()   // run over and over again
{
		   // do nothing
}

