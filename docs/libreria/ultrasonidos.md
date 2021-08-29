# <FONT COLOR=#8B008B>Ultrasonidos y masaylo</font>
Masaylo incorpora un sensor de ultrasonidos en su parte delantera, que nos servirá para medir distancias a los objetos que pueda encontrar en su camino.
Las órdenes que tenemos para controlar el sensor de ultrasonidos son:

* *objetoMasaylo.ultrasonidos (pinTrigger,pinEcho)*: Configura los pines trigger y echo del sensor de ultrasonidos. Si no pasas parámetros *objetoMasaylo.ultrasonidos()*, pone los valores *objetoMasaylo.ultrasonidos(16,17)*, esta instrucción debe estar en el setup de nuestro programa. En nuestro caso del ejemplo *m.ultrasonidos (16,17)*.
* *objetoMasaylo.distancia ()*: Nos devuelve la distancia en cm entre el sensor de ultrasonidos y el objeto que tenga enfrentado. En nuestro caso del ejemplo *m.distancia()*.
*  
En el ejemplo que presentamos a continuación se configura el sensor de ultrasonidos, para mostrar por el puerto serie la distancia a la que se encuentra un objeto enfrentado al robot masaylo.

<center>

| Ultrasonidos |
|:|
| ![Ultrasonidos](../img/libreria/ultrasonidos_01.png) |

</center>