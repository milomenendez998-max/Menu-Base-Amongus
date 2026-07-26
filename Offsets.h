#pragma once
#include <cstdint>

namespace Offsets {
    // Estos valores numéricos son ejemplos de referencia. 
    // Deberás reemplazarlos con los offsets reales que extraigas de tu versión de Among Us usando Il2CppDumper.
    
    constexpr uintptr_t AmongUsClient_Instance = 0x000000; // Método para obtener la instancia del cliente
    constexpr uintptr_t PlayerControl_LocalPlayer = 0x000000; // Puntero al jugador local
    constexpr uintptr_t PlayerControl_Update = 0x000000; // Bucle de actualización del jugador
    constexpr uintptr_t GameData_Instance = 0x000000; // Administrador de datos de la partida
    
    // Offsets para funciones de red/RPC o estados específicos
    constexpr uintptr_t RpcSetInfect = 0x000000; // Para la lógica de forzar rol de impostor
    constexpr uintptr_t KillDistance = 0x000000; // Para modificar o quitar distancia de asesinato
}
