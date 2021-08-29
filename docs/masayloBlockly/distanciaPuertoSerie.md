# <FONT COLOR=#8B008B>Detección de obstáculos. Uso del puerto serie</font>

En esta práctica aprenderemos a inicializar el sensor de ultrasonidos HC-SR04 del robot Masaylo y utilizarlo para detectar obstáculos, calcular la distancia a la que se encuentran y enviar dicho dato a nuestro ordenador para que podamos leerlo de manera directa a través del *monitor del puerto serie*

## <FONT COLOR=#007575>**¿Qué es el monitor del puerto serie?**</font>

El puerto serie es el canal de comunicación que utiliza Arduino para comunicarse con nuestro ordenador a través de nuestro cable USB, para cargar los programas compilados a través del IDE o enviar y recibir información. Los pines digitales 0 (Rx) y 1 (Tx) del microcontrolador son los encargados de realizar dicha comunicación, razón por la que se aconseja dejar ambas patillas sin conectar en nuestro sistema de control si vamos a necesitar comunicación o en el momento de cargar un nuevo programa.

El IDE de Arduino nos facilita dicha comunicación utilizando los comandos *Serial.begin(velocidad)* (la velocidad estándar suele ser de 9600 baudios), y los comandos *Serial.print(texto)* para escribir, *Serial.println(texto)* para escribir con retorno de carro, o *Serial.read(dato)* para recibir información. Para abrir este canal de comunicación, dicha IDE nos ofrece un icono muy característico.


<center>


| Icono de apertura del puerto serie en el IDE de Arduino |
| :-: |
| ![Icono del puerto serie](../../img/masayloBlockly/iconoPuertoSerie.png) |

</center>

Al hacer click en dicho icono, se abre una nueva ventana en la que Arduino imprimirá la correspondiente información a medida que transcurra el programa.

<center>

| Ventana del puerto serie en el IDE |
| :-: |
| ![Ventana del puerto serie](../../img/masayloBlockly/IDEPuertoSerie.png) |

</center>

Como siempre, MasayloBlockly nos facilitará esta tarea. Dentro del conjunto de bloques de programación asignados a "modo experto" (alcanzable, como el lector recordará, a través del icono de preferencias ![Configuracion](../img/masayloBlockly/iconoConfiguracion.png) ),podemos incluir en la zona de opciones el grupo "Puerto Serie", del que utilizaremos, en esta actividad de iniciación, las siguientes piezas:

| Icono|Función |
|---|---|
 | ![Inicio del puerto serie](../img/masayloBlockly/serialInit.png) | Inicializar el puerto serie a la velocidad en baudios indicada (9600 por defecto, configurable) |
 | ![Escribir línea](../img/masayloBlockly/serialEscribirLinea.png) | Arduino escribirá en el puerto serie el texto o dato que le indiquemos (incluye un texto editable por defecto, pero lo sustituiremos por la lectura del sensor) |

 <font color=#ff0000>**NOTA: LA PIEZA DE INICIALIZACIÓN DEL PUERTO SERIE NO ESTÁ PREPARADA PARA ENCAJAR CON LAS OTRAS, PUESTO QUE HACE REFERENCIA A UNA TAREA DE CONFIGURACIÓN PREVIA AL HILO GENERAL QUE DESARROLLARÁ EL PROGRAMA. NO HAY PROBLEMA EN DEJARLA EN EL ESPACIO DE TRABAJO DE MODO INDEPENDIENTE DE LAS DEMÁS**
 
 **OTRA NOTA: POR MOTIVOS DE CONFIGURACIÓN, EL MONITOR DEL PUERTO SERIE DE MASAYLOBLOCKLY SÓLO DEVUELVE LECTURAS DESPUÉS DE LEER UN RETORNO DE CARRO. ESO SIGNIFICA QUE SI UTILIZAMOS LA PIEZA *ENVIAR A PUERTO SERIE* SIN COMPLETAR CON *ESCRIBIR LÍNEA*, NO APARECERÁ INFORMACIÓN ALGUNA EN LA VENTANA DE DICHO MONITOR**
 </font>

 Como actividad de ampliación, sugerimos al lector que utilice el bloque de opciones "Textos" disponible en el menú de preferencias para combinar textos con el resultado medido, tal y como podrá ver en la solución final que ofrecemos.

## <FONT COLOR=#007575>**Uso del sensor de ultrasonidos como detector de obstáculos**</font>

En la sección de [análisis de elementos de la versión UNO](../../conexionado-pruebas/UNO/elementos/#sensor-de-distancia-hc-sr04) se explica sobradamente las características y el conexionado del sensor de ultrasonidos. En MasayloBlockly es muy fácil inicializar el sensor de ultrasonidos indicando los pines a que hemos conectado ***ECHO*** y ***TRIGGER***, y obtener lecturas periódicas de la distancia a cualquier obstáculo que se pueda encontrar en el rango de alcance de dicho sensor.

<center>

| El sensor de ultrasonidos puede detectar obstáculos y medir su distancia |
| :-: |
| ![Ventana del puerto serie](../../img/masayloBlockly/masaylo_distancia.png) |

</center>

Las piezas que utilizaremos para tal fin serán:

| Icono|Función |
|---|---|
 | ![Inicialización del Sensor](../img/masayloBlockly/initUS.png) | Inicializar el sensor de ultrasonidos indicando los pines TRIGGER y ECHO (por defecto, A2 y A3, pero la pieza es editable) |
 | ![Lectura de distancia](../img/masayloBlockly/dameDistancia.png) | Esta pieza devuelve la lectura en cm indicada por el sensor en su última lectura |

## <FONT COLOR=#007575>**Objetivos de la práctica**</font>

Como ya hemos explicado, queremos mostrar el uso del puerto serie al usuario no avezado de un modo sencillo, utilizándolo como canal de comunicación para obtener las distancias obtenidas por el sensor de distancia en lecturas periódicas. Podemos, pues, establecer los siguientes objetivos:

+ Inicializar el puerto serie del robot Masaylo estableciendo una velocidad estándar (9600 baudios).
+ Inicializar el robot Masaylo indicando, en su caso, los pines de control de motores.
+ Inicializar el sensor de ultrasonidos indicando los pines de conexión a **TRIGGER** y **ECHO**, en caso de ser distintos a los establecidos por defecto.
+ Realizar una lectura de distancia y pasarla al puerto serie para su lectura por parte del usuario.
+ Esperar un segundo.
+ Repetir el bucle.

<center>

| Práctica: lectura de distancias a través del puerto serie |
|:-:|
| ![Leyendo el puerto serie](../img/masayloBlockly/distanciaPuertoSerie.png) |

</center>


### <FONT COLOR=#007575>**Programa: lectura de distancias medidas por el sensor US a través del puerto serie**</font>

La siguiente imagen desarrolla el programa utilizado (<font color=#0000FF>Nota: este programa está disponible en el botón de Ejemplos del menú principal, con el título "Envía la distancia al obstáculo detectado al puerto serie de tu ordenador").</font>

<center>

| Programa: envío de los datos de distancia al puerto serie |
|:-:|
| ![Programando con PWM](../img/masayloBlockly/programaDistanciaSerie.png) |

</center>

### <FONT COLOR=#007575>**Resultado: lectura de distancias a través del puerto serie**</font>

Para abrir el monitor del puerto serie, sólo hay que hacer doble click en el icono ![Monitor serie](../img/masayloBlockly/iconoMonitor.png) para abrir la ventana del monitor y hacer click en el botón ***Arrancar** (debe asegurarse de que la velocidad estipulada es 9600) para iniciar la comunicación con el sistema de control del Masaylo:

<center>

| Lectura de los datos de distancia usando el monitor de MasayloBlockly |
|:-:|
| ![Leyendo el puerto serie](../img/masayloBlockly/medicionPuertoSerie.png) |

</center>

### <FONT COLOR=#007575>**Ejercicio de ampliación: programar un sistema de desplazamiento que evite obstáculos**</font>

Con lo mostrado hasta aquí, el lector debería ya estar suficientemente capacitado para programar a Masaylo de modo que éste se mueva de forma autónoma evitando los obstáculos que se presenten. En el botón de Ejemplos del menú principal hay precisamente un algoritmo que cumple este objetivo, llamado "Aprende a detectar obstáculos con el sensor US y a esquivarlos mediante movimientos aleatorios".

<center>

| Ejercicio de ampliación: movimiento autónomo con detección y evasión de obstáculos |
|:-:|
| ![Leyendo el puerto serie](../img/masayloBlockly/salvaObstaculosBasico.png) |

</center>

## <FONT COLOR=#007575>**Vídeo explicativo: uso del puerto serie para leer distancias a obstáculos detectados**</font>

<iframe width="560" height="315" src="https://www.youtube.com/embed/zfkvxzSqDQE" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>