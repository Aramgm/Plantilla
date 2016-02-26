/*************************************************************************
** Posa "Hello Word amb la pantalla,tants cops com carrega el programa. **
**                                                                      **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************


//******  Setup  ********************************************************* 
void setup() {

Serial.begin(9600);                       //Iniciar el serial
}


//******  Loop  ********************************************************** 
void loop() {
Serial.println("Hello world!");           //posa a la pantalla Hello World 
                                          //repetidament per cada cop que 
                                          //escriu salta de línea                                             
}
