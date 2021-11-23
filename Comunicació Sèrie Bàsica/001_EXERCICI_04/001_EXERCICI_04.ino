/**********************************************************************************************************************                               
**                                                                                                                   **
**                                                              TÍTOL: 001_ECERCICI_04                               **
**                                                                                                                   **
**                                                                                                                   **   
**  NOM: AYOUB BENCHINE DOGHMI                                                                      DATA: 23/11/2021 **  
**********************************************************************************************************************/
//****************************************************** INCLUDE ******************************************************



//****************************************************** VARIABLES ****************************************************




//****************************************************** SETUP ********************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull el numero de l´operacio que vols realitzar?"); // prints Escull el numero de l´operacio que vols realitzar? with brake line
  Serial.println("1. Comprovar numero de tarjeta de credito"); // prints 1. Comprovar numero de tarjeta de credito with brake line
  Serial.println("2. Comprovar numero de compte bancari"); // prints 2. Comprovar numero de compte bancari with brake line
  Serial.println("3. Buscar un digit perdut de tarjeta de credit"); // prints 3. Buscar un digit perdut de tarjeta de credit with brake line
}

//****************************************************** LOOP *********************************************************
void loop()   // run over and over again
{
           // do nothing
}

//****************************************************** FUNCIONS *****************************************************
