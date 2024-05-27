# interfazConsolaC

Diseñando un programa que simula una interfaz de usuario para compras de
indumentaria "Online" en la Consola, con el lenguaje C.


Se mostrará un menu de inicio con las siguientes opciones:

1. Nombre de usuario y contraseña (mas de 10 caracteres, 1 Mayus, 1 Numero).
<p></p>
2. Comprar prendas, muestra listado con las 4 prendas de ropa a la venta
(Remera $800, Buzo $3000, Vestido $5000, Pantalon $4000)
seleccion de opcion y cantidad a comprar. se guarda en carrito.
<p></p>
3. Carrito de compras, muestra lo seleccionado, cantidad de cada prenda seleccionada.
<p></p>
    Opciones de carrito:
<p></p>
    * Muestra el listado de prendas con cantidad cada una.
<p></p>
    * Comprar, muestra el total a pagar de todo lo que hay en el.
<p></p>



4. Salir, terminar el programa.
<p></p>
<hr>
El programa no termina hasta que el usuario lo indique en la opcion 4 en el menu de inicio.
<p></p>
Funciones de manejo de cadenas de caracteres: El "usuario" tiene una funcion de formateo que muestra
el usuario colocado, primero se verifica que la cadena es mayor a 0, strlen(usuarioFormateo) > 0, luego
el primer caracter se vuelve Mayuscula con la funcion "toupper" y los siguientes los vuelve minusculas
con la funcion "tolower" usada con un ciclo for para recorrer la cadena hasta el final '\0', al ser mostrada
en pantalla se ve ese "formateo" que solo la llamo a pantalla para comprobar que cumple su funcion.
<p></p>
La contraseña tiene una funcion donde reviso la longitud de "contrasenia" y si se cumplen
los datos pedidos, con strlen reviso si tiene mas de 10 caracteres, con un for y unos if
compruebo en cada indice i de "contrasenia" si hay una Mayuscula y un Numero.
de la misma forma con un if compruebo: si se cumplen las 3 condiciones se devuelve un 1, sino 0.
<p></p>

Estructuras switch, if para controlar las elecciones y decisiones a tomar para cada una en
el menu.

Al ver la lista del carrito se verá la cantidad seleccionada de cada prenda de ropa.
<p></p>
Se podra terminar la compra, viendo el total que fue hecho con una funcion switch que dependiendo de la
opcion de prenda toma el precio y lo multiplica por la cantidad seleccionada por el comprador, lo que devuelve el precio total.
<p></p>
Con un switch dependiendo la seleccion de la prenda se le suma a su contador especifico sumandole la
cantidad dada, lo que devuelve la cantidad exacta pedida para cada prenda.
<p></p>
(El programa no cuenta con la opcion de quitar del carrito, se da por hecho que la venta se efectua si o
si.)
