# <FONT COLOR=#8B008B>Materiales necesarios y ensamblado plataforma superior</font>

***

## <FONT COLOR=#007575>**Plataforma superior**</font>
En esta pieza es donde vamos a colocar el servo para el brazo aparta objetos y los elementos de electrónica correspondientes a cada versión. El brazo lo podemos color tanto a la derecha como a la izquierda y recordemos que de forma opcional podemos poner también el soporte del zumbador o un sensor fijo de ultrasonidos. El aspecto de la pieza denominada plataforma superior lo vemos en la imagen siguiente.

<center>

| Plataforma superior en fase de diseño | Plataforma superior |
|:-:|:-:|
| ![Plataforma superior en fase de diseño](../img/3D/imagenes/capturas/10-plataforma-superior.png) | ![Porta HC-SR04 fijo impreso](../img/3D/imagenes/fotos/10-plataforma-superior.jpeg) |

</center>

## <FONT COLOR=#007575>**Brazo aparta objetos**</font>
Se trata de una especie de gancho accionado por un servo SG-90 que nos va a servir para apartar objetos detectado por el sensor HC-SR04 de nuestro camino. La idea es que el brazo estará normalmente replegado hacia las ruedas y que, cuando vamos siguiendo una línea o resolviendo un laberinto o simplemente desplazándonos con el robot y detectamos enfrente un objeto del tamaño de una lata de refresco, se accione el brazo para envolverlo, el robot realice un giro arrastrando el objeto fuera de su trayectoria, posteriormente deshaga el giro, retraiga el brazo y continue su camino. El aspecto del brazo en fase de diseño e impreso lo vemos en la imagen siguiente.

<center>

| Brazo en fase de diseño | Brazo impreso |
|:-:|:-:|
| ![Brazo en fase de diseño](../img/3D/imagenes/capturas/11b-brazo.png) | ![Brazo impreso](../img/3D/imagenes/fotos/11b-brazo.jpeg) |

</center>

| **P7. Brazo aparta objetos** | Imágenes |
|---|:-:|
| <br>Necesitamos:</br><br>- 1 brazo impreso</br><br>- 1 soporte para servo impreso</br><br>- 1 pala de un brazo para el servo</br><br>- 1 tornillo de rosca chapa de los que vienen con el servo</br><br>- 1 servo SG-90</br><br>- 2 tornillos M2x10mm</br><br>- 2 tuercas M2</br><br>- 2 tornillos M3x10mm</br><br>- 2 tuercas M3</br><br>Montamos el servo en su soporte y lo sujetamos con los tornillos M2x10. Colocamos la pala en el alojamiento del brazo y atornillamos este conjunto al servo con el tornillo de rosca chapa. El conjunto anterior lo montamos sobre la plataforma superior en el lugar escogido para ello que deberá estar lo mas cercano posible a la parte delantera del robot si imprimimos el brazo a su tamaño original. </P> <P align="right"><FONT COLOR="#7D3C98">En las imágenes vemos el aspecto de las piezas tanto en fase de diseño como impresas --></FONT></P></br><br>Es conveniente realizar el posicionamiento del engranaje del servo de forma adecuada antes de continuar. Teniendo en cuenta que el servo puede girar 180º colocamos el engranaje con la mano o con ayuda de una de las palas del servo en tal posición que permita el movimiento correcto del brazo o del sensor de ultrasonidos.</br> |<br>![Brazo con servo en fase de diseño](../img/3D/imagenes/capturas/11c-soporte-servo-brazo.png)</br><br>![Brazo con servo](../img/3D/imagenes/fotos/11c-soporte-servo-brazo.jpeg)</br> |

En las imagenes siguientes vemos la plataforma superior con el brazo colocado.

<center>

| Plataforma superior con brazo en fase de diseño | Plataforma superior con brazo |
|:-:|:-:|
| ![Plataforma superior con brazo en fase de diseño](../img/3D/imagenes/capturas/12-plataforma-superior-con-brazo.png) | ![Plataforma superior con brazo](../img/3D/imagenes/fotos/12-plataforma-superior-con-brazo.jpeg) |

</center>

## <FONT COLOR=#007575>**Interruptor, Placa UNO y driver motores**</font>
Introducimos el interruptor en el orificio rectangular de la plataforma superior destinado para ello y ejerciendo un poco de presión lo encajamos en su lugar.

| **P8. Placa UNO y driver motores** | Imágenes |
|---|:-:|
| <br>Necesitamos:</br><br>- 7 separadores M3x5mm impresos</br><br>- 7 tornillos M3x12mm</br><br>- 7 tuercas M3</br><br>- 1 placa UNO con pines extendidos</br><br>- 1 placa driver de motores L298</br><br>Utilizando separadores M3x5mm impresos y tornillos M3x12mm con sus tuercas, colocamos tanto la placa UNO como la placa de drivers en su lugar, que con el interruptor ya colocado nos deja la plataforma superior acabada. </P> <P align="right"><FONT COLOR="#7D3C98">En la imágen vemos el aspecto del separador en fase de diseño --></FONT></P></br> |<br>![Separador M3x5mm en fase de diseño](../img/3D/imagenes/capturas/111a-separador-M3x5.png)</br> |

En la imagen siguiente vemos la plataforma superior en el estado actual.

<center>

| Plataforma superior finalizada en fase de diseño |
|:-:|
| ![Plataforma superior finalizada en fase de diseño](../img/3D/imagenes/capturas/111b-plat-sup-brazo-UNO-L298-interruptor.png) |

</center>

## <FONT COLOR=#007575>**Ensamble de las dos plataformas**</font>

| **P9. Ensamble de las dos plataformas** | Imágenes |
|---|:-:|
| <br>Necesitamos:</br><br>- 4 separadores M3x28mm impresos</br><br>- 4 tornillos M3x40mm</br><br>- 4 tuercas M3</br><br>Utilizando los separadores M3x28mm impresos y tornillos M3x40mm con sus tuercas, sujetamos la plataforma superior a la inferior. </P> <P align="right"><FONT COLOR="#7D3C98">En la imágen vemos el aspecto del separador en fase de diseño --></FONT></P></br> |<br>![Separador M3x5mm en fase de diseño](../img/3D/imagenes/capturas/separador-M3x28.png)</br> |

En la imagen siguiente vemos las dos plataformas montadas.

<center>

| Plataformas superior e inferior montadas en fase de diseño | Plataformas superior e inferior montadas |
|:-:|:-:|
| ![Plataformas superior e inferior montadas en fase de diseño](../img/3D/imagenes/capturas/13-robot-finalizado.png) |![Plataformas superior e inferior montadas](../img/3D/imagenes/fotos/13-robot-finalizado.jpeg) |

</center>

## <FONT COLOR=#007575>**Sensores de ranura**</font>
El último paso a realizar es colocar los sensores de ranura sujetos a la plataforma superior y alineados con los discos ranurados de forma que estos giren libremente.
<center>

| **P10. Sensores de ranura** | 
|---|
| <br>Necesitamos:</br><br>- 2 sensores de ranura</br><br>- 2 tornillos M3x10mm</br><br>- 2 tuercas M3</br><br>- 2 arandelas M3</br><br>Sujetamos ambos sensores en su lugar. </P> |

</center>

En las imagenes siguientes vemos mas en detalle el aspecto de estos sensores montados en su lugar.

<center>

| Sensores de ranura en fase de diseño | Sensores de ranura montados |
|:-:|:-:|
| ![Sensores de ranura en fase de diseño](../img/3D/imagenes/capturas/14-vista-posterior.png) |![Sensores de ranura montados](../img/3D/imagenes/fotos/14-vista-posterior.jpeg) |

</center>

## <FONT COLOR=#007575>**Aspecto final del robot**</font>
Una vez finalizado el montaje de todos los elementos el robot presenta, en fase de diseño, el aspecto que vemos en las imágenes siguientes.

<center>

| Robot ensamblado en fase de diseño | Robot ensamblado en fase de diseño sobre el soporte de pruebas |
|:-:|:-:|
| ![Robot ensamblado en fase de diseño](../img/3D/imagenes/capturas/15-vista-lateral.png) |![Robot ensamblado en fase de diseño sobre el soporte de pruebas](../img/3D/imagenes/capturas/16c-robot-HC04-fijo-soporte.png) |

</center>

En las imágenes siguientes vemos el robot con el ensamblado finalizado.

<center>

| Robot ensamblado | Robot ensamblado |
|:-:|:-:|
| ![Robot ensamblado](../img/3D/imagenes/fotos/15-otra-vista-lateral.jpeg) |![Robot ensamblado](../img/3D/imagenes/fotos/15-vista-lateral.jpeg) |

</center>

En la imagen siguiente vemos el robot ensamblado colocado sobre el soporte de pruebas listo para comenzar el conexionado y pruebas del montaje.

<center>

| Robot ensamblado sobre su soporte |
|:-:|
| ![Robot ensamblado sobre su soporte](../img/3D/imagenes/fotos/ensamble-completo.png) |

</center>
