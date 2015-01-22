#pragma once

namespace pprProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for show
	/// </summary>
	public ref class show : public System::Windows::Forms::Form
	{
	public:
		show(void)
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
		~show()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  albumNameLabel;
	private: System::Windows::Forms::TextBox^  albumNameTextBox;

	private: System::Windows::Forms::Label^  albumInfoTitle;



	private: System::Windows::Forms::Label^  artistLabel;
	private: System::Windows::Forms::TextBox^  artistTextBox;








	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Button^  Exit;
	private: System::Windows::Forms::Label^  albumInfoLabel;






	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(show::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->albumNameLabel = (gcnew System::Windows::Forms::Label());
			this->albumNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->albumInfoTitle = (gcnew System::Windows::Forms::Label());
			this->artistLabel = (gcnew System::Windows::Forms::Label());
			this->artistTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->albumInfoLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
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
			this->titleLabel->MinimumSize = System::Drawing::Size(390, 50);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->titleLabel->Size = System::Drawing::Size(390, 50);
			this->titleLabel->TabIndex = 14;
			this->titleLabel->Text = L"       Poka¿ album...";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// albumNameLabel
			// 
			this->albumNameLabel->AutoSize = true;
			this->albumNameLabel->BackColor = System::Drawing::Color::White;
			this->albumNameLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->albumNameLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->albumNameLabel->Location = System::Drawing::Point(0, 50);
			this->albumNameLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->albumNameLabel->Name = L"albumNameLabel";
			this->albumNameLabel->Size = System::Drawing::Size(390, 30);
			this->albumNameLabel->TabIndex = 15;
			this->albumNameLabel->Text = L"Podaj tytu³:";
			this->albumNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// albumNameTextBox
			// 
			this->albumNameTextBox->Location = System::Drawing::Point(114, 56);
			this->albumNameTextBox->Name = L"albumNameTextBox";
			this->albumNameTextBox->Size = System::Drawing::Size(240, 20);
			this->albumNameTextBox->TabIndex = 16;
			// 
			// albumInfoTitle
			// 
			this->albumInfoTitle->AutoSize = true;
			this->albumInfoTitle->BackColor = System::Drawing::Color::White;
			this->albumInfoTitle->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->albumInfoTitle->Location = System::Drawing::Point(5, 115);
			this->albumInfoTitle->MinimumSize = System::Drawing::Size(380, 30);
			this->albumInfoTitle->Name = L"albumInfoTitle";
			this->albumInfoTitle->Size = System::Drawing::Size(380, 30);
			this->albumInfoTitle->TabIndex = 19;
			this->albumInfoTitle->Text = L"Szczegó³owe informacje o albumie:";
			this->albumInfoTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// artistLabel
			// 
			this->artistLabel->AutoSize = true;
			this->artistLabel->BackColor = System::Drawing::Color::White;
			this->artistLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->artistLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->artistLabel->Location = System::Drawing::Point(0, 79);
			this->artistLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->artistLabel->Name = L"artistLabel";
			this->artistLabel->Size = System::Drawing::Size(390, 30);
			this->artistLabel->TabIndex = 22;
			this->artistLabel->Text = L"Podaj wykonawcê:";
			this->artistLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// artistTextBox
			// 
			this->artistTextBox->Location = System::Drawing::Point(114, 85);
			this->artistTextBox->Name = L"artistTextBox";
			this->artistTextBox->Size = System::Drawing::Size(240, 20);
			this->artistTextBox->TabIndex = 23;
			// 
			// searchButton
			// 
			this->searchButton->BackColor = System::Drawing::Color::White;
			this->searchButton->FlatAppearance->BorderSize = 0;
			this->searchButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->searchButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"searchButton.Image")));
			this->searchButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->searchButton->Location = System::Drawing::Point(12, 365);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->searchButton->Size = System::Drawing::Size(170, 60);
			this->searchButton->TabIndex = 25;
			this->searchButton->Text = L"Wyszukaj";
			this->searchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &show::searchButton_Click_1);
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
			this->Exit->Location = System::Drawing::Point(205, 365);
			this->Exit->Name = L"Exit";
			this->Exit->Padding = System::Windows::Forms::Padding(0, 0, 8, 0);
			this->Exit->Size = System::Drawing::Size(170, 60);
			this->Exit->TabIndex = 26;
			this->Exit->Text = L"WyjdŸ";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &show::Exit_Click_1);
			// 
			// albumInfoLabel
			// 
			this->albumInfoLabel->AutoSize = true;
			this->albumInfoLabel->BackColor = System::Drawing::Color::White;
			this->albumInfoLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->albumInfoLabel->Location = System::Drawing::Point(5, 152);
			this->albumInfoLabel->MinimumSize = System::Drawing::Size(380, 200);
			this->albumInfoLabel->Name = L"albumInfoLabel";
			this->albumInfoLabel->Size = System::Drawing::Size(380, 200);
			this->albumInfoLabel->TabIndex = 27;
			// 
			// show
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(390, 438);
			this->Controls->Add(this->albumInfoLabel);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->artistTextBox);
			this->Controls->Add(this->artistLabel);
			this->Controls->Add(this->albumInfoTitle);
			this->Controls->Add(this->albumNameTextBox);
			this->Controls->Add(this->albumNameLabel);
			this->Controls->Add(this->titleLabel);
			this->MaximumSize = System::Drawing::Size(406, 476);
			this->MinimumSize = System::Drawing::Size(406, 476);
			this->Name = L"show";
			this->Text = L"Baza albumów muzycznych - poka¿ album";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void searchButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		String^ readFile= File::ReadAllText("albums/albumsList.txt");
				
		if((albumNameTextBox->Text == "") || (artistTextBox->Text == "")) {
			MessageBox::Show("Wype³nij wszystkie pola!", "Puste pola", MessageBoxButtons::OK, MessageBoxIcon::Warning);			
			albumNameTextBox->Focus();
		}
			
		else {
			if(!(readFile->Contains(albumNameTextBox->Text + "-" + artistTextBox->Text)))  {
				MessageBox::Show("Taki album nie istnieje w bazie.",
					"Album nie istnieje", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);					
				albumNameTextBox->Focus();
		}
			
			else {
				String^ albumName = albumNameTextBox->Text;
				String^ artistName = artistTextBox->Text;
				array<String^>^ albumInfo = gcnew array<String^>(7);
				albumInfo[0] = "Tytu³ albumu: ";
				albumInfo[1] = "Wykonawca: ";
				albumInfo[2] = "Gatunek: ";
				albumInfo[3] = "Rok wydania: ";
				albumInfo[4] = "Rodzaj: ";
				albumInfo[5] = "Przes³uchany: ";
				albumInfo[6] = "Dodany/Zmodyfikowany: ";
				StreamReader^ din = File::OpenText("albums/" + albumName + "-" + artistName + ".txt");
								
				String^ str;
				int i = 0;	
				String^ albumInfoContent;
						
				while ((str = din->ReadLine()) != nullptr) {
					albumInfoContent += albumInfo[i] + str + "\n";
					i++;						
				}
				din->Close();
				albumInfoLabel->Text = albumInfoContent;
				
			}

		}
	}
	
	private: System::Void Exit_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 this->Close();
	}

};
}
