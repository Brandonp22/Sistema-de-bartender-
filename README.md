# Sistema-de-bartender-
Sistema automático de mezcla de bebidas y tragos con refrigeración incluida con una celda peltier.


|Integrante  |Rol|
| :- | :- |
|Jonathan René Cameros Vargas|Analista|
|José Carlos Díaz López|Analista|
|Brandon Josué Pineda Chacón|Desarrollador|
|Jose Mario Ayala Resuleu|Desarrollador|

#
[Analisis del proyecto](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Analisis.md)

[Propuesta del proyecto](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Propuesta.md)

[Arquitectura del proyecto](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Arquitectura.md)


# Releases
**[Todas las releases](https://github.com/Brandonp22/Sistema-de-bartender-/releases)

**V1.0
**[Ir a la release](https://github.com/Brandonp22/Sistema-de-bartender-/releases/tag/v1.0)

# Funcionalidades del sistema

**-1. Mezclar bebidas**
<p>La función principal del sistema será la mezcla de cocteles tanto alcohólicos como no alcohólicos mediante la dosificación de los diferentes elementos que conforman el cóctel seleccionado. </p><p></p>

**-2. Menú de selección de bebidas**
<p>El sistema contará con una pantalla y 2 botones para seleccionar la bebida que deseemos que “El canchito” prepare.</p><p></p>

**-3. Menú de configuración**
<p>“El canchito” contará con un menú para configurar que tipo de bebida es la que dispensa cada bomba para así poder cambiar el tipo de cocteles que pueda preparar el sistema.</p><p></p>

**-4. 4 bombas, 4 bebidas**
<p>“El canchito” contará con 4 bombas para extraer 4 tipos diferentes de bebidas para hacer diferentes mezclas</p><p></p>

**-5. Sistema de refrigeración**
<p>“El canchito” contará con un sistema de refrigeración en la parte del almacenamiento de los líquidos para que cada coctel que se prepare siempre esté frío.</p><p></p>

# Arquitectura usada

**Arquitectura de microservicios**

![](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/microservicios.png)

**¿Qué es?**

Es un método de desarrollo de aplicaciones software y hardware que funciona como un conjunto de pequeños servicios que se ejecutan de manera independiente y autónoma, proporcionando una funcionalidad de negocio completa. En ella, cada microservicio es un código que puede estar en un lenguaje de programación diferente, y que desempeña una función específica. Los microservicios se comunican entre sí a través de APIs, y cuentan con sistemas de almacenamiento propios, lo que evita la sobrecarga y caída de la aplicación.

**Ventajas** 

**Modularidad:** Ya que en el sistema de bartender hay servicios distintos que son autónomos como el sistema de refrigeración, el sistema de las bombas para las bebidas, el menú de la máquina, etc., se pueden desarrollar y desplegar de forma independiente. Además, un error en un servicio no debería afectar la capacidad de otros servicios para seguir trabajando según lo previsto.

**Escalabilidad:** Como es un proyecto modular, se puede escalar horizontalmente cada parte según sea necesario, aumentando el escalado de los módulos que tengan un procesamiento más intensivo.

**Despliegue y rapidez:** Debido a los tiempos de entrega del proyecto, se podrá desplegar más rápidamente, ya que no se tendrán que cargar todos los módulos al mismo tiempo, sino los necesarios.


**¿Por qué se eligió esta arquitectura para este proyecto?**

Este proyecto es un proyecto donde hay funcionalidades (microservicios) que están separadas, las cuales son:

- Boquilla para dispensar la bebida puesta en su base.
- Menú de configuración para que elegir las bebidas que se van a mezclar y la cantidad de las mismas.
- Menú de selección de bebidas para el usuario donde va a elegir el trago (por su nombre) y la máquina se encargará de dispensarlo.
- Sistema de refrigeración para mantener las bebidas que se mezclarán frías.

**Gráfica de microservicios**

![](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/grafica.png)



Hay otra funcionalidad, que es la de mezclar bebidas, pero esto no es un microservicio ya que depende de que las otras funcionalidades estén en pleno funcionamiento.
# Análisis UI/UX

**UI (User interface):**

**Diseño de la máquina:**

Se optó por un diseño minimalista pero moderno, de color negro para hacerlo más atractivo al usuario debido a su diseño sobrio.

**Pantalla OLED y botones de navegación:**

Debido al esquema de colores que se eligió para la máquina, la pantalla OLED termina resaltando al mismo tiempo que los 2 botones de navegación, siendo llamativos para el usuario debido al color rojo de estos últimos resaltando en el fondo negro.

**Sistema de refrigeración acoplado a la parte trasera del sistema de bartender:** 

Para tener un espacio reducido y una vista más elegante, se decidió acoplar el sistema de refrigeración de bebidas a la parte trasera del sistema de inyección. Esto permite instalar la máquina en un lugar con un espacio menor haciéndola más práctica de usar y transportar.

**Diseño compacto:**

Así como se redactaba en el anterior punto, la máquina cuenta con un diseño compacto que la hace más fácil de instalar por lo que se vuelve más atractiva a los usuarios. Esto incluye el lugar donde se despachan las bebidas al usuario, el menú de selección y el sistema de refrigeración estando en un mismo armazón lo cual lo hace más práctico.

**UX (User experience):**

**Botones de navegación:**

Se optó por utilizar el mínimo de botones para controlar la máquina, al final solo se utilizaron dos (2) botones de color rojo para resaltar del fondo y ser llamativos al usuario. Siendo estos uno para scrollear por el menú y el otro para elegir la bebida que se quiere que se despache, lo cual lo hace un sistema fácil de utilizar para el usuario final.

**Sistema de refrigeración:** 

Está construido para que sea fácil rellenar de nuevo los almacenes de las bebidas para el usuario final, ahorrando así el tiempo de mantenimiento, así como volverlo un sistema que se pueda utilizar por un periodo largo de tiempo sin volverse algo desechable, haciéndolo más atractivo al cliente.

**Fácil uso y aprendizaje:**

La selección fácil de las bebidas lo hace un sistema fácil de utilizar, solo se necesita colocar el recipiente a llenar en el lugar debidamente señalado y presionar el botón de selección y solo quedaría esperar a que termine la máquina, algo fácil y rápido.


# Estrategias de prueba

**-Especificación:** Este tipo de prueba incluye probar la aplicación en contra de la documentación que se hizo antes. Vamos a testear de que las 5 funciones propuestas si funcionen tal y como lo habíamos planeado y que no contengan errores.

**-Usabilidad:** Este tipo de prueba se refiere a asegurar de que la interfaz de usuario (o GUI) sea intuitiva, amigable y funcione correctamente.

**-Prueba alfa:** La prueba alfa es conducida por un cliente en el lugar de desarrollo. Se usa el software de manera natural, con el encargado de desarrollo "mirando por encima del hombro" del usuario" y registrando errores y problemas de uso. En nuestro caso será con el ingeniero Estuardo Villatoro verificando que todas las funciones sirvan de la manera que se propuso.

# Diagramas correspondientes al proyecto

**Diagrama del circuito**

![](https://github.com/Brandonp22/Sistema-de-bartender-/releases/download/v1.0/diagrama.del.circuito.png)

**Diagrama de casos de uso del usuario**

![]()

**Diseño 3D del sistema**

![](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/diagrama%203d%202.png)

![](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/diagrama%203d.png)

