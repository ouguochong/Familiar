#pragma once

namespace Familiar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}




	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;




	private: System::Windows::Forms::CheckBox^  checkBox3;




	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox2;



















	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(122, 44);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Familiar Controller";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->ForeColor = System::Drawing::Color::Red;
			this->checkBox1->Location = System::Drawing::Point(20, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(61, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"[on/off]";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Location = System::Drawing::Point(140, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(112, 92);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Hotkeys";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->ForeColor = System::Drawing::Color::Red;
			this->checkBox2->Location = System::Drawing::Point(6, 19);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(64, 17);
			this->checkBox2->TabIndex = 0;
			this->checkBox2->Text = L" [on/off]";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->checkBox3);
			this->groupBox3->Location = System::Drawing::Point(12, 62);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(122, 42);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Auto Move";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->ForeColor = System::Drawing::Color::Red;
			this->checkBox3->Location = System::Drawing::Point(20, 19);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(61, 17);
			this->checkBox3->TabIndex = 0;
			this->checkBox3->Text = L"[on/off]";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox3_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox1->Location = System::Drawing::Point(104, 19);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(105, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label8);
			this->groupBox5->Controls->Add(this->comboBox7);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->comboBox6);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Controls->Add(this->comboBox5);
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->comboBox4);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Controls->Add(this->comboBox3);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->comboBox2);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->label1);
			this->groupBox5->Controls->Add(this->numericUpDown1);
			this->groupBox5->Controls->Add(this->checkBox4);
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Location = System::Drawing::Point(12, 110);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(242, 260);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Auto Summon (Test Version)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 185);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Familiar Mob 7 :";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox7->Location = System::Drawing::Point(104, 182);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(105, 21);
			this->comboBox7->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Familiar Mob 6 :";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox6->Location = System::Drawing::Point(104, 155);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(105, 21);
			this->comboBox6->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 131);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Familiar Mob 5 :";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox5->Location = System::Drawing::Point(104, 128);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(105, 21);
			this->comboBox5->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Familiar Mob 4 :";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox4->Location = System::Drawing::Point(104, 101);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(105, 21);
			this->comboBox4->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 77);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Familiar Mob 3 :";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox3->Location = System::Drawing::Point(104, 74);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(105, 21);
			this->comboBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Familiar Mob 2 :";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(9) {L"Snail (3 Orbs)", L"Blue Snail (3 Orbs)", L"Red Snail (3 Orbs)", 
				L"Slime (3 Orbs)", L"Orange Mushroom (3 Orbs)", L"Cynical Orange Mushroom (3 Orbs)", L"Curse Eye (3 Orbs)", L"Shroom (3 Orbs)", 
				L"Pig (3 Orbs)"});
			this->comboBox2->Location = System::Drawing::Point(104, 46);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(105, 21);
			this->comboBox2->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Familiar Mob 1 :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 226);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Delay :";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(63, 224);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {500000, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(59, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {140000, 0, 0, 0});
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->ForeColor = System::Drawing::Color::Red;
			this->checkBox4->Location = System::Drawing::Point(137, 226);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(61, 17);
			this->checkBox4->TabIndex = 0;
			this->checkBox4->Text = L"[on/off]";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox4_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlText;
			this->ClientSize = System::Drawing::Size(266, 384);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::Color::Fuchsia;
			this->MinimumSize = System::Drawing::Size(207, 139);
			this->Name = L"Form1";
			this->Text = L"[GMS v1.04] Familiar Bot";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void checkBox3_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void checkBox4_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e);
};
}
