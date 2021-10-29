**Arquitectura usada**

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




