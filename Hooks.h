#pragma once
#include "SDK.h"

namespace Hooks {
    // Definición de los prototipos de las funciones originales y nuestras versiones modificadas
    
    // Hook para el bucle de actualización del jugador (Controla temporizadores, posiciones, etc.)
    void Hook_PlayerControl_Update(void* instance);
    
    // Hook para verificar si un jugador es impostor (Útil para "Mostrar impostores" o "Falso impostor")
    bool Hook_PlayerControl_IsImpostor(void* instance);
    
    // Hook para el enfriamiento de asesinato (Kill Cooldown)
    float Hook_PlayerControl_SetKillTimer(void* instance, float time);

    // Función para inicializar todos los hooks utilizando la librería de hooking (como Dobby o Andhook)
    void InitHooks();
}

