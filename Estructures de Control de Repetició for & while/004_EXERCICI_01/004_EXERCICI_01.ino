/**********************************************************************************************************************                               
**                                                                                                                   **
**                                                              TÍTOL: 004_EXERCICI_01                               **
**                                                                                                                   **
**                                                                                                                   **   
**  NOM: AYOUB BENCHINE DOGHMI                                                                      DATA: 10/12/2021 **  
**********************************************************************************************************************/
//****************************************************** INCLUDE ******************************************************



//****************************************************** VARIABLES ****************************************************
int comptar = 11;

//****************************************************** SETUP ********************************************************
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)
  {
    Serial.print(i);
    Serial.print("-");
  } 
}

//****************************************************** LOOP *********************************************************
void loop()     // we need this to be here even though its empty
{
}

//****************************************************** FUNCIONS *****************************************************
