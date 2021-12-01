/**********************************************************************************************************************                               
**                                                                                                                   **
**                                                              TÍTOL: 003_EXERCICI_03                               **
**                                                                                                                   **
**                                                                                                                   **   
**  NOM: AYOUB BENCHINE DOGHMI                                                                        DATA: 1/1/2021 **  
**********************************************************************************************************************/
//****************************************************** INCLUDE ******************************************************



//****************************************************** VARIABLES ****************************************************
int tempAigua = 100;

//****************************************************** SETUP ********************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)
  {
    Serial.println("Aigua supera els 100ºC, esta bullint!");
  } 
  else if (tempAigua < 100)
  {
    Serial.print("Aigua no supera els 100ºC, encara no esta bullint!");
  }  
}

//****************************************************** LOOP *********************************************************
void loop()   // we need this to be here even though its empty
{
}

//****************************************************** FUNCIONS *****************************************************
