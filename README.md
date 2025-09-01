# UNLZ-Proyecto_Final-Scanner_por_triangulacion_laser-ARG

## MOTIVACIÓN

Buscamos desarrollar una solución innovadora para el control de calidad, un nuevo enfoque que permita un control detallado pieza por pieza asegurándose de que el producto final cumpla con los estándares requeridos. Garantizar la precisión, consistencia y velocidad en la detección de defectos y variaciones en las piezas.

## DESCRIPCIÓN DE LA PROPUESTA

Una línea de control integral equipada con un scanner 3D funcionando con el principio de triangulación láser, con el fin de detección de fallas en matrices destinadas a producciones en serie. Todo unido a traves de una cinta transportadora y software de control.

Las piezas ingresarán al sistema a través de una cinta transportadora y serán posicionadas dentro de la estación de escaneo 3D. Tras ser escaneadas obtendremos una nube de puntos representativa de las dimensiones del objeto, a partir de la cual se realizarán comparaciones con el modelo patrón de la misma a fin de determinar posibles fallas y deformaciones en la misma causadas por la matriz, que puedan afectar su funcionamiento
<img width="1005" height="769" alt="Image" src="https://github.com/user-attachments/assets/4b588405-6697-4e39-bc8f-c3f3ca4cd982" />
<img width="1324" height="575" alt="Image" src="https://github.com/user-attachments/assets/629d12a7-c09c-4110-b918-dfa1ed5906bc" />
<img width="1174" height="517" alt="Image" src="https://github.com/user-attachments/assets/93110016-ac7f-4606-b8d4-095fd3965086" />
## ALCANCE

Al fin de la cursada se presentará un prototipo funcional del sistema que cumpla de forma eficaz la tarea propuesta, no podemos asegurar un funcionamiento eficiente ya que el mismo dependerá de los componentes que seamos capaces de obtener.

Se presentará un prototipo que cuente con una cinta de transporte funcional capaz de transportar las piezas hasta la estación de escaneo 3D retroalimentada con una cámara y un láser de barra, y luego retirar la pieza de la estación de escaneo.

El sistema contará con tres variantes de piezas funcionales con cualidades únicas para comprobar el funcionamiento del sistema.

La estación de escaneo 3D será capaz de escanear una órbita 360° alrededor de la pieza y devolviendo una nube de puntos de la misma que luego será utilizada para su comparación con la pieza patrón. El porcentaje de similitud con la misma determinará si la matriz fabricada es apta para la implementación en línea de producción

## ESPECIFICACION DE REQUERIMIENTOS
El sistema será capaz de mover una pieza por una línea de producción y ubicarla precisamente en el centro de la zona de escaneo. Luego escaneará la pieza y armará una nube de puntos, la cual luego será utilizada para generar un mallado que le permita identificar al sistema el tipo de pieza y reconocer errores para verificar si cumple con los estándares requeridos.

## DISEÑO FUNCIONAL

El siguiente diagrama de bloques muestra el diseño funcional del sistema a gran escala, los pasos a seguir y el resultado esperado de cada uno:

<img width="1103" height="777" alt="Image" src="https://github.com/audisio-ing/UNLZ-Proyecto_Final-Scanner_por_triangulacion_laser-ARG/blob/main/fotos/Diagrama%20de%20Bloques%20fondo.png" />

## CONEXIONES DEL MICROCONTROLADOR

<img width="1103" height="777" alt="Image" src="https://github.com/audisio-ing/UNLZ-Proyecto_Final-Scanner_por_triangulacion_laser-ARG/blob/main/fotos/Captura%20de%20pantalla%202025-09-01%20185708.png" />

## COSTO DEL PROTOTIPO, PRESUPUESTOS, PLAZOS DE ENTREGA DE MATERIALES

A continuación se incluye el BOM (Bill of Materials) que detalla los materiales necesarios para la realización del proyecto, junto con sus respectivos valores, tiempos de entrega y proveedores tanto en pesos y dólares, presentando alternativas de cada uno.

<img width="1066" height="746" alt="Image" src="https://github.com/user-attachments/assets/bfa12b66-d8bf-4085-973b-f410c8f8500e" />

## CRONOGRAMA DE TRABAJO

A continuación se incluye el diagrama de Gantt a seguir durante el proyecto

(foto del gantt)

