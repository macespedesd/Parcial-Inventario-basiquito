# Parcial Inventario Basiquito
## Descripción del Programa
Programa básico de inventario desarrollado en C que permite gestionar productos mediante operaciones de agregar, eliminar, buscar y listar. El sistema maneja la información de productos con nombre, cantidad y precio.
## Instrucciones de Compilación
Para compilar el programa, utiliza el siguiente comando en la terminal:
```bash
gcc -o inventario inventario.c
```
Para ejecutar el programa:
```bash
./inventario
```
**Nota:** Asegúrate de que la compilación se realice sin errores antes de ejecutar el programa.
## Ejemplos de Uso
### Menú Principal
```
--- SISTEMA DE INVENTARIO ---
1. Agregar producto
2. Listar productos
3. Buscar producto
4. Actualizar producto
5. Eliminar producto
6. Salir
Seleccione una opción:
```
### Agregar un producto
```
Seleccione una opción: 1
Ingrese nombre del producto: Laptop
Ingrese cantidad: 5
Ingrese precio: 1200.50
Producto agregado exitosamente.
```
### Listar productos
```
Seleccione una opción: 2
--- Inventario ---
Producto: Laptop
Cantidad: 5
Precio: $1200.50
```
### Buscar un producto
```
Seleccione una opción: 3
Ingrese nombre del producto a buscar: Laptop
Producto encontrado:
Nombre: Laptop
Cantidad: 5
Precio: $1200.50
```
### Actualizar un producto
```
Seleccione una opción: 4
Ingrese nombre del producto a actualizar: Laptop
Ingrese nueva cantidad: 8
Ingrese nuevo precio: 1150.00
Producto actualizado exitosamente.
```
### Eliminar un producto
```
Seleccione una opción: 5
Ingrese nombre del producto a eliminar: Laptop
Producto eliminado exitosamente.
```
