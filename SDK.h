#pragma once
#include <cstdint>

// Clases base y punteros útiles para Among Us
struct Vector2 {
    float x, y;
};

struct Vector3 {
    float x, y, z;
};

// Estructura para datos de la red y el cliente
class AmongUsClient {
public:
    // Osk/Offsets comunes que se mapearán después
    static AmongUsClient* Instance();
    int GetGameMode();
};

// Estructura del jugador (PlayerControl)
class PlayerControl {
public:
    static PlayerControl* get_LocalPlayer();
    
    // Variables de control comunes
    bool get_IsImpostor();
    void set_IsImpostor(bool value);
    
    // Posición del jugador
    Vector3 get_TruePosition();
    void MyUpdate();
};

// Administrador de datos de la partida
class GameData {
public:
    class PlayerInfo {
    public:
        void* _object;
        int PlayerId;
        bool IsDead;
        bool Disconnected;
        int ColorId;
        void* HatId;
        void* SkinId;
        void* PetId;
    };
    
    static GameData* get_Instance();
};
