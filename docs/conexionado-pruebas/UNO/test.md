# <FONT COLOR=#8B008B>Pruebas básicas de funcionamiento</font>
Una vez analizados y conectados los distintos elementos iremos, de forma progresiva, haciendo un pequeño programa mediante la aplicación `Masaylo Blockly` basada en `Blocklino de Fontaine Jean Philippe`, y pensada para programar robots utilizando un entorno gráfico o de programación por bloques. En el apartado de software se pueden encontrar los enlaces de descarga y toda la información de la aplicación.

## <FONT COLOR=#007575>**Alimentación**</font>
Colocamos las pilas AA en su lugar respetando la polaridad de las mismas y accionamos el interruptor. Si todo es correcto en ambas placas se debe encender un diodo LED rojo indicativo de que están alimentadas, tal y como observamos en la imagen siguiente:

<center>

| Primer encendido |
|:-:|
| ![Primer encendido](../../img/conexionado-pruebas/UNO/test/Alimentacion-R.png) |

</center>

En este punto vamos a probar también que se graba correctamente firmware en la placa UNO a partir de `Masaylo Blockly 1.1.1 Beta o posterior`. Para ello hemos creado y almacenado el programa [blink.bloc](../UNO/tests/blink.bloc) que vemos en la imagen siguiente.

<center>

| Programa blink.bloc |
|:-:|
| ![Programa blink.bloc](../../img/conexionado-pruebas/UNO/test/blink.png) |

</center>

Si cargamos el programa y dejamos sin accionar el interruptor observaremos como parpadea el LED asociado al pin 13 en la placa UNO pero la placa del driver no está alimentada y por tanto su LED permanece apagado. En la animación siguiente vemos el parpadeo del LED y el resultado de accionar el interruptor.

<center>

| Animación que muestra el funcionamiento del programa blink.bloc y del interruptor |
|:-:|
| ![Animación que muestra el funcionamiento del programa blink.bloc y del interruptor](../../img/conexionado-pruebas/UNO/test/blink.gif) |

</center>

Este GIF se ha creado a partir de un video en formato mp4 utilizando FFMPEG y GIMP y la información obtenida en [este enlace](https://ubunlog.com/gif-animados-vlc-ffmpeg-gimp/).

## <FONT COLOR=#007575>**Motores**</font>
Vamos a realizar una primera prueba del funcionamiento de los motores a partir de los ejemplos suministrados con la librería y disponibles en la aplicación `Masaylo Blockly` que estamos usando en estas pruebas de funcionamiento. En la imagen siguiente tenemos cargado el ejemplo *Aprende a controlar los movimientos básicos del robot Masaylo* y hemos destacado el icono desde el que podemos seleccionarlo de la lista que se abre en una ventana emergente y que al hacer clic nos lo carga en el entorno de la aplicación.

<center>

| Ejemplo Aprende a controlar los movimientos básicos del robot Masaylo cargado |
|:-:|
| ![Ejemplo Aprende a controlar los movimientos básicos del robot Masaylo cargado](../../img/conexionado-pruebas/UNO/test/motores-ej1.png) |

</center>

Si conectamos la placa al puerto USB del ordenador y cargamos el ejemplo en la placa, cuando accionemos el interruptor (o con este accionado pulsemos el botón de reset) se producirá la secuencia de movimiento establecida en el programa que podemos apreciar en la animación siguiente.

<center>

| Animación que muestra el funcionamiento del programa motores-ej1.bloc |
|:-:|
| ![Animación que muestra el funcionamiento del programa motores-ej1.bloc](../../img/conexionado-pruebas/UNO/test/motores-ej1.gif) |

</center>

El ejemplo siguiente está basado en *Utiliza PWM para controlar la velocidad de movimientos del Masaylo* suministrado con la aplicación pero ligeramente modificado ([motores-ej2.bloc](../UNO/tests/motores-ej2.bloc)) para poner todos los valores de PWM al 50% y todos los retardos a 3 segundos.

<center>

| Ejemplo con control PWM de Masaylo |
|:-:|
| ![Ejemplo con control PWM de Masaylo](../../img/conexionado-pruebas/UNO/test/motores-ej2.png) |

</center>

El funcionamiento es muy similar al de la animación anterior pero a la mitad de velocidad. Anímate y prueba el ejemplo y haz cambios para analizar lo que está ocurriendo.

## <FONT COLOR=#007575>**Zumbador**</font>
En esta ocasión vamos a programar el robot desde el IDE de Arduino, en concreto utilizando la versión 1.8.13 o posterior. Para la prueba del zumbador vamos a utilizar la información que podemos ver en la web de *Input makers* con el título [Programar melodía de Star Wars con Arduino y zumbador](https://inputmakers.com/componentes/melodia-de-star-wars-con-arduino-y-zumbador).

El código que vamos a grabar en la placa lo vemos a continuación y basta con utilizar el botón copiar para seleccionarlo y ponerlo en el portapapeles desde el que lo podemos llevar al IDE de Arduino. Este botón se hace visible al pasar el cursor por el cuadro del código en la zona superior derecha del mismo. También puedes descargar el programa haciendo clic en el enlace []()

~~~
int pin = 1; // definimos el pin al que conectaremos el zumbador.
 
/* Definimos cada una de las frecuencias de las notas musicales.
 * Cuando van acompañadas de la letra S significa que esa nota es sostenido.
 * Cuando van acompañadas de la letra H significa que esa nota está en una octava superior (High). */
 
int c=261; int d=294; int e=329; int f=349; int g=391; int gS=415; int a=440; 
int aS=455; int b=466; int cH=523; int cSH=554; int dH=587; int dSH=622; 
int eH=659; int fH=698; int fSH=740; int gH=783; int gSH=830; int aH=880;

void setup()    
{    
  pinMode(pin, OUTPUT); // Hacemos que el pin 1 sea salida.
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
~~~

En el video [prueba del zumbador en Masaylo-CRG]() podemos escuchar el resultado de grabar el código anterior en el robot.

## <FONT COLOR=#007575>**Sensores de infrarrojos**</font>
