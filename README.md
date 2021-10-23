# Sistema-de-bartender-
Sistema automático de mezcla de bebidas y tragos con refrigeración incluida con una celda peltier.


|Integrante  |Rol|
| :- | :- |
|Jonathan René Cameros Vargas|Analista y desarrollador|
|José Carlos Díaz López|Analista y desarrollador|
|Brandon Josué Pineda Chacón|Desarrollador|
|Jose Mario Ayala Resuleu|Desarrollador|

#
[Analisis del proyecto](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Analisis.md)

[Propuesta del proyecto](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Propuesta.md)


**Releases**
[Todas las releases](https://github.com/Brandonp22/Sistema-de-bartender-/releases)

V1.0
[Ir a la release](https://github.com/Brandonp22/Sistema-de-bartender-/releases/tag/v1.0)

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

# Estrategias de prueba

**-Especificación:** Este tipo de prueba incluye probar la aplicación en contra de la documentación que se hizo antes. Vamos a testear de que las 5 funciones propuestas si funcionen tal y como lo habíamos planeado y que no contengan errores.

**-Usabilidad:** Este tipo de prueba se refiere a asegurar de que la interfaz de usuario (o GUI) sea intuitiva, amigable y funcione correctamente.

# Diagramas correspondientes al proyecto

**Diagrama del circuito**

![](https://github.com/Brandonp22/Sistema-de-bartender-/releases/download/v1.0/diagrama.del.circuito.png)

**Diagrama de casos de uso del usuario**

![]()

**Diseño 3D del sistema**

![](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/diagrama%203d%202.png)

![](https://github.com/Brandonp22/Sistema-de-bartender-/blob/main/Anexos/diagrama%203d.png)

