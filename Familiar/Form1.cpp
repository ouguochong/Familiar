#include <Windows.h>
#include <string>
#include <iostream>

#include "Form1.h"
#include "Definitions.h"

using namespace Familiar;
using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;

void Main(void)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew Form1());
    Application::Exit();
}

extern bool SendMSPacket(BYTE* packetData,unsigned long size);

// Familiar Controller
bool ControllerToggle = false;
void ControlFamiliarfunc()
{
	while (ControllerToggle)
	{
		WritePointer(CharBase, MorphOffset, 1234); // Value 9/22 = Godmode
		Sleep(600);
	}
	ExitThread(0);
}
Void Form1::checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox1->Checked)
	{
		ControllerToggle = true;
		NewThread(ControlFamiliarfunc);
		checkBox1->ForeColor = System::Drawing::Color::Green;
	}
	else
	{
		ControllerToggle = false;
		checkBox1->ForeColor = System::Drawing::Color::Red;
	}
}


// Auto Move
bool MoveToggle = false;
int currentx; // <- Reads current coordinates
int tempx = -1;

// Move Function
//
void Movefunc(WORD key, int holddelay)
{
	KEYBDINPUT kb={0};
	INPUT Input={0};	
	kb.wVk = key; 
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));//keydown
	Sleep(holddelay); // delay
	::ZeroMemory(&kb,sizeof(KEYBDINPUT));
	::ZeroMemory(&Input,sizeof(INPUT));
	kb.dwFlags = KEYEVENTF_KEYUP;
	kb.wVk = key;
	Input.type = INPUT_KEYBOARD;
	Input.ki = kb;
	::SendInput(1,&Input,sizeof(Input));//keyup
	Sleep(holddelay); // delay
}
void AutoMovefunc()
{
	while (MoveToggle)
	{
		if (currentx > tempx - 50)
		{
	        Movefunc(VK_LEFT, 200);
		}
		else if (currentx < tempx + 50)
		{
            Movefunc(VK_RIGHT, 200); 
		}
	}
	ExitThread(0);
}
Void Form1::checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox3->Checked)
	{
		tempx = currentx;
		MoveToggle = true;
		NewThread(AutoMovefunc);
		checkBox3->ForeColor = System::Drawing::Color::Green;
	}
	else
	{
		TerminateThread(AutoMovefunc, 0);
		tempx = -1;
		MoveToggle = false;
		checkBox3->ForeColor = System::Drawing::Color::Red;
	}
}

// Auto Summon
bool SummonToggle;
int summondelay;

int SelectedMob1, SelectedMob2,  SelectedMob3, SelectedMob4, SelectedMob5, SelectedMob6, SelectedMob7;
int MobTarget = -1;
void MobOrder(int MobOrder)
{
	switch (MobOrder)
	{
	case 0:
		SendMSPacket(pSnail, 11); // SendMSPacket("A5 00 0A A2 4A 00 40 FA 97 00 01"); // snail
		break;
	case 1:
		SendMSPacket(pBlueSnail, 11); // SendMSPacket("A5 00 BA 68 4C 00 41 FA 97 00 01"); // blue snail
		break;
	case 2:
		SendMSPacket(pRedSnail, 11); // SendMSPacket("A5 00 FA CD 4C 00 44 FA 97 00 01"); // red snail
		break;
	case 3:
		SendMSPacket(pSlime, 11); // SendMSPacket("A5 00 A0 27 4D 00 48 FA 97 00 01"); // slime
		break;
	case 4:
		SendMSPacket(pOrangeMush, 11); // SendMSPacket("A5 00 96 9A 4D 00 55 FA 97 00 01"); // orange mushroom
		break;
	case 5:
		SendMSPacket(pCynicalOrangeMush, 11); // SendMSPacket("A5 00 5C E3 4D 00 E5 FB 97 00 01"); // Cynical Orange Mushroom
		break;
	case 6:
		SendMSPacket(pCurseEye, 11); // SendMSPacket("A5 00 4A 22 4E 00 9C FA 97 00 01"); // curse eye
		break;
	case 7:
		SendMSPacket(pShroom, 11); // SendMSPacket("A5 00 76 AA 4E 00 42 FA 97 00 01"); // shroom
		break;
	case 8:
		SendMSPacket(pPig, 11); // SendMSPacket("A5 00 EC 41 50 00 53 FA 97 00 01"); // pig
		break;
	default: 
		MessageBox::Show("Error");
		//
	}
}

void SummonMobfunc()
{
	while (SummonToggle)
	{
		switch (MobTarget)
		{
		case 1:
			MobOrder(SelectedMob1);
		    Sleep(summondelay);
			MobTarget = 2;
			break;
		case 2:
            MobOrder(SelectedMob2);
		    Sleep(summondelay);
			MobTarget = 3;
			break;
	    case 3:
            MobOrder(SelectedMob3);
		    Sleep(summondelay);
			MobTarget = 4;
			break;
        case 4:
            MobOrder(SelectedMob4);
		    Sleep(summondelay);
			MobTarget = 5;
			break;
	    case 5:
            MobOrder(SelectedMob5);
		    Sleep(summondelay);
			MobTarget = 6;
			break;
		case 6:
            MobOrder(SelectedMob6);
		    Sleep(summondelay);
			MobTarget = 7;
			break;
		case 7:
            MobOrder(SelectedMob7);
		    Sleep(summondelay);
			MobTarget = 1;
			break;
		}
	}
	ExitThread(0);
}

Void Form1::checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
{
	if (checkBox4->Checked)
	{
		SummonToggle = true;
		MobTarget = 1;
		NewThread(SummonMobfunc);
		checkBox4->ForeColor = System::Drawing::Color::Green;
	}
	else
	{
		SummonToggle = false;
		MobTarget = -1;
		checkBox4->ForeColor = System::Drawing::Color::Red;
	}
}
// Hotkeys


// Update Info Timer
Void Form1::timer1_Tick(System::Object^  sender, System::EventArgs^  e)
{
	currentx = ReadPointer(InfoBase, MiniMapX); // current x
	summondelay = ToInt(numericUpDown1->Value);

	SelectedMob1 = ToInt(comboBox1->SelectedIndex);
	SelectedMob2 = ToInt(comboBox2->SelectedIndex);
	SelectedMob3 = ToInt(comboBox3->SelectedIndex);
	SelectedMob4 = ToInt(comboBox4->SelectedIndex);
	SelectedMob5 = ToInt(comboBox5->SelectedIndex);
	SelectedMob6 = ToInt(comboBox6->SelectedIndex);
	SelectedMob7 = ToInt(comboBox7->SelectedIndex);

}
