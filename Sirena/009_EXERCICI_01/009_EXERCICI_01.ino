/**********************************************************************************************************************                               
**                                                                                                                   **
**                                                              TÍTOL: 009_EXERCICI_01                               **
**                                                                                                                   **
**                                                                                                                   **   
**  NOM: AYOUB BENCHINE DOGHMI                                                                      DATA: 19/11/2021 **  
**********************************************************************************************************************/
//****************************************************** INCLUDE ******************************************************



//****************************************************** VARIABLES ****************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
int valPot0;                 // guardar valor del potenciometre  

//****************************************************** SETUP ********************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//****************************************************** LOOP *********************************************************
void loop()
{
  valPot0 = analogRead(pot0);    // llegir valor potenciòmetre 

  tone(xiulet, 100, valPot0);    // xiulet de durada valPot0
  delay(2*valPot0);              // esperar valPot0 del xiulet + valPot0 silenci
}

//****************************************************** FUNCIONS *****************************************************
