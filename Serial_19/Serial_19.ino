/*************************************************************************
**     Compta de 0 fins a 110. Cada nombre el separa amb un guió.       **
**Si incrementem la variable comptar, comptarà fins el nombre assignat  **
**                         Només ho fa un cop.                          **  
*************************************************************************/                                                                     

//******  Includes  ******************************************************
float r1, r2;   // Variables amb coma flotant (punt decimal)per les dades.
float rSerie, rParalel;// Variables amb coma flotant per el resultat.
//******  Setup  *********************************************************   
void setup() { 
Serial.begin(9600);  //Velocitat de càrrega d'escaneig

Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
//Escriu el text i salta de línea.
}

//******  Loop  ********************************************************** 
void loop() {
  
while (Serial.available() > 0) {  // Si la variable es més gran que zero
                                  //càrrega el codi.
    r1 = Serial.parseInt();//Llegeix el primer nómbre sencer de la posició
                           //en la que es troba i el guarda a r1.
    Serial.print ("R1=");  //Escriu R1=.
    Serial.println ( r1) ; //Inserta el nombre de la variable r1.
    
    r2 = Serial.parseInt();//Llegeix el primer nómbre sencer de la posició
                           //en la que es troba i el guarda a r2.

    Serial.print ("R2=");  //Escriu R2=.
    Serial.println ( r2) ; //Inserta el nombre de la variable r2.
   
    if (Serial.read() == '\n') { //Comproba el final de línea
    //CODI ALUMNE (calcula r1 i r2 en serie i paral•lel, mostra resultats i                      
                 //fa de nou la pregunta inicial)
    }
  }
}
                              
