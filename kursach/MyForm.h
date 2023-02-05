#pragma once
#include "Author.h"
#include "ProgrammInfo.h"
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <vector>

namespace kursach {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ Pictures_Group;
	private: System::Windows::Forms::PictureBox^ Chair_white;



	private: System::Windows::Forms::PictureBox^ Table;
	private: System::Windows::Forms::PictureBox^ Armchair;
	private: System::Windows::Forms::PictureBox^ Empty_Space;



	private: System::Windows::Forms::PictureBox^ Chair_red;
	private: System::Windows::Forms::PictureBox^ Wardrobe;
	private: System::Windows::Forms::CheckBox^ CheckCompPlay;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::Button^ ReloadButton;
	private: System::Windows::Forms::PictureBox^ ArmchairFrame;
	private: System::Windows::Forms::PictureBox^ WardrobeFrame;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ TryingsCountLabel;
	private: System::Windows::Forms::Label^ BestScoreLabel;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripMenuItem^ WorkWithFile_button;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveCurrentFile_button;
	private: System::Windows::Forms::ToolStripMenuItem^ LoadSavedFile_button;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ CurrentScoreLabel;

	private: System::ComponentModel::IContainer^ components;













	protected:




	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->WorkWithFile_button = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveCurrentFile_button = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadSavedFile_button = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Pictures_Group = (gcnew System::Windows::Forms::GroupBox());
			this->Armchair = (gcnew System::Windows::Forms::PictureBox());
			this->Empty_Space = (gcnew System::Windows::Forms::PictureBox());
			this->Chair_red = (gcnew System::Windows::Forms::PictureBox());
			this->Wardrobe = (gcnew System::Windows::Forms::PictureBox());
			this->Chair_white = (gcnew System::Windows::Forms::PictureBox());
			this->Table = (gcnew System::Windows::Forms::PictureBox());
			this->ArmchairFrame = (gcnew System::Windows::Forms::PictureBox());
			this->WardrobeFrame = (gcnew System::Windows::Forms::PictureBox());
			this->CheckCompPlay = (gcnew System::Windows::Forms::CheckBox());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->ReloadButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TryingsCountLabel = (gcnew System::Windows::Forms::Label());
			this->BestScoreLabel = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CurrentScoreLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->Pictures_Group->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Armchair))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Empty_Space))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chair_red))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wardrobe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chair_white))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArmchairFrame))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WardrobeFrame))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->WorkWithFile_button
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(502, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(141, 27);
			this->�����������ToolStripMenuItem->Text = L"�� ���������";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(106, 27);
			this->��������ToolStripMenuItem->Text = L"�� ������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// WorkWithFile_button
			// 
			this->WorkWithFile_button->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->SaveCurrentFile_button,
					this->LoadSavedFile_button
			});
			this->WorkWithFile_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->WorkWithFile_button->Name = L"WorkWithFile_button";
			this->WorkWithFile_button->Size = System::Drawing::Size(64, 27);
			this->WorkWithFile_button->Text = L"����";
			// 
			// SaveCurrentFile_button
			// 
			this->SaveCurrentFile_button->Name = L"SaveCurrentFile_button";
			this->SaveCurrentFile_button->Size = System::Drawing::Size(178, 28);
			this->SaveCurrentFile_button->Text = L"���������";
			this->SaveCurrentFile_button->Click += gcnew System::EventHandler(this, &MyForm::SaveCurrentFile_button_Click);
			// 
			// LoadSavedFile_button
			// 
			this->LoadSavedFile_button->Name = L"LoadSavedFile_button";
			this->LoadSavedFile_button->Size = System::Drawing::Size(178, 28);
			this->LoadSavedFile_button->Text = L"���������";
			this->LoadSavedFile_button->Click += gcnew System::EventHandler(this, &MyForm::LoadSavedFile_button_Click);
			// 
			// Pictures_Group
			// 
			this->Pictures_Group->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pictures_Group.BackgroundImage")));
			this->Pictures_Group->Controls->Add(this->Armchair);
			this->Pictures_Group->Controls->Add(this->Empty_Space);
			this->Pictures_Group->Controls->Add(this->Chair_red);
			this->Pictures_Group->Controls->Add(this->Wardrobe);
			this->Pictures_Group->Controls->Add(this->Chair_white);
			this->Pictures_Group->Controls->Add(this->Table);
			this->Pictures_Group->Controls->Add(this->ArmchairFrame);
			this->Pictures_Group->Controls->Add(this->WardrobeFrame);
			this->Pictures_Group->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Pictures_Group->ForeColor = System::Drawing::Color::Ivory;
			this->Pictures_Group->Location = System::Drawing::Point(12, 46);
			this->Pictures_Group->Name = L"Pictures_Group";
			this->Pictures_Group->Size = System::Drawing::Size(480, 350);
			this->Pictures_Group->TabIndex = 1;
			this->Pictures_Group->TabStop = false;
			this->Pictures_Group->Text = L"������";
			// 
			// Armchair
			// 
			this->Armchair->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Armchair.Image")));
			this->Armchair->Location = System::Drawing::Point(324, 188);
			this->Armchair->Name = L"Armchair";
			this->Armchair->Size = System::Drawing::Size(150, 150);
			this->Armchair->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Armchair->TabIndex = 5;
			this->Armchair->TabStop = false;
			this->Armchair->Click += gcnew System::EventHandler(this, &MyForm::Armchair_Click);
			// 
			// Empty_Space
			// 
			this->Empty_Space->Location = System::Drawing::Point(168, 188);
			this->Empty_Space->Name = L"Empty_Space";
			this->Empty_Space->Size = System::Drawing::Size(150, 150);
			this->Empty_Space->TabIndex = 4;
			this->Empty_Space->TabStop = false;
			this->Empty_Space->Visible = false;
			// 
			// Chair_red
			// 
			this->Chair_red->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chair_red.Image")));
			this->Chair_red->Location = System::Drawing::Point(12, 188);
			this->Chair_red->Name = L"Chair_red";
			this->Chair_red->Size = System::Drawing::Size(150, 150);
			this->Chair_red->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Chair_red->TabIndex = 3;
			this->Chair_red->TabStop = false;
			this->Chair_red->Click += gcnew System::EventHandler(this, &MyForm::Chair_red_Click);
			// 
			// Wardrobe
			// 
			this->Wardrobe->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Wardrobe.Image")));
			this->Wardrobe->Location = System::Drawing::Point(324, 32);
			this->Wardrobe->Name = L"Wardrobe";
			this->Wardrobe->Size = System::Drawing::Size(150, 150);
			this->Wardrobe->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Wardrobe->TabIndex = 2;
			this->Wardrobe->TabStop = false;
			this->Wardrobe->Click += gcnew System::EventHandler(this, &MyForm::Wardrobe_Click);
			// 
			// Chair_white
			// 
			this->Chair_white->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Chair_white.Image")));
			this->Chair_white->Location = System::Drawing::Point(168, 32);
			this->Chair_white->Name = L"Chair_white";
			this->Chair_white->Size = System::Drawing::Size(150, 150);
			this->Chair_white->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Chair_white->TabIndex = 1;
			this->Chair_white->TabStop = false;
			this->Chair_white->Click += gcnew System::EventHandler(this, &MyForm::Chair_white_Click);
			// 
			// Table
			// 
			this->Table->BackColor = System::Drawing::SystemColors::Control;
			this->Table->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Table->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Table.Image")));
			this->Table->Location = System::Drawing::Point(12, 32);
			this->Table->Name = L"Table";
			this->Table->Size = System::Drawing::Size(150, 150);
			this->Table->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Table->TabIndex = 0;
			this->Table->TabStop = false;
			this->Table->Click += gcnew System::EventHandler(this, &MyForm::Table_Click);
			// 
			// ArmchairFrame
			// 
			this->ArmchairFrame->BackColor = System::Drawing::Color::Transparent;
			this->ArmchairFrame->Location = System::Drawing::Point(320, 184);
			this->ArmchairFrame->Name = L"ArmchairFrame";
			this->ArmchairFrame->Size = System::Drawing::Size(157, 157);
			this->ArmchairFrame->TabIndex = 6;
			this->ArmchairFrame->TabStop = false;
			this->ArmchairFrame->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::ArmchairFrame_Paint);
			// 
			// WardrobeFrame
			// 
			this->WardrobeFrame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WardrobeFrame.BackgroundImage")));
			this->WardrobeFrame->Location = System::Drawing::Point(320, 28);
			this->WardrobeFrame->Name = L"WardrobeFrame";
			this->WardrobeFrame->Size = System::Drawing::Size(157, 157);
			this->WardrobeFrame->TabIndex = 7;
			this->WardrobeFrame->TabStop = false;
			this->WardrobeFrame->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::WardrobeFrame_Paint);
			// 
			// CheckCompPlay
			// 
			this->CheckCompPlay->AutoSize = true;
			this->CheckCompPlay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CheckCompPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CheckCompPlay->Location = System::Drawing::Point(12, 512);
			this->CheckCompPlay->Name = L"CheckCompPlay";
			this->CheckCompPlay->Size = System::Drawing::Size(175, 24);
			this->CheckCompPlay->TabIndex = 2;
			this->CheckCompPlay->Text = L"���� ����������";
			this->CheckCompPlay->UseVisualStyleBackColor = true;
			this->CheckCompPlay->CheckedChanged += gcnew System::EventHandler(this, &MyForm::CheckCompPlay_CheckedChanged);
			// 
			// StartButton
			// 
			this->StartButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->StartButton->Location = System::Drawing::Point(213, 508);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(110, 33);
			this->StartButton->TabIndex = 3;
			this->StartButton->Text = L"������";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// ReloadButton
			// 
			this->ReloadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ReloadButton->Location = System::Drawing::Point(329, 508);
			this->ReloadButton->Name = L"ReloadButton";
			this->ReloadButton->Size = System::Drawing::Size(173, 33);
			this->ReloadButton->TabIndex = 4;
			this->ReloadButton->Text = L"�������������";
			this->ReloadButton->UseVisualStyleBackColor = true;
			this->ReloadButton->Click += gcnew System::EventHandler(this, &MyForm::ReloadButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 414);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"����� ���������� �������:";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 434);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"��������� ���������:";
			this->label2->Visible = false;
			// 
			// TryingsCountLabel
			// 
			this->TryingsCountLabel->AutoSize = true;
			this->TryingsCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TryingsCountLabel->Location = System::Drawing::Point(275, 414);
			this->TryingsCountLabel->Name = L"TryingsCountLabel";
			this->TryingsCountLabel->Size = System::Drawing::Size(53, 20);
			this->TryingsCountLabel->TabIndex = 7;
			this->TryingsCountLabel->Text = L"label3";
			this->TryingsCountLabel->Visible = false;
			// 
			// BestScoreLabel
			// 
			this->BestScoreLabel->AutoSize = true;
			this->BestScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->BestScoreLabel->Location = System::Drawing::Point(223, 434);
			this->BestScoreLabel->Name = L"BestScoreLabel";
			this->BestScoreLabel->Size = System::Drawing::Size(18, 20);
			this->BestScoreLabel->TabIndex = 8;
			this->BestScoreLabel->Text = L"0";
			this->BestScoreLabel->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 454);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(182, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"������� ���������: ";
			this->label3->Visible = false;
			// 
			// CurrentScoreLabel
			// 
			this->CurrentScoreLabel->AutoSize = true;
			this->CurrentScoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CurrentScoreLabel->Location = System::Drawing::Point(201, 454);
			this->CurrentScoreLabel->Name = L"CurrentScoreLabel";
			this->CurrentScoreLabel->Size = System::Drawing::Size(53, 20);
			this->CurrentScoreLabel->TabIndex = 10;
			this->CurrentScoreLabel->Text = L"label4";
			this->CurrentScoreLabel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(502, 553);
			this->Controls->Add(this->CurrentScoreLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->BestScoreLabel);
			this->Controls->Add(this->TryingsCountLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ReloadButton);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->CheckCompPlay);
			this->Controls->Add(this->Pictures_Group);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(520, 600);
			this->MinimumSize = System::Drawing::Size(520, 600);
			this->Name = L"MyForm";
			this->Text = L"����������� ������";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Pictures_Group->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Armchair))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Empty_Space))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chair_red))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Wardrobe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Chair_white))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Table))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ArmchairFrame))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WardrobeFrame))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pen^ WardrobePen = gcnew Pen(Brushes::Blue, 6); // �������� ��� ������� ������ �����
		Pen^ ArmchairPen = gcnew Pen(Brushes::Yellow, 6); // �������� ��� ������� ������ ������
		
		int OrigWardrobeCordX, OrigWardrobeCordY; // ���������� ��� ����������� ��������� �����
		int OrigArmchairCordX, OrigArmchairCordY; // ���������� ��� ����������� ��������� ������

		int TryingCount = 0; // ����������, ������� ������� ����� ���������� �������
		int BestScoreCount = 10000; // ����������, ������� ������� ������ ���������
		int CurrentScoreCount = 0; // ����������, ������� ������� ������� ���������

		// ����������, ������� ������ � ���� �������� ����� ���������� ������������� �����������:
		int LastMovedPictureBox = -1;

		// ������������� ���������� ��� ��������:
		private: void PictureSetCord(System::Windows::Forms::PictureBox^ picture, int x, int y)
		{
			picture->Left = x;
			picture->Top = y;
		}

		// �������, ���������� �� ������������ ��������� ��������� ������
		private: void RandomizeLocation()
		{
			int coordinats_x[] = { 9, 126, 243, 9, 126, 243 }; // ���������� ��� X
			int coordinats_y[] = { 26, 26, 26, 153, 153, 153 }; // ���������� ��� Y
			srand(time(NULL)); // ������������� ���
			
			int which_cords[6] = { -1, -1, -1, -1, -1, -1 }; // ����� ������ �� coordinate_X/Y ������ �������
			// ������������� ������� � ������� which_coords � ���������� ��� �������� �������, ������� ������ �������
			int j = 0; int tmp_which_cords;
			while (j < 6)
			{
				bool check = true; // �������� �� ��, ����������� �� ������ �����
				tmp_which_cords = rand() % 6; // ������
				for (int i = 0; i < 6; i++)
				{
					if (tmp_which_cords == which_cords[i]) // ���� ����� ������, ��� ����, �� ��������� ���
						check = false;
				}
				if (check) // ���� ������ ������ �� ����������, �� ��������� ��� � ������
				{
					which_cords[j] = tmp_which_cords;
					j++;
				}
			}
			// �� ����, �� ������� ������, ������� ����� ����������, ����� �� ������� ���������� ������ ��������� ��������
			// �������� ������ which_cord = {0, 3, 5, 2, 1}, ����� ������ ������� ������ �������� ������ ����������
			// ������ ������� ������ �������� 4 ����������, ������ ������� �������� 6 ���������� � ��
			

			// ����������� ���������� ���������:
			PictureSetCord(Table, coordinats_x[which_cords[0]], coordinats_y[which_cords[0]]);
			PictureSetCord(Chair_white, coordinats_x[which_cords[1]], coordinats_y[which_cords[1]]);
			PictureSetCord(Wardrobe, coordinats_x[which_cords[2]], coordinats_y[which_cords[2]]);
			PictureSetCord(WardrobeFrame, coordinats_x[which_cords[2]] - 3, coordinats_y[which_cords[2]] - 3);
			PictureSetCord(Chair_red, coordinats_x[which_cords[3]], coordinats_y[which_cords[3]]);
			PictureSetCord(Empty_Space, coordinats_x[which_cords[4]], coordinats_y[which_cords[4]]);
			PictureSetCord(Armchair, coordinats_x[which_cords[5]], coordinats_y[which_cords[5]]);
			PictureSetCord(ArmchairFrame, coordinats_x[which_cords[5]] - 3, coordinats_y[which_cords[5]] - 3);

			Pictures_Group->Refresh(); // �������������� ��� ������������
		}

		// ��������� �� �����������, ��������� �� ������ ����������� �����, ������, ������ ��� ����� ��������:
		private: int CanButtonBeSwitched(System::Windows::Forms::PictureBox^ picture)
		{
			if (picture->Left + 117 == Empty_Space->Left &&
				picture->Top == Empty_Space->Top)
				return 1; // ������ ������������ ������
			if (picture->Left - 117 == Empty_Space->Left &&
				picture->Top == Empty_Space->Top)
				return 2; // ������ ������������ �����
			if (picture->Left == Empty_Space->Left &&
				picture->Top + 127 == Empty_Space->Top)
				return 3; // ������ ������������ ������
			if (picture->Left == Empty_Space->Left &&
				picture->Top - 127 == Empty_Space->Top)
				return 4; // ������ ������������ �����
			return 0; // ������� ������������ ����� ���
		}

		// ����������� �������� ������:
		private: void Switch(System::Windows::Forms::PictureBox^ picture)
		{
			switch (CanButtonBeSwitched(picture))
			{
				case 1: // ������ ������������ ������ �� ��������, ������ �� �������
				{
					Empty_Space->Left -= 117;
					int border = picture->Left + 117;
					while (picture->Left < border)
						picture->Left += 1;
					CurrentScoreCount++; // ����������� ������� ���������
				}; break;
				case 2:// ������ ������������ ����� �� ��������, ������ �� �������
				{
					Empty_Space->Left += 117;
					int border = picture->Left - 117;
					while (picture->Left > border)
						picture->Left -= 1;
					CurrentScoreCount++; // ����������� ������� ���������
				}; break;
				case 3:// ������ ������������ ������ �� ��������, ������ �� �������
				{
					Empty_Space->Top -= 127;
					int border = picture->Top + 127;
					while (picture->Top < border)
						picture->Top += 1;
					CurrentScoreCount++; // ����������� ������� ���������
				}; break;
				case 4:// ������ ������������ ����� �� ��������, ������ �� �������
				{
					Empty_Space->Top += 127;
					int border = picture->Top - 127;
					while (picture->Top > border)
						picture->Top -= 1;
					CurrentScoreCount++; // ����������� ������� ���������
				}; break;
				default: break; // ������� ������������ ����� ���, ��������� ��� ��� ����
			}
			CurrentScoreLabel->Text = CurrentScoreCount.ToString(); // ��������� �������
		}

		// ������������� ����������� ���������� ��� ����� � ������:
		private: void SetOrigCords()
		{
			OrigWardrobeCordX = Wardrobe->Left;
			OrigWardrobeCordY = Wardrobe->Top;

			OrigArmchairCordX = Armchair->Left;
			OrigArmchairCordY = Armchair->Top;
		}

		// ���������, ���������� �� ������� ���� � ������
		// �� ���� ���������, �������� �� ���������� ����� ����������� ����������� ������
		// � ����� �� ���������� ������ ����������� ����������� �����
		private: bool CheckWin()
		{
			if (Wardrobe->Left == OrigArmchairCordX && Wardrobe->Top == OrigArmchairCordY
				&& Armchair->Left == OrigWardrobeCordX && Armchair->Top == OrigWardrobeCordY)
				return true;
			return false;
		}

		// ��������� ��������� ����:
		private: void IsItWin()
		{
			if (CheckWin())
			{
				MessageBox::Show("�� ��������!\n��� ����������� ���� ������� '�������������'", "�����������!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				Pictures_Group->Enabled = false; // ��������� �������� ��� �����������

				if (BestScoreCount > CurrentScoreCount) //���������, ������ �� ������� �������� ������� 
					BestScoreCount = CurrentScoreCount;

				BestScoreLabel->Text = BestScoreCount.ToString(); // ������� �� ������� ��������� ����������
			}
		}

		// ��� �������� �������� �����:
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			WorkWithFile_button->Enabled = false; // ���������� ��������� ������ ����������
			Pictures_Group->Visible = false; // ������ � ������� ��������
			ReloadButton->Enabled = false; // ��������� ������ ������������
		}

		// ����� ����:
		private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
			RandomizeLocation();
			WorkWithFile_button->Enabled = true; // �������� ������ ����������
			Pictures_Group->Visible = true; // ������ ������ ��������
			ReloadButton->Enabled = true; // ������ ������ ������������ ���������
			StartButton->Enabled = false; // ��������� ������ � ������ ������
			SetOrigCords(); // ���������� ���������� ����� � ������
			TryingCount++; // ����������� ���������� �������

			label1->Visible = true; // �������� ������� � ���-�� ��������
			// �������� ������� ������� � ������� �� ���� ���������� ����������:
			TryingsCountLabel->Visible = true; TryingsCountLabel->Text = TryingCount.ToString();
			// �������� �������, ������������ ���������� ����� �� ������� �������
			label3->Visible = true;
			CurrentScoreLabel->Visible = true; CurrentScoreLabel->Text = CurrentScoreCount.ToString();

			label2->Visible = true; // �������� ������� � ������ ����������
			// �������� ������� ������� ���������� � ������� �� ���� ���������� ����������:
			BestScoreLabel->Visible = true;

			if (CheckCompPlay->Checked) // ���������, �������� �� ���� �����������
			{
				timer1->Enabled = true; // �������� ������, �� �������� ��������� ����� ����������� ��������
				timer1->Interval = 200; // ������������� ������
			}
		}

		// ���� �� �������� �� ������:
		private: System::Void Table_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Table); // ���������, ������ �� ����������� ��������
		}

		// ���� �� �������� �� ����:
		private: System::Void Wardrobe_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Wardrobe); // ���������, ������ �� ����������� ��������
			IsItWin(); // ���������, �������� �� ���� ��� ��������
		}

		// ���� �� �������� � ������� ������:
		private: System::Void Chair_red_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Chair_red); // ���������, ������ �� ����������� ��������
		}

		// ���� �� �������� � �������:
		private: System::Void Armchair_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Armchair); // ���������, ������ �� ����������� ��������
			IsItWin(); // ���������, �������� �� ���� ��� ��������
		}

		// ���� �� �������� � ����� ������:
		private: System::Void Chair_white_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Chair_white); // ���������, ������ �� ����������� ��������
		}

		private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm11^ info = gcnew MyForm11(); // �������� ���������� ����� "�� ���������"
			info->ShowDialog(); // �������� ����� "�� ���������"
		}

		private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Author^ author = gcnew Author(); // �������� ���������� ����� "�� ������"
			author->ShowDialog(); // �������� ����� "�� ������"
		}

		private: System::Void ReloadButton_Click(System::Object^ sender, System::EventArgs^ e) {
			RandomizeLocation(); // ������������� ��������� ��������
			SetOrigCords(); // ���������� ���������� ����� � ������
			timer1->Enabled = false; // ��������� ������ � ����� ����������
			CurrentScoreCount = 0; // ���������� ������� �������
			CurrentScoreLabel->Text = CurrentScoreCount.ToString(); // ��������� ���������� � ��������
			Pictures_Group->Enabled = true; // �������� ����������� ������� ��������
			TryingCount++; // ����������� ������� �������

			TryingsCountLabel->Text = TryingCount.ToString(); // ������� �� ������� ��������� ����������

			if (CheckCompPlay->Checked) // ���������, �������� �� ���� �����������
			{
				timer1->Enabled = true; // �������� ������, �� �������� ��������� ����� ����������� ��������
				timer1->Interval = 200; // ������������� ������
			}
		}

		private: System::Void ArmchairFrame_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			e->Graphics->DrawRectangle(ArmchairPen, 3, 3, 113, 122); // ������ �������
		}

		private: System::Void WardrobeFrame_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			e->Graphics->DrawRectangle(WardrobePen, 3, 3, 113, 122); // ������ �������
		}

		// ���������, ������� ������ ��� � ������ ����� �������:
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (!CheckWin()) // ���� ��������� �� ��� ��� �� �������
			{
				std::vector <int> CanBeSwitchedArr; // ������� ������, � ������� ����� ������� �������� ������ ������������
				// ���� ����������� ����� ����������� - ��������� �� � ������
				int switch_chance = rand() % 3 + 1; // ����, ������������ �� ������/����, ���� ��� �� ����� ������
				// ���� ������ �� ��������� �� ����� �����, �� ����� ��� ������� ��� ���� ��� �� ����� �����, �� �����
				// ����������� ��� � ������������ 1/3:
				if (Armchair->Left != OrigWardrobeCordX || Armchair->Top != OrigWardrobeCordY || switch_chance == 1)
				{
					if (CanButtonBeSwitched(Armchair) != 0) // ���������, ����� �� ������� ����������
						CanBeSwitchedArr.push_back(0); // ��������� � ������
				}
				// ���� ���� �� ��������� �� ����� �����, �� ����� ��� ������� ��� ���� �� �� ����� �����, �� �����
				// ����������� ��� � ������������ 1/3:
				if (Wardrobe->Left != OrigArmchairCordX || Wardrobe->Top != OrigArmchairCordY || switch_chance == 1)
				{
					if (CanButtonBeSwitched(Wardrobe) != 0) // ���������, ����� �� ������� ����������
						CanBeSwitchedArr.push_back(1); // ��������� � ������
				}
				if (CanButtonBeSwitched(Chair_red) != 0) // ���������, ����� �� ������� ����������
					CanBeSwitchedArr.push_back(2); // ��������� � ������
				if (CanButtonBeSwitched(Chair_white) != 0) // ���������, ����� �� ������� ����������
					CanBeSwitchedArr.push_back(3); // ��������� � ������
				if (CanButtonBeSwitched(Table) != 0) // ���������, ����� �� ������� ����������
					CanBeSwitchedArr.push_back(4); // ��������� � ������

				int choice; // ���������� ������
				if (CanBeSwitchedArr.size() != 1) // ���� ����� ����������� ��������� ������������
				{
					do // ����������� ��� ����������, ������� �� ��� ���������� � ������� ���
					{
						choice = rand() % CanBeSwitchedArr.size(); // ��������, ����� ���������� ����� �����������
					} while (CanBeSwitchedArr[choice] == LastMovedPictureBox); // �������� �� ���� �����, �������� ��� �� ����
				}
				else
					choice = rand() % CanBeSwitchedArr.size(); // ��������, ����� ���������� ����� �����������
				LastMovedPictureBox = CanBeSwitchedArr[choice]; // ���������� ������������ ����������
				switch (CanBeSwitchedArr[choice]) // ����������� ����������
				{
				case 0: Switch(Armchair); break;
				case 1: Switch(Wardrobe); break;
				case 2: Switch(Chair_red); break;
				case 3: Switch(Chair_white); break;
				case 4: Switch(Table); break;
				default: break;
				}
			}
			else // � ��������� ������ ������� ���������� � ������
			{
				timer1->Enabled = false; // ��������� ������
				IsItWin(); // ���������, ���������� �� ��������
			}
		}

		// ���� �� ������ ����������
		private: System::Void SaveCurrentFile_button_Click(System::Object^ sender, System::EventArgs^ e) {
			std::ofstream Saving; // ��������� ����� ������
			Saving.open("save.txt");

			if (Saving.is_open()) // ���� ���� ���������� ������� ������
			{
				Saving << TryingCount << std::endl; // ���������� ����� ���������� �������
				Saving << BestScoreCount << std::endl; // ���������� ��������� ���������
				Saving << OrigArmchairCordX << std::endl << OrigArmchairCordY << std::endl; // ���������� ����������� ��������� ������
				Saving << OrigWardrobeCordX << std::endl << OrigWardrobeCordY << std::endl; // ���������� ����������� ��������� �����
				Saving << Table->Left << std::endl << Table->Top << std::endl; // ���������� ���������� �����
				Saving << Chair_white->Left << std::endl << Chair_white->Top << std::endl; // ���������� ���������� ������ �����
				Saving << Wardrobe->Left << std::endl << Wardrobe->Top << std::endl; // ���������� ���������� �����
				Saving << WardrobeFrame->Left << std::endl << WardrobeFrame->Top << std::endl; // ���������� ���������� ����� ��� �����
				Saving << Chair_red->Left << std::endl << Chair_red->Top << std::endl; // ���������� ��������� �������� �����
				Saving << Empty_Space->Left << std::endl << Empty_Space->Top << std::endl; // ���������� ���������� ������� �����������
				Saving << Armchair->Left << std::endl << Armchair->Top << std::endl; // ���������� ���������� ������
				Saving << ArmchairFrame->Left << std::endl << ArmchairFrame->Top << std::endl; // ���������� ���������� ������ � �������

				MessageBox::Show("���� ���������!", "����������",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else // � ��������� ������ ������� ���������� �� ������
			{
				MessageBox::Show("�� ������� ��������� ����!", "������",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			Saving.close(); // ��������� �����
		}

		// ���� �� ������ ��������:
		private: System::Void LoadSavedFile_button_Click(System::Object^ sender, System::EventArgs^ e) {
			std::ifstream Loading; // ��������� ����� ������
			Loading.open("save.txt");
			int tmp[22]; // ������� ��������� ������ ��� ������
			if (Loading.is_open())
			{
				for (int i = 0; i < 22; i++) // ��������� ��������
					Loading >> tmp[i];

				TryingCount = tmp[0]; // ����������� ���������� �������
				BestScoreCount = tmp[1]; // ����������� ��������� ���������
				OrigArmchairCordX = tmp[2]; OrigArmchairCordY = tmp[3]; // ����������� ����������� ���������� ������
				OrigWardrobeCordX = tmp[4]; OrigWardrobeCordY = tmp[5]; // ����������� ����������� ���������� �����
				Table->Left = tmp[6]; Table->Top = tmp[7]; // ����������� ����������� ���������� �����
				Chair_white->Left = tmp[8]; Chair_white->Top = tmp[9]; // ����������� ���������� ������ �����
				Wardrobe->Left = tmp[10]; Wardrobe->Top = tmp[11]; // ����������� ���������� �����
				WardrobeFrame->Left = tmp[12]; WardrobeFrame->Top = tmp[13]; // ����������� ���������� ����� ��� �����
				Chair_red->Left = tmp[14]; Chair_red->Top = tmp[15]; // ����������� ���������� �������� �����
				Empty_Space->Left = tmp[16];Empty_Space->Top = tmp[17]; // ����������� ���������� ������� ������������
				Armchair->Left = tmp[18]; Armchair->Top = tmp[19]; // ����������� ���������� ������
				ArmchairFrame->Left = tmp[20]; ArmchairFrame->Top = tmp[21]; // ����������� ���������� ����� ��� ������

				MessageBox::Show("����������� ���� ���������!", "����������",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else // � ��������� ������ ������� ���������� �� ������
			{
				MessageBox::Show("������� ���������� �� ������ ������ �� ����������!", "������", 
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			Loading.close(); // ��������� ����� ������ 
			TryingsCountLabel->Text = TryingCount.ToString(); // ��������� ������� �������
			if (BestScoreCount != 10000) // ��������� ������� ���������� ����������
				BestScoreLabel->Text = BestScoreCount.ToString();
		}
		
		// ��� ��������� ������� �� "���� �����������":
		private: System::Void CheckCompPlay_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			if (!CheckWin())
			{
				timer1->Enabled = !timer1->Enabled;
				timer1->Interval = 200;
				srand(time(NULL));
			}
		}
	};
}
