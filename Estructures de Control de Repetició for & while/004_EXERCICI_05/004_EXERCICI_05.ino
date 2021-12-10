/**********************************************************************************************************************                               
**                                                                                                                   **
**                                                              TÍTOL: 004_EXERCICI_05                                               **
**                                                                                                                   **
**                                                                                                                   **   
**  NOM: AYOUB BENCHINE DOGHMI                                                                      DATA: 19/11/2021 **  
**********************************************************************************************************************/
//****************************************************** INCLUDE ******************************************************



//****************************************************** VARIABLES ****************************************************
int taula2 = 2;
int taula3 = 3;
int taula4 = 4;
int taula5 = 5;
int taula6 = 6;
int taula7 = 7;
int taula8 = 8;
int taula9 = 9;
int taula10 = 10;
//****************************************************** SETUP ********************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula2*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula3);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula3);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula3*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula4);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula4);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula4*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula5);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula5);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula5*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula6);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula6);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula6*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula7);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula7);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula7*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula8);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula8);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula8*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula9);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula9);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula9*i);    
  }
   Serial.print("Taula de multiplicar del ");
  Serial.println(taula10);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula10);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula10*i);    
  }
  
}

//****************************************************** LOOP *********************************************************
void loop()   // we need this to be here even though its empty
{
}

//****************************************************** FUNCIONS *****************************************************
