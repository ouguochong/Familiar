#include <windows.h>
#include "Send.h"
#include <stdio.h>
#include <String>
#include <iostream>

typedef void (__fastcall* lpfnSendPacket)(LPVOID lpvClass, LPVOID lpvEDX, PacketStruct* pPacket);

void __declspec(naked) InjectPacket(PacketStruct* pPacket)
{
  __asm
  {
      //set class ptr
      mov ecx,[ClientSocketAddress]
      mov ecx,[ecx]
 
      //push packet and fake return address
      push [esp+4]
      push [RetAddress]
 
      //send packet
      jmp [SendAddress]
  }
}

bool SendMSPacket(unsigned char* packetData,unsigned long size)
{
    PacketStruct packet;
    ZeroMemory(&packet, sizeof(PacketStruct));
    packet.Size = size;
    packet.Data = packetData;
 
    try
    {
        InjectPacket(&packet);
        return true;
    }
    catch (...)
    {
        return false;
    }
}