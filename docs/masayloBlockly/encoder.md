# <FONT COLOR=#8B008B>Trabajo con encoder. Control básico de distancias y ángulos</font>

Masaylo nos ofrece también la posibilidad de instalar dos encoder modelo  [FC-03](../../conexionado-pruebas/UNO/elementos/#encoder-infrarrojos-fc-03), que permiten un cierto control sobre el ángulo de giro de los motores DC de desplazamiento. Estos sensores, de por sí, son de difícil manejo para los aficionados maker con una cierta experiencia en la implementación de sistemas con Arduino. Además, precisan del manejo de **interrupciones** por parte del microprocesador, concepto éste reservado para estudiantes más avanzados. No obstante, la librería de Masaylo resuelve con cierta elegancia todos estos inconvenientes, permitiendo un control, si no perfecto, sí bastante adecuado de distancias recorridas y ángulos de desplazamiento.
<font color=#ff0000>**Nota: al contrario que en el resto de sensores, los pines de conexión de los encoder no son opcionales. Deben ser forzosamente 2 y 3, aunque puedan intercambiarse entre sí. Esto se debe a que la librería gestiona el funcionamiento de estos sensores basándose en el uso de interrupciones, que en las tarjetas Arduino UNO y NANO deben ser forzosamente estas patillas**</font>

<font color=#0000ff>Repetimos que el uso de estos encoder en Arduino es bastante complicado, por lo que el lector no debería esperar resultados perfectos. Si sujetamos a Masaylo en el aire, es decir, probamos los programas en vacío, obtendremos el funcionamiento más aproximado. Una vez en el suelo, dependiendo del estado de las pilas, podemos encontrar errores más o menos aproximados. </font>

## <FONT COLOR=#007575>**Control de distancias y ángulos en MasayloBlockly**</font>

MasayloBlockly aprovecha al máximo las características de la librería de Masaylo para ofrecernos el siguiente despliegue de opciones:

| Icono| Función |
|:-:|---|
| ![Inicio de encoders](../img/masayloBlockly/encoderInit.png) | Inicializar los encoder indicando sus pines a izquierda y derecha. El diámetro hace referencia al de las ruedas de Masaylo. Si el usuario modificara dicho tamaño, debe especificarlo para el correcto cálculo de distancias recorridas. |
| ![Esperar un número de vueltas determinado](../img/masayloBlockly/encoderEsperaVueltas.png) | Cuando Masaylo está en marcha hacia adelante, espera a que sus ruedas hayan dado el número de vueltas especificado antes de pasar a la siguiente orden|
| ![Esperar a recorrer una distancia determinada](../img/masayloBlockly/encoderEsperaDistancia.png) | Cuando Masaylo está en marcha hacia adelante, espera a haber avanzado la distancia indicada antes de pasar a la siguiente orden|
| ![Esperar a girar un ángulo determinado](../img/masayloBlockly/encoderEsperaAngulo.png) | Cuando Masaylo está girando, espera a haber avanzado el ángulo marcado por el usuario antes de pasar a la siguiente orden|

## <FONT COLOR=#007575>**Objetivos de la práctica**</font>

En esta ocasión, nos proponemos utilizar los encoder para hacer que Masaylo haga un recorrido que dibuje un cuadrado de 20 cm. 
Nuestro programa deberá cumplir los siguientes objetivos:

+ Inicializar el robot Masaylo indicando, en su caso, los pines de control de motores.
+ Inicializar los encoder, indicando la patilla a que están conectados (forzosamente deben ser los pines digitales 2 y 3).
+ Repetir en bucle cuatro veces el siguiente conjunto de órdenes:
    + Ir hacia adelante
    + Esperar 20 cm
    + Parar durante 1 segundo
    + Girar a la derecha
    + Esperar a haber completado los 90 º
    + Parar durante 1 segundo
+ Fin del programa. Interrumpir ciclo de trabajo.

### <FONT COLOR=#007575>**Nuevo bloque de control de flujo: uso de bucles**</font>

Aprovechando que hay que repetir conjuntos de órdenes, presentaremos otra de las piezas importantes dentro de la opción **Lógica** de MasayloBlockly: el comando *Repetir x veces*

<center>

| Comando de control de flujo: repetir x veces|
|:-:|
| ![Leyendo el puerto serie](../img/masayloBlockly/repetirXVeces.png) |

</center>

### <FONT COLOR=#007575>**Programa: recorrer un cuadrado perfecto**</font>

La imagen siguiente presenta la solución a la práctica propuesta(<font color=#0000FF>Nota: este programa está disponible en el botón de Ejemplos del menú principal, con el título "Aprende a usar los encoder de ranura para recorrer un cuadrado perfecto").</font>

<center>

| Práctica: recorrer un cuadrado perfecto |
|:-:|
| ![Leyendo el puerto serie](../img/masayloBlockly/encoderRecorreCuadrado.png) |

</center>
