#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int id;
    char nombre[50];
    int stock;
    struct Node* siguiente;
} Node;

Node* cabeza = NULL;

void insertarInicio(int id, char nombre[], int stock) {
    Node* nuevo = (Node*)malloc(sizeof(Node));
    nuevo->id = id;
    strcpy(nuevo->nombre, nombre);
    nuevo->stock = stock;
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
    printf("Producto insertado al inicio.\n");
}

void insertarFinal(int id, char nombre[], int stock) {
    Node* nuevo = (Node*)malloc(sizeof(Node));
    nuevo->id = id;
    strcpy(nuevo->nombre, nombre);
    nuevo->stock = stock;
    nuevo->siguiente = NULL;
    
    if (cabeza == NULL) {
        cabeza = nuevo;
    } else {
        Node* temp = cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo;
    }
    printf("Producto insertado al final.\n");
}

Node* buscarPorId(int id) {
    Node* temp = cabeza;
    while (temp != NULL) {
        if (temp->id == id) {
            return temp;
        }
        temp = temp->siguiente;
    }
    return NULL;
}

void mostrarProducto(Node* nodo) {
    if (nodo != NULL) {
        printf("ID: %d, Nombre: %s, Stock: %d\n", nodo->id, nodo->nombre, nodo->stock);
    } else {
        printf("Producto no encontrado.\n");
    }
}

void actualizarStock(int id, int nuevoStock) {
    Node* nodo = buscarPorId(id);
    if (nodo != NULL) {
        nodo->stock = nuevoStock;
        printf("Stock actualizado.\n");
    } else {
        printf("Producto no encontrado.\n");
    }
}

void eliminarPorId(int id) {
    if (cabeza == NULL) {
        printf("Lista vacia.\n");
        return;
    }
    
    if (cabeza->id == id) {
        Node* temp = cabeza;
        cabeza = cabeza->siguiente;
        free(temp);
        printf("Producto eliminado.\n");
        return;
    }
    
    Node* temp = cabeza;
    while (temp->siguiente != NULL && temp->siguiente->id != id) {
        temp = temp->siguiente;
    }
    
    if (temp->siguiente == NULL) {
        printf("Producto no encontrado.\n");
    } else {
        Node* aEliminar = temp->siguiente;
        temp->siguiente = aEliminar->siguiente;
        free(aEliminar);
        printf("Producto eliminado.\n");
    }
}

void listarTodos() {
    if (cabeza == NULL) {
        printf("La lista esta vacia.\n");
        return;
    }
    
    Node* temp = cabeza;
    printf("\n--- Lista de Productos ---\n");
    while (temp != NULL) {
        printf("ID: %d, Nombre: %s, Stock: %d\n", temp->id, temp->nombre, temp->stock);
        temp = temp->siguiente;
    }
    printf("\n");
}

int main() {
    int opcion, id, stock;
    char nombre[50];
    
    while (1) {
        printf("\n=== MENU INVENTARIO ===\n");
        printf("1. Insertar al inicio\n");
        printf("2. Insertar al final\n");
        printf("3. Buscar por ID\n");
        printf("4. Actualizar stock\n");
        printf("5. Eliminar por ID\n");
        printf("6. Listar todos\n");
        printf("7. Salir\n");
        printf("Opcion: ");
        
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada invalida.\n");
            while (getchar() != '\n');
            continue;
        }
        
        switch (opcion) {
            case 1:
                printf("ID: ");
                if (scanf("%d", &id) != 1) {
                    printf("ID invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Nombre: ");
                scanf("%s", nombre);
                printf("Stock: ");
                if (scanf("%d", &stock) != 1) {
                    printf("Stock invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                insertarInicio(id, nombre, stock);
                break;
                
            case 2:
                printf("ID: ");
                if (scanf("%d", &id) != 1) {
                    printf("ID invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Nombre: ");
                scanf("%s", nombre);
                printf("Stock: ");
                if (scanf("%d", &stock) != 1) {
                    printf("Stock invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                insertarFinal(id, nombre, stock);
                break;
                
            case 3:
                printf("ID a buscar: ");
                if (scanf("%d", &id) != 1) {
                    printf("ID invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                mostrarProducto(buscarPorId(id));
                break;
                
            case 4:
                printf("ID del producto: ");
                if (scanf("%d", &id) != 1) {
                    printf("ID invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                printf("Nuevo stock: ");
                if (scanf("%d", &stock) != 1) {
                    printf("Stock invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                actualizarStock(id, stock);
                break;
                
            case 5:
                printf("ID a eliminar: ");
                if (scanf("%d", &id) != 1) {
                    printf("ID invalido.\n");
                    while (getchar() != '\n');
                    break;
                }
                eliminarPorId(id);
                break;
                
            case 6:
                listarTodos();
                break;
                
            case 7:
                printf("Saliendo...\n");
                return 0;
                
            default:
                printf("Opcion invalida.\n");
        }
    }
    
    return 0;
}
