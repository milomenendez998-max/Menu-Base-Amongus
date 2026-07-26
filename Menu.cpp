#include <jni.h>
#include <pthread.h>
#include <thread>
#include "Hooks.h"
#include "Menu.h"

// Hilo principal donde inicializamos los hooks y el entorno gráfico
void* MainThread(void*) {
    // Damos un pequeño respiro para asegurar que las librerías del juego estén cargadas
    // sleep(2);

    // Inicializamos los ganchos (hooks) definidos en Hooks.cpp
    Hooks::Init();

    return nullptr;
}

// Constructor de la librería compartida (.so) en Android
__attribute__((constructor)) void LibMain() {
    // Creamos un hilo separado para evitar bloqueos o cierres inesperados (ANR)
    std::thread(MainThread).detach();
}

