#pragma once
#include "add.h"
#include "show.h"
#include "del.h"
#include "edit.h"
#include "settings.h"

namespace pprProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addButton;
	protected: 
	private: System::Windows::Forms::Button^  editButton;
	private: System::Windows::Forms::Button^  deleteButton;
	private: System::Windows::Forms::Button^  showButton;
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::Label^  albumsListTitle;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  albumsList;
	private: System::Windows::Forms::Button^  refreshButton;
	private: System::Windows::Forms::Button^  settingsButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->editButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->showButton = (gcnew System::Windows::Forms::Button());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->albumsListTitle = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->albumsList = (gcnew System::Windows::Forms::Label());
			this->refreshButton = (gcnew System::Windows::Forms::Button());
			this->settingsButton = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::Color::White;
			this->addButton->FlatAppearance->BorderSize = 0;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->addButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"addButton.Image")));
			this->addButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->addButton->Location = System::Drawing::Point(5, 5);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(170, 60);
			this->addButton->TabIndex = 0;
			this->addButton->Text = L"Dodaj album";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// editButton
			// 
			this->editButton->BackColor = System::Drawing::Color::White;
			this->editButton->FlatAppearance->BorderSize = 0;
			this->editButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->editButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"editButton.Image")));
			this->editButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->editButton->Location = System::Drawing::Point(5, 135);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(170, 60);
			this->editButton->TabIndex = 1;
			this->editButton->Text = L"Edytuj album";
			this->editButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->editButton->UseVisualStyleBackColor = false;
			this->editButton->Click += gcnew System::EventHandler(this, &MyForm::editButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->BackColor = System::Drawing::Color::White;
			this->deleteButton->FlatAppearance->BorderSize = 0;
			this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->deleteButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"deleteButton.Image")));
			this->deleteButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteButton->Location = System::Drawing::Point(5, 200);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(170, 60);
			this->deleteButton->TabIndex = 2;
			this->deleteButton->Text = L"Usuñ album";
			this->deleteButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deleteButton->UseVisualStyleBackColor = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &MyForm::deleteButton_Click);
			// 
			// showButton
			// 
			this->showButton->BackColor = System::Drawing::Color::White;
			this->showButton->FlatAppearance->BorderSize = 0;
			this->showButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->showButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->showButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"showButton.Image")));
			this->showButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->showButton->Location = System::Drawing::Point(5, 70);
			this->showButton->Name = L"showButton";
			this->showButton->Size = System::Drawing::Size(170, 60);
			this->showButton->TabIndex = 3;
			this->showButton->Text = L"Poka¿ album";
			this->showButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->showButton->UseVisualStyleBackColor = false;
			this->showButton->Click += gcnew System::EventHandler(this, &MyForm::showButton_Click);
			// 
			// titleLabel
			// 
			this->titleLabel->AutoSize = true;
			this->titleLabel->BackColor = System::Drawing::Color::White;
			this->titleLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->titleLabel->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"titleLabel.Image")));
			this->titleLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->titleLabel->Location = System::Drawing::Point(0, 0);
			this->titleLabel->MinimumSize = System::Drawing::Size(626, 50);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->titleLabel->Size = System::Drawing::Size(626, 50);
			this->titleLabel->TabIndex = 4;
			this->titleLabel->Text = L"      Baza albumów muzycznych";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12.75F));
			this->label1->Location = System::Drawing::Point(0, 380);
			this->label1->MinimumSize = System::Drawing::Size(626, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(626, 62);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Aplikacja przygotowana przez Mateusza Piotrowicza\r\n©2015";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::White;
			this->Exit->FlatAppearance->BorderSize = 0;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->Exit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Exit.Image")));
			this->Exit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Exit->Location = System::Drawing::Point(5, 265);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(170, 60);
			this->Exit->TabIndex = 7;
			this->Exit->Text = L"WyjdŸ";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// albumsListTitle
			// 
			this->albumsListTitle->AutoSize = true;
			this->albumsListTitle->BackColor = System::Drawing::Color::White;
			this->albumsListTitle->Font = (gcnew System::Drawing::Font(L"Calibri Light", 14.25F));
			this->albumsListTitle->Location = System::Drawing::Point(186, 55);
			this->albumsListTitle->MinimumSize = System::Drawing::Size(433, 40);
			this->albumsListTitle->Name = L"albumsListTitle";
			this->albumsListTitle->Size = System::Drawing::Size(433, 40);
			this->albumsListTitle->TabIndex = 8;
			this->albumsListTitle->Text = L"Lista wszystkich albumów:";
			this->albumsListTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->deleteButton);
			this->panel1->Controls->Add(this->addButton);
			this->panel1->Controls->Add(this->editButton);
			this->panel1->Controls->Add(this->showButton);
			this->panel1->Location = System::Drawing::Point(0, 50);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(180, 330);
			this->panel1->TabIndex = 9;
			// 
			// albumsList
			// 
			this->albumsList->AutoSize = true;
			this->albumsList->BackColor = System::Drawing::Color::White;
			this->albumsList->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->albumsList->Location = System::Drawing::Point(186, 100);
			this->albumsList->MaximumSize = System::Drawing::Size(433, 273);
			this->albumsList->MinimumSize = System::Drawing::Size(433, 273);
			this->albumsList->Name = L"albumsList";
			this->albumsList->Size = System::Drawing::Size(433, 273);
			this->albumsList->TabIndex = 10;
			// 
			// refreshButton
			// 
			this->refreshButton->BackColor = System::Drawing::Color::White;
			this->refreshButton->FlatAppearance->BorderSize = 0;
			this->refreshButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->refreshButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"refreshButton.Image")));
			this->refreshButton->Location = System::Drawing::Point(579, 55);
			this->refreshButton->MaximumSize = System::Drawing::Size(40, 40);
			this->refreshButton->MinimumSize = System::Drawing::Size(40, 40);
			this->refreshButton->Name = L"refreshButton";
			this->refreshButton->Size = System::Drawing::Size(40, 40);
			this->refreshButton->TabIndex = 11;
			this->refreshButton->UseVisualStyleBackColor = false;
			this->refreshButton->Click += gcnew System::EventHandler(this, &MyForm::refreshButton_Click);
			// 
			// settingsButton
			// 
			this->settingsButton->BackColor = System::Drawing::Color::White;
			this->settingsButton->FlatAppearance->BorderSize = 0;
			this->settingsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settingsButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"settingsButton.Image")));
			this->settingsButton->Location = System::Drawing::Point(579, 7);
			this->settingsButton->MaximumSize = System::Drawing::Size(40, 40);
			this->settingsButton->MinimumSize = System::Drawing::Size(40, 40);
			this->settingsButton->Name = L"settingsButton";
			this->settingsButton->Size = System::Drawing::Size(40, 40);
			this->settingsButton->TabIndex = 12;
			this->settingsButton->UseVisualStyleBackColor = false;
			this->settingsButton->Click += gcnew System::EventHandler(this, &MyForm::settingsButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(624, 442);
			this->Controls->Add(this->settingsButton);
			this->Controls->Add(this->refreshButton);
			this->Controls->Add(this->albumsList);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->albumsListTitle);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->titleLabel);
			this->MaximumSize = System::Drawing::Size(640, 480);
			this->MinimumSize = System::Drawing::Size(640, 480);
			this->Name = L"MyForm";
			this->Text = L"Baza albumów muzycznych";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 String^ readFile= File::ReadAllText("albums/albumsList.txt");
			 albumsList->Text = readFile;
			}

	private: System::Void refreshButton_Click(System::Object^  sender, System::EventArgs^  e) {	 
		     String^ readFile= File::ReadAllText("albums/albumsList.txt");
			 albumsList->Text = readFile;		 
			}

	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 add^ addForm = gcnew add();
			 addForm->ShowDialog();
			}

	private: System::Void showButton_Click(System::Object^  sender, System::EventArgs^  e) {		
			show^ showForm = gcnew show();
			showForm->ShowDialog();		
			}
	
	private: System::Void editButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 edit^ editForm = gcnew edit();
			 editForm->ShowDialog();
			}

	private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 del^ deleteForm = gcnew del();
			 deleteForm->ShowDialog();
			}
	
	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
			}
		 
	private: System::Void settingsButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 settings^ settingsForm = gcnew settings();
			 settingsForm->ShowDialog();
			}
};
}
