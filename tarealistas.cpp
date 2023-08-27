#include <iostream>

// Definición de la clase Nodo
class Nodo {
public:
    int dato;
    Nodo* siguiente;

    Nodo(int valor) : dato(valor), siguiente(nullptr) {}
};

// Definición de la clase ListaSimple
class ListaSimple {
private:
    Nodo* cabeza;

public:
    ListaSimple() : cabeza(nullptr) {}

    void agregar(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        if (!cabeza) {
            cabeza = nuevoNodo;
        } else {
            Nodo* temp = cabeza;
            while (temp->siguiente) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevoNodo;
        }
    }

    void imprimir() {
        Nodo* temp = cabeza;
        while (temp) {
            std::cout << temp->dato << " ";
            temp = temp->siguiente;
        }
        std::cout << std::endl;
    }
};

int main() {
    ListaSimple lista;
    lista.agregar(10);
    lista.agregar(20);
    lista.agregar(30);

    std::cout << "Lista: ";
    lista.imprimir();

    return 0;
}
