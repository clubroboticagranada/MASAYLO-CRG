# <FONT COLOR=#8B008B>Mi primer programa. Instalación de librerías</font>
Para compilar y cargar los binarios en Arduino, MasayloBlockly utiliza la herramienta **[arduino-cli](https://github.com/arduino/arduino-cli)**, una solución integral que gestiona la instalación de librerías y tarjetas (Arduino o ESP), la compilación y el volcado del código. Si bien es una herramienta completamente portable y autónoma, MasayloBlockly creará una carpeta en nuestro disco duro (incluso en sus versiones portables) que utilizará para trabajar con archivos temporales. Además, arduino-cli necesita un archivo de configuración e instalar el núcleo de compatibilidad (core) con las tarjetas Arduino y, opcionalmente, tarjetas ESP, así como las librerías que usa MasayloBlockly con estos sistemas de control.

## <FONT COLOR=#007575>**Pasos de instalación detallados**</font>

La primera vez que intentamos compilar/cargar un programa con una nueva versión de MasayloBlockly, el software lo detectará y enviará un mensaje en una ventana emergente indicando que necesita instalar algunas librerías.
<center>

![Mensaje de instalación](../img/masayloBlockly/instala1.jpg"Una ventana emergente avisa de que necesita instalar algunas librerías.") 

</center>

El proceso que sigue a continuación va informando al usuario de manera ordenada en sucesivas ventanas emergentes de los pasos que se van dando. Como el proceso es muy parecido en los sistemas operativos Windows y Linux, procedemos a documentarlo en Linux.

Tras cerrar el primer popup, se abre otro indicando al usuario que espere un mensaje de confirmación. El siguiente paso es crear una carpeta llamada *masaylo* en la carpeta 
> /home/usuario/.masaylo

Una vez creada dicha carpeta, un nuevo mensaje avisa de que se va a proceder a copiar las librerías necesarias en la carpeta 
>/home/usuario/Arduino/libraries

<font color=#00FF00>Si nunca se había trabajado con Arduino antes, dicha carpeta se creará. Si, por el contrario, el usuario ya había experimentado con el IDE de Arduino, dicha carpeta ya existirá, y simplemente se añadirán las carpetas necesarias.</font>
<center>

| Creación de la carpeta .masaylo |
|:-:|
| ![Paso 1](../img/masayloBlockly/instala2.jpg"Creación de la carpeta .masaylo") |

</center>

Como puede verse en la anterior figura, el proceso es lo bastante rápido como para que se solapen algunos pasos. Esto no perjudica en absoluto el resultado final, más bien al contrario.

Una vez copiadas las librerías, se procede a instalar la compatibilidad con las tarjetas Arduino de microcontrolador AVR con las que trabaja MasayloBlockly

<font color=#FF0000>**AVISO: ES NECESARIA UNA CONEXIÓN A INTERNET**</font>
<center>

![Paso 2](../img/masayloBlockly/instala3.jpg"Librerías instaladas. Se procede a instalar el core de AVR")</center>

Dependiendo de la potencia de nuestro ordenador, este proceso puede alargarse un poco. No obstante, en poco tiempo surgirá un nuevo popup de confirmación:

<center>![Paso 3](../img/masayloBlockly/instala4.jpg"Arduino-cli ya puede trabajar con nuestras tarjetas Arduino")</center>

Sólo nos queda instalar la compatibilidad con ESP8266 (como la NodeMCU) y ESP32. Como es opcional, la nueva ventana abierta nos permite elegir si queremos hacer esta instalación.

<center>![Paso 4](../img/masayloBlockly/instala5.jpg"Podemos elegir si queremos trabajar con ESP8266 y ESP32")</center>

<FONT color=#FF0000>**DISCLAIMER: Arduino-cli necesita descargar los archivos necesarios para trabajar con estas carpetas de un servidor de Espresiff. Hemos podido comprobar que, en ocasiones, este servidor no responde correctamente y nos podemos encontrar con un mensaje de error. Ello únicamente supone que MasayloBlockly aún no puede trabajar con dichas tarjetas, pero el resto de la instalación se ha llevado a cabo con éxito. En otro apartado hemos dejado un link a un script que nos permitirá volver a intentarlo si nos encontramos con este problema.**</font>

Si elegimos instalar los core de ESP (muy recomendable), se nos avisará de que este proceso puede ser algo más largo que los anteriores.

<center>![Paso 5](../img/masayloBlockly/instala6.jpg"Nos avisan de que el proceso puede ser algo más largo")</center>

Si todo va bien, un último mensaje nos confirmará que ya estamos preparados para empezar a trabajar.

<center>![Paso 6](../img/masayloBlockly/instala7.jpg"¡Proceso terminado!")</center>

## <FONT COLOR=#007575>**Vídeo explicativo: instalación de librerías y archivos de características**</font>

<iframe width="560" height="315" src="https://www.youtube.com/embed/ZMTX7RswBtI" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

## <FONT COLOR=#007575>**¿Qué hacer si falla la instalación de ESP8266 y ESP32?**</font>

Si falla la instalación de tarjetas ESP, no estaremos preparados para usar MasayloBlockly para programar sistemas IoT (Internet of Things, Internet de las cosas), de modo que tenemos dos posibilidades:

+ Desinstalar Masaylo y repetir el proceso (en Linux, bastaría con borrar la carpeta *./masaylo* de nuestra home)
+ Instalar manualmente estas tarjetas con un script (un programa de consola).

### <font color=#0000ff>[LINK A SCRIPT DE INSTALACIÓN DE TARJETAS ESP](instalaESP.zip)</font>

### <FONT COLOR=#007575>**Vídeo explicativo: uso de script de instalación de tarjetas ESP8266 y ESP32**</font>

<iframe width="560" height="315" src="https://www.youtube.com/embed/62xZ-LqR8eM" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>