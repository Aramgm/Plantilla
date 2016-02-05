/*************************************************************************
** Intermitent d'un led                                                 **
**                                                                      **
**                                                                      **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************


//******  Variables  *****************************************************
int ledPlacaPin = 10;
//Aquí seleccionem el pin de la placa on anirá del led

//******  Setup  ********************************************************* 
void setup() {
pinMode(ledPlacaPin, OUTPUT);
//Determina el pin insertat a dalt com a sortida
}


//******  Loop  ********************************************************** 
void loop() {
digitalWrite(ledPlacaPin, HIGH); 
//Obre el led  
delay(1000);
//Espera un segon amb el led encés             
digitalWrite(ledPlacaPin, LOW);
//Apaga el led    
delay(1000);
//Espera un segon amb el led apagat
//Aquesta funció(Voild loop) es va repetint contínuament              
}
