#include <Windows.h>


// Post Message
//#define SendDOWN(KeyPress) PostMessage(FindWindowA("MapleStoryClass", 0), WM_KEYDOWN, KeyPress, (MapVirtualKey(KeyPress, 0) << 16) + 1);
//#define SendUP(KeyPress) PostMessage(FindWindowA("MapleStoryClass", 0), WM_KEYUP, KeyPress, (MapVirtualKey(KeyPress, 0) << 16) + 1);
// Reading Pointer
unsigned long ReadPointer(unsigned long ulBase, int iOffset)
{
   __try { return *(unsigned long*)(*(unsigned long*)ulBase + iOffset); }
   __except (EXCEPTION_EXECUTE_HANDLER) { return 0; }
}
// Reading Multi-Level Pointers
unsigned long ReadMultiPointer(unsigned long ulBase, unsigned long ulLevels, ...)
{
	va_list va;
	va_start(va, ulLevels);

	__try
	{
		ulBase = *(unsigned long*)ulBase;
		for (unsigned long ulIndex = 1; ulIndex <= ulLevels; ulIndex++)
			ulBase = *(unsigned long*)(ulBase + va_arg(va, int));
	}
	__except (EXCEPTION_EXECUTE_HANDLER) { ulBase = 0; }

	va_end(va);

	return ulBase;
}
// Writing Pointer
bool WritePointer(unsigned long ulBase, int iOffset, int iValue)
{
   __try { *(int*)(*(unsigned long*)ulBase + iOffset) = iValue; return true; }
   __except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

// Create Thread
#define NewThread(Function) CreateThread(0, 0, (LPTHREAD_START_ROUTINE)&Function, 0, 0, 0);
// To Int32
#define ToInt(test) System::Convert::ToInt32(test);

// ---


// Pointers & Offsets
#define CharBase 0x00F68FD8
#define MorphOffset 0x0660

#define InfoBase 0x00F6E0B0 
#define MiniMapX 0x0B64

// Packets
unsigned char pSnail[11] = {0xA5, 0x00, 0x0A, 0xA2, 0x4A, 0x00, 0x40, 0xFA, 0x97, 0x00, 0x01};
unsigned char pBlueSnail[11] = {0xA5, 0x00, 0xBA, 0x68, 0x4C, 0x00, 0x41, 0xFA, 0x97, 0x00, 0x01};
unsigned char pRedSnail[11] = {0xA5, 0x00, 0xFA, 0xCD, 0x4C, 0x00, 0x44, 0xFA, 0x97, 0x00, 0x01}; 
unsigned char pSlime[11] = {0xA5, 0x00, 0xA0, 0x27, 0x4D, 0x00, 0x48, 0xFA, 0x97, 0x00, 0x01}; 
unsigned char pOrangeMush[11] = {0xA5, 0x00, 0x96, 0x9A, 0x4C, 0x00, 0x55, 0xFA, 0x97, 0x00, 0x01}; 
unsigned char pCynicalOrangeMush[11] = {0xA5, 0x00, 0x5C, 0xE3, 0x4D, 0x00, 0xE5, 0xFA, 0x97, 0x00, 0x01}; 
unsigned char pCurseEye[11] = {0xA5, 0x00, 0x4A, 0x22, 0x4E, 0x00, 0x9C, 0xFA, 0x97, 0x00, 0x01}; 
unsigned char pShroom[11] = {0xA5, 0x00, 0x76, 0xAA, 0x4E, 0x00, 0x42, 0xFA, 0x97, 0x00, 0x01}; 
unsigned char pPig[11] = {0xA5, 0x00, 0xEC, 0x41, 0x50, 0x00, 0x53, 0xFA, 0x97, 0x00, 0x01}; 