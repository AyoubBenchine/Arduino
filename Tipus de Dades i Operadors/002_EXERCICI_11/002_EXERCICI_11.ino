/**********************************************************************************************************************                               
**                                                                                                                   **
**                                                              TÍTOL:002_EXERCICI_11                                **
**                                                                                                                   **
**                                                                                                                   **   
**  NOM: AYOUB BENCHINE DOGHMI                                                                      DATA: 29/11/2021 **  
**********************************************************************************************************************/
//****************************************************** INCLUDE ******************************************************



//****************************************************** VARIABLES ****************************************************
int drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//****************************************************** SETUP ********************************************************
void setup()
{
Serial.begin(9600);     //set up Serial library at 9600 bps
Serial.print("Your HD is ");
Serial.print(drive_gb);
Serial.println("GB large.");

Serial.print("In theory, it can store ");
 drive_mb = drive_gb;
 drive_mb = drive_mb * 1024;
Serial.print(drive_mb);
Serial.print(" Megabytes, ");
 drive_kb = drive_mb;
 drive_kb = drive_kb * 1024;
Serial.print(drive_kb);
Serial.println(" Kilobytes.");

Serial.print("But it really only stores ");
 real_drive_mb = drive_gb;
 real_drive_mb = real_drive_mb * 1000;
Serial.print(real_drive_mb);
Serial.print(" Megabytes, ");
 real_drive_kb = drive_gb;
 real_drive_kb = real_drive_kb * 1000000;
Serial.print(real_drive_kb);
Serial.println(" Kilobytes.");

Serial.print("You are missing ");
 missing_drive_kb = drive_kb - real_drive_kb;
Serial.print(missing_drive_kb);
Serial.print(" Kilobytes1!");  
  
}
//****************************************************** LOOP *********************************************************
void loop()
{
}

//****************************************************** FUNCIONS *****************************************************
