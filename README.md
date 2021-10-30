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

[Enfoque estratégico](https://github.com/Brandonp22/Sistema-de-bartender-/wiki/Enfoque-estratégico)

[Propuesta UI/UX](https://github.com/Brandonp22/Sistema-de-bartender-/wiki/Propuesta-UI-UX)

[Diseño basado en el usuario](https://github.com/Brandonp22/Sistema-de-bartender-/wiki/Diseño-basado-en-el-usuario)


# Releases
[Todas las releases](https://github.com/Brandonp22/Sistema-de-bartender-/releases)

V1.0
[Ir a la release](https://github.com/Brandonp22/Sistema-de-bartender-/releases/tag/v1.0)

V2.0
[Ir a la release](https://github.com/Brandonp22/Sistema-de-bartender-/releases/tag/v2.0)

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

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/microservicios.png" alt="drawing" width="700"/>

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

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/grafica.png" alt="drawing" width="700"/>


Hay otra funcionalidad, que es la de mezclar bebidas, pero esto no es un microservicio ya que depende de que las otras funcionalidades estén en pleno funcionamiento.

# Enfoque estratégico 

El bartender “El Canchito” consta de una variedad de contenidos que un análisis de software (aplicado a hardware) podría contar, a continuación, mostramos los contenidos más sobresalientes aplicados a este proyecto.

El proyecto final del curso de análisis de sistemas II cuenta con un enfoque estratégico básico, se utilizó el medio de la verificación y se desarrollaron un conjunto de tareas que garantizan que el software implementa correctamente cada función específica, asimismo, de la mano con la verificación se trabajó la validación, y esta consto de diferentes tareas, valga la redundancia, que aseguran que el software que se construye siga los requerimientos del cliente.

Para las pruebas de software y conllevar de la mano la V&V, (Verificación y Validación) se llevaron a cabo pruebas fundamentales aprendidas en el curso y puestas en práctica. He aquí una corta lista.

- Revisiones técnicas
- Monitoreo de rendimiento
- Simulación
- Estudio de factibilidad
- Revisión de documentación
- Análisis de algoritmos
- Pruebas de desarrollo
- Pruebas de usabilidad
- Pruebas de instalación
- Entre otras.

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

# Diseño basado en el usuario

El diseño centrado en el usuario de este sistema de bartender automático, toma en cuenta 4 aspectos de los temas centrales en el diseño centrado en el usuario:

- Facilidad de uso
- Contenido
- Satisfacción
- Rendimiento

Esto es de vital importancia a la hora de seducir al usuario final, ya que un buen diseño centrado en su experiencia utilizando la máquina, hará que quiera utilizar muchas veces más.

**Facilidad de uso:** El diseño básicamente se basó en esto, darle un diseño con muy fácil usabilidad, es por ello que solamente se escogieron 2 botones y una pantalla como parte interactiva de la máquina, para que el usuario no encontrara muy complejo las acciones que tiene que llevar a cabo para llenar su vaso.

**Contenido:** El menú con el que interactúa el usuario es demasiado simple, su contenido se basa concretamente en las bebidas que podemos seleccionar, sin desviarse de la esencia principal del proyecto, sin distracciones que puedan hacer complejo el manejo de la máquina.

**Satisfacción:** El proceso de llenado del vaso es un proceso satisfactorio debido al diseño que le dimos a la máquina, porque luego de elegir la bebida correspondiente, inicia a dispensarla por medio del método para ello, y, además, se logra una satisfacción para el usuario a través del sistema de refrigeración integrado, lo que hace que los tragos salgan fríos.

**Rendimiento:** El rendimiento es una característica muy bien pensada y muy bien ejecutada. La máquina puede rendir cuantas veces quiera, y, si se terminan las bebidas para mezclar, el diseño está hecho para que volver a poner las bebidas sea muy sencillo, solo abriendo la compuerta del refrigerador y sustituyendo a las existentes.

**Proyección de marketing con usabilidad**

La naturaleza del proyecto lo hace un proyecto con altas oportunidades de explotar su marketing ya que tiene un diseño llamativo, en el cual resaltan los siguientes aspectos:

- **Color negro:** Este color fue elegido por su elegancia, seriedad y buena aceptación por el público en general, partiendo desde el pensamiento que un color más llamativo podría no ser del agrado de todas las personas, por ende, siendo color negro se llegaría a un porcentaje más alto de personas.
- **Botones de color rojo:** El color de los botones fue pensado previamente, buscando un color que sea vivo, porque detalles así hacen atractivo a un proyecto, y ya sabemos que verse y ser innovadores hace que mucha más gente utilice los productos, los botones están posicionados estratégicamente con el fin del fácil aprendizaje de uso de los mismos.
- **Visibilidad en la producción:** Cuando el trago se está haciendo, el objetivo primordial es que el usuario pueda observar el proceso de llenado de su vaso. Esto hace a la máquina en cierto grado “interactiva” con el usuario, en la que el usuario siente cierto poder, porque está viendo como el sistema sigue la orden que le dio previamente, lo cual siempre atrae a los usuarios de un sistema.

Viendo todos los aspectos que están relacionados con el diseño centrado en el usuario, se puede decir que se obtiene como resultado el **“Good customer experience”** esperado, porque se combinan objetivos diversos tales como negocios, marketing, usabilidad y experiencia de usuarios en un mismo sistema.

**Bosquejos**

Al inicio del proyecto se consideraron 2 bosquejos anteriores a la versión final que está en el diseño 3D de “El canchito”, los cuales son los siguientes:

**1er bosquejo**

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/1erbosquejo.jfif" alt="drawing"  width="700"/>

**Desventajas:** 

- Demasiado grande.
- Posibilidad de problemas por la distinta longitud de las mangueras que llegan al destino.
- No es agradable a la vista el que el menú y la sección de servir estén tan separadas y no integradas como un solo conjunto.
- El sistema de refrigeración debe ser más grande por lo que se gastan más recursos económicos.
- Mayor gasto en general.

**2do bosquejo**

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/2do%20bosquejo.jfif" alt="drawing"  width="700"/>

**Desventajas:**

- No integración del menú y el servido en un solo conjunto.
- Diseño que no es tan llamativo ya que el menú se ve muy separado de la otra función.
- Las mangueras que sirven bebidas tendrían que estar muy unidas lo cual puede causar problema.

# Diagramas correspondientes al proyecto

**Diagrama del circuito**


<img src="https://github.com/Brandonp22/Sistema-de-bartender-/releases/download/v1.0/diagrama.del.circuito.png" alt="drawing" width="700"/>

**Diagrama de casos de uso del usuario**


**Diseño 3D del sistema**

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/diagrama%203d%202.png" alt="drawing" width="700"/>

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/diagrama%203d.png" alt="drawing" width="700"/>

# Anexos

1.) El primer anexo muestra el circuito realizado con la imagen del rapberry donde en principio fue pensado realizar el proyecto.

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/anexo1.jfif" alt="drawing" width="700"/>

2.) Beta del menú que tuvo que ser cambiado por el controlador de la pantalla.

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/anexo2.jfif" alt="drawing" width="700"/>

3.) Pantalla con menú final que es implementado en el proyecto.

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/anexo5.jfif" alt="drawing" width="700"/>

4.) Pasos finales en la configuración.

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/anexo4.jfif" alt="drawing" width="700"/>

5.) Diseño realizado del bartender automático

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/anexo3.jfif" alt="drawing" width="700"/>

6.) Prueba de llenado

<img src="https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/anexo6.jfif" alt="drawing" width="700"/>


