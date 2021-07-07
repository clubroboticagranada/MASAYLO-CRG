# <FONT COLOR=#8B008B>Conexionado de los distintos elementos</FONT>
Describimos el conexionado que debemos realizar entre los distintos elementos, y lo haremos fundamentalmente en forma de gráfico y utilizando el pinout mostrado en la imagen siguiente. La fuente de esta imagen la tenemos en este [archivo svg](../../img/conexionado-pruebas/UNO/Masaylo-UNO-pinout.svg)

<center>

| Masaylo-CRG UNO pinout |
|:|
| ![Masaylo-CRG UNO pinout](../../img/conexionado-pruebas/UNO/Masaylo-UNO-pinout.png) |

</center>

## <FONT COLOR=#007575>**Alimentación**</font>
Antes de nada vamos a resolver las conexiones de alimentación de nuestra placa UNO y del driver de motores L298 junto con el portapilas y el interruptor. El resto de elementos se alimentarán directamente de la placa UNO. El conexionado es válido si sustituimos las cinco (o seis) pilas AA por dos baterías tipo 18650.

Para que la placa UNO y el driver queden conectados con el interruptor utilizaremos una clema de la que sacaremos un cable para el jack de alimentación del UNO y otro para el positivo del driver, siendo este cable el que previamente pasa por el interruptor procedente del portapilas. El negativo es un cable doble que va al UNO y al driver sin pasar por el interruptor.

En estas condiciones el junper *Regulador* del driver debe estar colocado en su lugar y debemos tener en cuenta que la tensión de entrada caerá en 0.7V debido al diodo protector de inversión de polaridad que lleva la placa. Esto lo podemos evitar utilizando el pin Vin de la tira de pines de alimentación, pero debemos tener en cuenta que así no hay protección y que se recomienda no usar tensiones superiores a 6V. En nuestro caso usamos 5 pilas AA con lo que partimos de una tensión de 7.5V que bajará aproximadamente a 6.8V y si usamos 2x18650 tendremos 7.2V que se quedarán en 6.5V.

En la imagen siguiente tenemos el detalle de conexionado de la alimentación para ambas placas que debemos realizar de forma cuidadosa en especial y no cambiar la polaridad de la alimentación que se ha marcado y dibujado con los colores normalizados de la misma.

<center>

| Conexionado de alimentación |
|:-:|
| ![](../../img/conexionado-pruebas/UNO/Alimentacion.png) |

</center>

La forma más sencilla de conectar los elementos es utilizando un jack de alimentación con clema como el que se ve en la imagen anterior aunque también podemos utilizar un jack normal realizando las correspondientes soldaduras.

Se **<FONT COLOR=#FF0000>recomienda</FONT>** que una vez finalizadas las conexiones se revisen estas cuidadosamente, tanto en las conexiones en si mismas como en la polaridad, antes de alimentar el sistema o conectar el USB para grabar algún programa, así evitaremos en lo posible romper algo por mal conexionado.

## <FONT COLOR=#007575>**Motores DC 3 a 6V**</font>
Procedemos a conectar los motores en las bornas del driver L298 de forma que el motor izquierdo quede conectado a OUT1 - OUT2 y el derecho a OUT3 - OUT4. Por ahora no nos preocupamos de la polaridad ya que lo haremos en las pruebas y si algún motor girar en sentido contario al esperado bastará con intercambiar sus conexiones de posición. En la imagen siguiente tenemos el conexionado de forma gráfica.

<center>

| Conexionado de motores |
|:-:|
| ![](../../img/conexionado-pruebas/UNO/motores.png) |

</center>

## <FONT COLOR=#007575>**Zumbador**</font>
Usamos el pin D1 o TxD y su Vcc asociado para conectarlo. En principio esta conexión no debe interferir en la grabación de programas en la placa que siempre se realiza utilizando los pines D0 y D1 de la placa, pero si nos da algún problema basta con que desconectemos el pin D0 del sensor en uno de sus extremos, procedamos a grabar el programa correspondiente y una vez cargado este volvemos a conectar el pin en su lugar. Si no queremos estar escuchando pitidos de manera continuada cuando subimos código a la placa o cuando usamos el monitor serie también debemos desconectar esta patilla.

En la imagen siguiente observamos una pareja de cables, uno blanco que va al pin D1 y uno negro que va a GND.

<center>

| Conexionado del zumbador |
|:-:|
| ![](../../img/conexionado-pruebas/UNO/conex-zumbador.png) |

</center>

## <FONT COLOR=#007575>**Sensores de infrarrojos**</font>
