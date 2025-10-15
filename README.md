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

## Ejemplos de Uso

### Agregar un producto
```
Seleccione una opción: 1
Ingrese nombre del producto: Laptop
Ingrese cantidad: 5
Ingrese precio: 1200.50
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

### Eliminar un producto
```
Seleccione una opción: 4
Ingrese nombre del producto a eliminar: Laptop
Producto eliminado exitosamente.
```
