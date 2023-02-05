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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ обПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ обАвтореToolStripMenuItem;
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
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->обПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->обАвтореToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->обПрограммеToolStripMenuItem,
					this->обАвтореToolStripMenuItem, this->WorkWithFile_button
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(502, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// обПрограммеToolStripMenuItem
			// 
			this->обПрограммеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->обПрограммеToolStripMenuItem->Name = L"обПрограммеToolStripMenuItem";
			this->обПрограммеToolStripMenuItem->Size = System::Drawing::Size(141, 27);
			this->обПрограммеToolStripMenuItem->Text = L"Об программе";
			this->обПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обПрограммеToolStripMenuItem_Click);
			// 
			// обАвтореToolStripMenuItem
			// 
			this->обАвтореToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->обАвтореToolStripMenuItem->Name = L"обАвтореToolStripMenuItem";
			this->обАвтореToolStripMenuItem->Size = System::Drawing::Size(106, 27);
			this->обАвтореToolStripMenuItem->Text = L"Об авторе";
			this->обАвтореToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::обАвтореToolStripMenuItem_Click);
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
			this->WorkWithFile_button->Text = L"Файл";
			// 
			// SaveCurrentFile_button
			// 
			this->SaveCurrentFile_button->Name = L"SaveCurrentFile_button";
			this->SaveCurrentFile_button->Size = System::Drawing::Size(178, 28);
			this->SaveCurrentFile_button->Text = L"Сохранить";
			this->SaveCurrentFile_button->Click += gcnew System::EventHandler(this, &MyForm::SaveCurrentFile_button_Click);
			// 
			// LoadSavedFile_button
			// 
			this->LoadSavedFile_button->Name = L"LoadSavedFile_button";
			this->LoadSavedFile_button->Size = System::Drawing::Size(178, 28);
			this->LoadSavedFile_button->Text = L"Загрузить";
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
			this->Pictures_Group->Text = L"Мебель";
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
			this->CheckCompPlay->Text = L"Игра компьютера";
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
			this->StartButton->Text = L"Начать";
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
			this->ReloadButton->Text = L"Перезагрузить";
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
			this->label1->Text = L"Общее количество попыток:";
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
			this->label2->Text = L"Наилучший результат:";
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
			this->label3->Text = L"Текущий результат: ";
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
			this->Text = L"Расстановка мебели";
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
		Pen^ WardrobePen = gcnew Pen(Brushes::Blue, 6); // Карандаш для обводки вокруг шкафа
		Pen^ ArmchairPen = gcnew Pen(Brushes::Yellow, 6); // Карандаш для обводки вокруг кресла
		
		int OrigWardrobeCordX, OrigWardrobeCordY; // Переменные для изначальных координат шкафа
		int OrigArmchairCordX, OrigArmchairCordY; // Переменные для изначальных координат кресла

		int TryingCount = 0; // Переменная, которая считает общее количество попыток
		int BestScoreCount = 10000; // Переменная, которая считает лучший результат
		int CurrentScoreCount = 0; // Переменная, которая считает текущий результат

		// Переменная, которая хранит в себе условный номер последнего передвинутого пикчербокса:
		int LastMovedPictureBox = -1;

		// Устанавливаем координаты для картинки:
		private: void PictureSetCord(System::Windows::Forms::PictureBox^ picture, int x, int y)
		{
			picture->Left = x;
			picture->Top = y;
		}

		// Функция, отвечающая за рандомизация положения элементов мебели
		private: void RandomizeLocation()
		{
			int coordinats_x[] = { 9, 126, 243, 9, 126, 243 }; // Координаты для X
			int coordinats_y[] = { 26, 26, 26, 153, 153, 153 }; // Координаты для Y
			srand(time(NULL)); // Инициализация ДСЧ
			
			int which_cords[6] = { -1, -1, -1, -1, -1, -1 }; // Какой индекс из coordinate_X/Y должно браться
			// Инициализация индекса в массива which_coords и переменная для хранения индекса, который должен браться
			int j = 0; int tmp_which_cords;
			while (j < 6)
			{
				bool check = true; // Проверка на то, встречается ли данный индес
				tmp_which_cords = rand() % 6; // Индекс
				for (int i = 0; i < 6; i++)
				{
					if (tmp_which_cords == which_cords[i]) // Если такой индекс, уже есть, не добавляем его
						check = false;
				}
				if (check) // Если данный индекс не встречался, то добавляем его в массив
				{
					which_cords[j] = tmp_which_cords;
					j++;
				}
			}
			// То есть, мы создаем массив, который будет определять, какие по порядку координаты должна присвоить картинка
			// Допустим массив which_cord = {0, 3, 5, 2, 1}, тогда первый элемент мебели присвоит первые координаты
			// Второй элемент мебели присвоит 4 координаты, Третий элемент присвоит 6 координаты и тд
			

			// Присваиваем координаты картинкам:
			PictureSetCord(Table, coordinats_x[which_cords[0]], coordinats_y[which_cords[0]]);
			PictureSetCord(Chair_white, coordinats_x[which_cords[1]], coordinats_y[which_cords[1]]);
			PictureSetCord(Wardrobe, coordinats_x[which_cords[2]], coordinats_y[which_cords[2]]);
			PictureSetCord(WardrobeFrame, coordinats_x[which_cords[2]] - 3, coordinats_y[which_cords[2]] - 3);
			PictureSetCord(Chair_red, coordinats_x[which_cords[3]], coordinats_y[which_cords[3]]);
			PictureSetCord(Empty_Space, coordinats_x[which_cords[4]], coordinats_y[which_cords[4]]);
			PictureSetCord(Armchair, coordinats_x[which_cords[5]], coordinats_y[which_cords[5]]);
			PictureSetCord(ArmchairFrame, coordinats_x[which_cords[5]] - 3, coordinats_y[which_cords[5]] - 3);

			Pictures_Group->Refresh(); // Перерисовываем все пикчерброксы
		}

		// Проверяем по координатам, находится ли пустое простанство слева, справа, сверху или снизу картинки:
		private: int CanButtonBeSwitched(System::Windows::Forms::PictureBox^ picture)
		{
			if (picture->Left + 117 == Empty_Space->Left &&
				picture->Top == Empty_Space->Top)
				return 1; // Пустое пространство справа
			if (picture->Left - 117 == Empty_Space->Left &&
				picture->Top == Empty_Space->Top)
				return 2; // Пустое пространство слева
			if (picture->Left == Empty_Space->Left &&
				picture->Top + 127 == Empty_Space->Top)
				return 3; // Пустое пространство сверху
			if (picture->Left == Empty_Space->Left &&
				picture->Top - 127 == Empty_Space->Top)
				return 4; // Пустое пространство снизу
			return 0; // Пустого пространства рядом нет
		}

		// Передвигаем элементы мебели:
		private: void Switch(System::Windows::Forms::PictureBox^ picture)
		{
			switch (CanButtonBeSwitched(picture))
			{
				case 1: // Пустое пространство справа от картинки, меняем их местами
				{
					Empty_Space->Left -= 117;
					int border = picture->Left + 117;
					while (picture->Left < border)
						picture->Left += 1;
					CurrentScoreCount++; // Увеличиваем текущий результат
				}; break;
				case 2:// Пустое пространство слева от картинки, меняем их местами
				{
					Empty_Space->Left += 117;
					int border = picture->Left - 117;
					while (picture->Left > border)
						picture->Left -= 1;
					CurrentScoreCount++; // Увеличиваем текущий результат
				}; break;
				case 3:// Пустое пространство сверху от картинки, меняем их местами
				{
					Empty_Space->Top -= 127;
					int border = picture->Top + 127;
					while (picture->Top < border)
						picture->Top += 1;
					CurrentScoreCount++; // Увеличиваем текущий результат
				}; break;
				case 4:// Пустое пространство снизу от картинки, меняем их местами
				{
					Empty_Space->Top += 127;
					int border = picture->Top - 127;
					while (picture->Top > border)
						picture->Top -= 1;
					CurrentScoreCount++; // Увеличиваем текущий результат
				}; break;
				default: break; // Пустого пространства рядом нет, оставляем все как есть
			}
			CurrentScoreLabel->Text = CurrentScoreCount.ToString(); // Обновляем счетчик
		}

		// Устанавливаем изначальные координаты для шкафа и кресла:
		private: void SetOrigCords()
		{
			OrigWardrobeCordX = Wardrobe->Left;
			OrigWardrobeCordY = Wardrobe->Top;

			OrigArmchairCordX = Armchair->Left;
			OrigArmchairCordY = Armchair->Top;
		}

		// Проверяем, поменялись ли местами шкаф и кресло
		// То есть проверяем, является ли координаты шкафа изначальным координатам кресла
		// И равны ли координаты кресла изначальныи координатам шкафа
		private: bool CheckWin()
		{
			if (Wardrobe->Left == OrigArmchairCordX && Wardrobe->Top == OrigArmchairCordY
				&& Armchair->Left == OrigWardrobeCordX && Armchair->Top == OrigWardrobeCordY)
				return true;
			return false;
		}

		// Обработка победного хода:
		private: void IsItWin()
		{
			if (CheckWin())
			{
				MessageBox::Show("Вы победили!\nДля продолжения игры нажмите 'Перезагрузить'", "Поздравляем!",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
				Pictures_Group->Enabled = false; // Выключаем картинки для перемещения

				if (BestScoreCount > CurrentScoreCount) //Проверяем, меньше ли прошлый резултат лучшего 
					BestScoreCount = CurrentScoreCount;

				BestScoreLabel->Text = BestScoreCount.ToString(); // Выводим на счетчик актульную информацию
			}
		}

		// При загрузке основной формы:
		private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			WorkWithFile_button->Enabled = false; // Изначально отключаем кнопку сохранения
			Pictures_Group->Visible = false; // Группа с мебелью невидима
			ReloadButton->Enabled = false; // Отключаем кнопку перезагрузки
		}

		// Старт игры:
		private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {
			RandomizeLocation();
			WorkWithFile_button->Enabled = true; // Включаем кнопку сохранения
			Pictures_Group->Visible = true; // Делаем плэйти видимыми
			ReloadButton->Enabled = true; // Делаем кнопку перезагрузки доступной
			StartButton->Enabled = false; // Блокируем доступ к кнопки старта
			SetOrigCords(); // Запоминаем координаты шкафа и кресла
			TryingCount++; // Увеличиваем количество попыток

			label1->Visible = true; // Включаем надпись о кол-ве попытках
			// Включаем счетчик попыток и выводим на него актуальную информацию:
			TryingsCountLabel->Visible = true; TryingsCountLabel->Text = TryingCount.ToString();
			// Включаем счетчик, отображающий количество ходов на текущей попытке
			label3->Visible = true;
			CurrentScoreLabel->Visible = true; CurrentScoreLabel->Text = CurrentScoreCount.ToString();

			label2->Visible = true; // Включаем надпись о лучшем результате
			// Включаем счетчик лучшего результата и выводим на него актуальную информацию:
			BestScoreLabel->Visible = true;

			if (CheckCompPlay->Checked) // Проверяем, включена ли игра компьютером
			{
				timer1->Enabled = true; // Включаем таймер, по которому компьютер будет передвигать картинки
				timer1->Interval = 200; // Устанавливаем таймер
			}
		}

		// Клик по картинке со столом:
		private: System::Void Table_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Table); // Проверяем, сможем ли передвинуть картинку
		}

		// Клик по картинке со шкаф:
		private: System::Void Wardrobe_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Wardrobe); // Проверяем, сможем ли передвинуть картинку
			IsItWin(); // Проверяем, является ли этот ход победным
		}

		// Клик по картинке с красным стулом:
		private: System::Void Chair_red_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Chair_red); // Проверяем, сможем ли передвинуть картинку
		}

		// Клик по картинке с креслом:
		private: System::Void Armchair_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Armchair); // Проверяем, сможем ли передвинуть картинку
			IsItWin(); // Проверяем, является ли этот ход победным
		}

		// Клик по картинке с белым стулом:
		private: System::Void Chair_white_Click(System::Object^ sender, System::EventArgs^ e) {
			Switch(Chair_white); // Проверяем, сможем ли передвинуть картинку
		}

		private: System::Void обПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm11^ info = gcnew MyForm11(); // Создание экземпляра формы "Об программе"
			info->ShowDialog(); // Открытие формы "Об программе"
		}

		private: System::Void обАвтореToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Author^ author = gcnew Author(); // Создание экземпляра формы "Об авторе"
			author->ShowDialog(); // Открытие формы "Об авторе"
		}

		private: System::Void ReloadButton_Click(System::Object^ sender, System::EventArgs^ e) {
			RandomizeLocation(); // Рандомизируем положение картинок
			SetOrigCords(); // Запоминаем координаты шкафа и кресла
			timer1->Enabled = false; // Отключаем таймер с ходом компьютера
			CurrentScoreCount = 0; // Сбрасываем текущий счетчик
			CurrentScoreLabel->Text = CurrentScoreCount.ToString(); // Обновляем информацию с счётчика
			Pictures_Group->Enabled = true; // Включаем возможность двигать картинки
			TryingCount++; // Увеличиваем счетчки попыток

			TryingsCountLabel->Text = TryingCount.ToString(); // Выводим на счетчик актульную информацию

			if (CheckCompPlay->Checked) // Проверяем, включена ли игра компьютером
			{
				timer1->Enabled = true; // Включаем таймер, по которому компьютер будет передвигать картинки
				timer1->Interval = 200; // Устанавливаем таймер
			}
		}

		private: System::Void ArmchairFrame_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			e->Graphics->DrawRectangle(ArmchairPen, 3, 3, 113, 122); // Рисуем обводку
		}

		private: System::Void WardrobeFrame_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			e->Graphics->DrawRectangle(WardrobePen, 3, 3, 113, 122); // Рисуем обводку
		}

		// Компьютер, который делает ход с каждым тиком таймера:
		private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (!CheckWin()) // Если компьютер до сих пор не выйграл
			{
				std::vector <int> CanBeSwitchedArr; // Создаем массив, в котором будем хранить условные номера пикчербоксов
				// Если пикчербоксы можно передвинуть - добавляем их в массив
				int switch_chance = rand() % 3 + 1; // Шанс, передвинется ли кресло/шкаф, если они на своих местах
				// Если кресло не находится на своем месте, то можем его двигать ИЛИ если оно на своем месте, то можем
				// передвинуть его с вероятностью 1/3:
				if (Armchair->Left != OrigWardrobeCordX || Armchair->Top != OrigWardrobeCordY || switch_chance == 1)
				{
					if (CanButtonBeSwitched(Armchair) != 0) // Проверяем, можно ли двинуть пикчербокс
						CanBeSwitchedArr.push_back(0); // Добавляем в массив
				}
				// Если шкаф не находится на своем месте, то можем его двигать ИЛИ если он на своем месте, то можем
				// передвинуть его с вероятностью 1/3:
				if (Wardrobe->Left != OrigArmchairCordX || Wardrobe->Top != OrigArmchairCordY || switch_chance == 1)
				{
					if (CanButtonBeSwitched(Wardrobe) != 0) // Проверяем, можно ли двинуть пикчербокс
						CanBeSwitchedArr.push_back(1); // Добавляем в массив
				}
				if (CanButtonBeSwitched(Chair_red) != 0) // Проверяем, можно ли двинуть пикчербокс
					CanBeSwitchedArr.push_back(2); // Добавляем в массив
				if (CanButtonBeSwitched(Chair_white) != 0) // Проверяем, можно ли двинуть пикчербокс
					CanBeSwitchedArr.push_back(3); // Добавляем в массив
				if (CanButtonBeSwitched(Table) != 0) // Проверяем, можно ли двинуть пикчербокс
					CanBeSwitchedArr.push_back(4); // Добавляем в массив

				int choice; // Переменная выбора
				if (CanBeSwitchedArr.size() != 1) // Если можно передвинуть несколько пикчербоксов
				{
					do // Передвигаем тот пикчербокс, который не был передвинут в прошлый ход
					{
						choice = rand() % CanBeSwitchedArr.size(); // Выбираем, какой пикчербокс хотим передвинуть
					} while (CanBeSwitchedArr[choice] == LastMovedPictureBox); // Выбираем до того бокса, которого еще не было
				}
				else
					choice = rand() % CanBeSwitchedArr.size(); // Выбираем, какой пикчербокс хотим передвинуть
				LastMovedPictureBox = CanBeSwitchedArr[choice]; // Запоминаем передвинутый пикчербокс
				switch (CanBeSwitchedArr[choice]) // Передвигаем пикчербокс
				{
				case 0: Switch(Armchair); break;
				case 1: Switch(Wardrobe); break;
				case 2: Switch(Chair_red); break;
				case 3: Switch(Chair_white); break;
				case 4: Switch(Table); break;
				default: break;
				}
			}
			else // В противном случае выводим информацию о победе
			{
				timer1->Enabled = false; // Выключаем таймер
				IsItWin(); // Проверяем, выйгрышное ли действие
			}
		}

		// Клик по кнопке сохранения
		private: System::Void SaveCurrentFile_button_Click(System::Object^ sender, System::EventArgs^ e) {
			std::ofstream Saving; // Открываем поток записи
			Saving.open("save.txt");

			if (Saving.is_open()) // Если файл сохранения успешно открыт
			{
				Saving << TryingCount << std::endl; // Записываем общее количество попыток
				Saving << BestScoreCount << std::endl; // Записываем наилучший результат
				Saving << OrigArmchairCordX << std::endl << OrigArmchairCordY << std::endl; // Записываем изначальные кординаты кресла
				Saving << OrigWardrobeCordX << std::endl << OrigWardrobeCordY << std::endl; // Записываем изначальные кординаты шкафа
				Saving << Table->Left << std::endl << Table->Top << std::endl; // Записываем координаты стола
				Saving << Chair_white->Left << std::endl << Chair_white->Top << std::endl; // Записываем координаты белого стула
				Saving << Wardrobe->Left << std::endl << Wardrobe->Top << std::endl; // Записываем координаты шкафа
				Saving << WardrobeFrame->Left << std::endl << WardrobeFrame->Top << std::endl; // Записываем координаты рамки для шкафа
				Saving << Chair_red->Left << std::endl << Chair_red->Top << std::endl; // Записываем кординаты красного стула
				Saving << Empty_Space->Left << std::endl << Empty_Space->Top << std::endl; // Записываем координаты пустого простанства
				Saving << Armchair->Left << std::endl << Armchair->Top << std::endl; // Записываем координаты кресла
				Saving << ArmchairFrame->Left << std::endl << ArmchairFrame->Top << std::endl; // Записываем координаты кресла с рамками

				MessageBox::Show("Игра сохранена!", "Сохранение",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else // В противном случае выводим информацию об ошибке
			{
				MessageBox::Show("Не удалось сохранить игру!", "Ошибка",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			Saving.close(); // Закрываем поток
		}

		// Клип по кнопке загрузки:
		private: System::Void LoadSavedFile_button_Click(System::Object^ sender, System::EventArgs^ e) {
			std::ifstream Loading; // Открываем поток чтения
			Loading.open("save.txt");
			int tmp[22]; // Создаем временный массив для чтения
			if (Loading.is_open())
			{
				for (int i = 0; i < 22; i++) // Считываем значения
					Loading >> tmp[i];

				TryingCount = tmp[0]; // Присваиваем количество попыток
				BestScoreCount = tmp[1]; // Присваиваем наилучший результат
				OrigArmchairCordX = tmp[2]; OrigArmchairCordY = tmp[3]; // Присваиваем изначальные координаты кресла
				OrigWardrobeCordX = tmp[4]; OrigWardrobeCordY = tmp[5]; // Присваиваем изначальные координаты шкафа
				Table->Left = tmp[6]; Table->Top = tmp[7]; // Присваиваем изначальные координаты стола
				Chair_white->Left = tmp[8]; Chair_white->Top = tmp[9]; // Присваиваем координаты белого стула
				Wardrobe->Left = tmp[10]; Wardrobe->Top = tmp[11]; // Присваиваем координаты шкафа
				WardrobeFrame->Left = tmp[12]; WardrobeFrame->Top = tmp[13]; // Присваиваем координаты рамки для шкафа
				Chair_red->Left = tmp[14]; Chair_red->Top = tmp[15]; // Присваиваем координаты красного стула
				Empty_Space->Left = tmp[16];Empty_Space->Top = tmp[17]; // Присваиваем координаты пустого пространства
				Armchair->Left = tmp[18]; Armchair->Top = tmp[19]; // Присваиваем координаты кресла
				ArmchairFrame->Left = tmp[20]; ArmchairFrame->Top = tmp[21]; // Присваиваем координаты рамки для кресла

				MessageBox::Show("Сохраненная игра загружена!", "Сохранение",
					MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else // В противном случае выводим информацию об ошибке
			{
				MessageBox::Show("Никаких сохранений на данный момент не существует!", "Ошибка", 
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			Loading.close(); // Закрываем поток чтения 
			TryingsCountLabel->Text = TryingCount.ToString(); // Обновляем счетчик попыток
			if (BestScoreCount != 10000) // Обновляем счетчик наилучшего результата
				BestScoreLabel->Text = BestScoreCount.ToString();
		}
		
		// При изменении галочки на "Игре компьютером":
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
