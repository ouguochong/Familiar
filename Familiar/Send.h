#include <windows.h>

const unsigned long SendAddress = 0x004D7240;
const unsigned long ClientSocketAddress = 0x00F69094;
const unsigned long RetAddress = 0x004D7690;

struct PacketStruct
{
    int Loopback;
    union
    {
        unsigned char* Data;
        void* Unk;
        unsigned short* Header;
    };
    unsigned long Size;
    unsigned int Offset;
    int EncryptedByShanda;
};