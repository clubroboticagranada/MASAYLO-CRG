int pin = A6; // definimos el pin al que conectaremos el zumbador.

/* Definimos cada una de las frecuencias de las notas musicales.
 * Cuando van acompañadas de la letra S significa que esa nota es sostenido.
 * Cuando van acompañadas de la letra H significa que esa nota está en una octava superior (High). */

int c=261; int d=294; int e=329; int f=349; int g=391; int gS=415; int a=440; int aS=455; int b=466; int cH=523; 
int cSH=554; int dH=587; int dSH=622; int eH=659; int fH=698; int fSH=740; int gH=783; int gSH=830; int aH=880;

void setup()    
{    
  pinMode(pin, OUTPUT); // Hacemos que el pin 1 sea salida.
  pinMode(LED_BUILTIN, OUTPUT);
}     
void loop() {   
/* Utilizamos la función tone incluida en el IDE con el formato: tone(Nº-pin, nota, duracion) */
    tone(pin, a, 500);  delay(550);
    tone(pin, a, 500);  delay(550);     
    tone(pin, a, 500);  delay(550);
    tone(pin, f, 350);  delay(350);
    tone(pin, cH, 150); delay(200); 
    tone(pin, a, 500);  delay(550);
    tone(pin, f, 350);  delay(350);
    tone(pin, cH, 150); delay(200);
    tone(pin, a, 1000); delay(1050);
    tone(pin, eH, 500); delay(550);
    tone(pin, eH, 500); delay(550);
    tone(pin, eH, 500); delay(550);   
    tone(pin, fH, 350); delay(350); 
    tone(pin, cH, 150); delay(200);
    tone(pin, gS, 500); delay(550);
    tone(pin, f, 350);  delay(350);
    tone(pin, cH, 150); delay(200);
    tone(pin, a, 1000); delay(1050);
    tone(pin, aH, 500); delay(550);
    tone(pin, a, 350);  delay(350); 
    tone(pin, a, 150);  delay(200);
    tone(pin, aH, 500); delay(550);
    tone(pin, gSH, 250);delay(250);
    tone(pin, gH, 250); delay(250);
    tone(pin, fSH, 125);delay(150);
    tone(pin, fH, 125); delay(150);    
    tone(pin, fSH, 250);delay(250);
    delay(250);
    tone(pin, aS, 250); delay(250);    
    tone(pin, dSH, 500);delay(550); 
    tone(pin, dH, 250); delay(250); 
    tone(pin, cSH, 250);delay(250);  

    tone(pin, cH, 125); delay(150);  
    tone(pin, b, 125);  delay(150); 
    tone(pin, cH, 250); delay(250);     
    delay(250);
    tone(pin, f, 125);  delay(150); 
    tone(pin, gS, 500); delay(550); 
    tone(pin, f, 375);  delay(375+50); 
    tone(pin, a, 125);
    delay(150); 
    tone(pin, cH, 500); delay(550);
    tone(pin, a, 375);  delay(400);
    tone(pin, cH, 125); delay(150);
    tone(pin, eH, 1000);delay(1050);
    tone(pin, aH, 500); delay(550);
    tone(pin, a, 350);  delay(350);
    tone(pin, a, 150);  delay(200);
    tone(pin, aH, 500); delay(550);
    tone(pin, gSH, 250);delay(250); 
    tone(pin, gH, 250); delay(250);
    tone(pin, fSH, 125);delay(150);
    tone(pin, fH, 125); delay(150);  
    tone(pin, fSH, 250);delay(250);
    delay(250);
    tone(pin, aS, 250); delay(250);  
    tone(pin, dSH, 500);delay(550);
    tone(pin, dH, 250); delay(250);
    tone(pin, cSH, 250);delay(250);  
    tone(pin, cH, 125); delay(150);
    tone(pin, b, 125);  delay(150);
    tone(pin, cH, 250); delay(250);      
    delay(250);
    tone(pin, f, 250);  delay(250); 
    tone(pin, gS, 500); delay(550); 
    tone(pin, f, 375);  delay(400);
    tone(pin, cH, 125); delay(150);
    tone(pin, a, 500);  delay(550);           
    tone(pin, f, 375);  delay(400);          
    tone(pin, c, 125);  delay(150);  
    tone(pin, a, 1000); delay(1050);       
    delay(5000); 
}
