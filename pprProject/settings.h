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
	/// Summary for settings
	/// </summary>
	public ref class settings : public System::Windows::Forms::Form
	{
	public:
		settings(void)
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
		~settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  settingsLabel;


	private: System::Windows::Forms::Button^  Exit;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  searchByButton;





	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  alfabethicalOrderButton;

	private: System::Windows::Forms::Button^  deleteAllButton;

	private: System::Windows::Forms::ComboBox^  searchByComboBox;
	private: System::Windows::Forms::TextBox^  searchByTextBox;





	private: System::Windows::Forms::ComboBox^  alfabeticalOrderComboBox;
	private: System::Windows::Forms::Label^  label3;














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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(settings::typeid));
			this->settingsLabel = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->searchByButton = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->alfabethicalOrderButton = (gcnew System::Windows::Forms::Button());
			this->deleteAllButton = (gcnew System::Windows::Forms::Button());
			this->searchByComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->searchByTextBox = (gcnew System::Windows::Forms::TextBox());
			this->alfabeticalOrderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// settingsLabel
			// 
			this->settingsLabel->AutoSize = true;
			this->settingsLabel->BackColor = System::Drawing::Color::White;
			this->settingsLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->settingsLabel->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"settingsLabel.Image")));
			this->settingsLabel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->settingsLabel->Location = System::Drawing::Point(0, 0);
			this->settingsLabel->MinimumSize = System::Drawing::Size(490, 50);
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->settingsLabel->Size = System::Drawing::Size(490, 50);
			this->settingsLabel->TabIndex = 13;
			this->settingsLabel->Text = L"      Ustawienia...";
			this->settingsLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->Exit->Location = System::Drawing::Point(288, 188);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(170, 60);
			this->Exit->TabIndex = 16;
			this->Exit->Text = L"WyjdŸ";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &settings::Exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(0, 56);
			this->label1->MaximumSize = System::Drawing::Size(0, 30);
			this->label1->MinimumSize = System::Drawing::Size(390, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 30);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Wyszukaj albumy wg:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(0, 86);
			this->label5->MaximumSize = System::Drawing::Size(0, 30);
			this->label5->MinimumSize = System::Drawing::Size(390, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(390, 30);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Wpisz tytu³/wykonawcê/gatunek lub rodzaj:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// searchByButton
			// 
			this->searchByButton->BackColor = System::Drawing::Color::White;
			this->searchByButton->FlatAppearance->BorderSize = 0;
			this->searchByButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchByButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->searchByButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"searchByButton.Image")));
			this->searchByButton->Location = System::Drawing::Point(398, 56);
			this->searchByButton->Name = L"searchByButton";
			this->searchByButton->Size = System::Drawing::Size(60, 60);
			this->searchByButton->TabIndex = 31;
			this->searchByButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->searchByButton->UseVisualStyleBackColor = false;
			this->searchByButton->Click += gcnew System::EventHandler(this, &settings::searchByButton_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(0, 122);
			this->label7->MaximumSize = System::Drawing::Size(0, 30);
			this->label7->MinimumSize = System::Drawing::Size(390, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(390, 30);
			this->label7->TabIndex = 35;
			this->label7->Text = L"Wyœwietl albumy:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// alfabethicalOrderButton
			// 
			this->alfabethicalOrderButton->BackColor = System::Drawing::Color::White;
			this->alfabethicalOrderButton->FlatAppearance->BorderSize = 0;
			this->alfabethicalOrderButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->alfabethicalOrderButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->alfabethicalOrderButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"alfabethicalOrderButton.Image")));
			this->alfabethicalOrderButton->Location = System::Drawing::Point(398, 122);
			this->alfabethicalOrderButton->Name = L"alfabethicalOrderButton";
			this->alfabethicalOrderButton->Size = System::Drawing::Size(60, 60);
			this->alfabethicalOrderButton->TabIndex = 36;
			this->alfabethicalOrderButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->alfabethicalOrderButton->UseVisualStyleBackColor = false;
			this->alfabethicalOrderButton->Click += gcnew System::EventHandler(this, &settings::alfabethicalOrderButton_Click);
			// 
			// deleteAllButton
			// 
			this->deleteAllButton->BackColor = System::Drawing::Color::White;
			this->deleteAllButton->FlatAppearance->BorderSize = 0;
			this->deleteAllButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteAllButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->deleteAllButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"deleteAllButton.Image")));
			this->deleteAllButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->deleteAllButton->Location = System::Drawing::Point(5, 188);
			this->deleteAllButton->Name = L"deleteAllButton";
			this->deleteAllButton->Size = System::Drawing::Size(277, 60);
			this->deleteAllButton->TabIndex = 37;
			this->deleteAllButton->Text = L"Usuñ wszystkie albumy";
			this->deleteAllButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->deleteAllButton->UseVisualStyleBackColor = false;
			this->deleteAllButton->Click += gcnew System::EventHandler(this, &settings::deleteAllButton_Click_1);
			// 
			// searchByComboBox
			// 
			this->searchByComboBox->FormattingEnabled = true;
			this->searchByComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Tytu³ albumu", L"Wykonawca", L"Gatunek", 
				L"Rodzaj"});
			this->searchByComboBox->Location = System::Drawing::Point(260, 62);
			this->searchByComboBox->Name = L"searchByComboBox";
			this->searchByComboBox->Size = System::Drawing::Size(121, 21);
			this->searchByComboBox->TabIndex = 38;
			// 
			// searchByTextBox
			// 
			this->searchByTextBox->Location = System::Drawing::Point(260, 92);
			this->searchByTextBox->Name = L"searchByTextBox";
			this->searchByTextBox->Size = System::Drawing::Size(121, 20);
			this->searchByTextBox->TabIndex = 39;
			// 
			// alfabeticalOrderComboBox
			// 
			this->alfabeticalOrderComboBox->FormattingEnabled = true;
			this->alfabeticalOrderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Chronologicznie", L"Alfabetycznie"});
			this->alfabeticalOrderComboBox->Location = System::Drawing::Point(260, 128);
			this->alfabeticalOrderComboBox->Name = L"alfabeticalOrderComboBox";
			this->alfabeticalOrderComboBox->Size = System::Drawing::Size(121, 21);
			this->alfabeticalOrderComboBox->TabIndex = 42;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(0, 152);
			this->label3->MinimumSize = System::Drawing::Size(390, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(390, 30);
			this->label3->TabIndex = 43;
			// 
			// settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(465, 254);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->alfabeticalOrderComboBox);
			this->Controls->Add(this->searchByTextBox);
			this->Controls->Add(this->searchByComboBox);
			this->Controls->Add(this->deleteAllButton);
			this->Controls->Add(this->alfabethicalOrderButton);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->searchByButton);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->settingsLabel);
			this->MaximumSize = System::Drawing::Size(481, 292);
			this->MinimumSize = System::Drawing::Size(481, 292);
			this->Name = L"settings";
			this->Text = L"Baza albumów muzycznych - ustawienia";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }

	private: System::Void searchByButton_Click(System::Object^  sender, System::EventArgs^  e) {
			int k = 0;
			StreamReader^ din = File::OpenText("albums/albumsList.txt");
			String^ albums = "";
			String^ str;
			
			if(searchByComboBox->SelectedIndex == 0) {						
				while ((str = din->ReadLine()) != nullptr) {
					String^ filePath = "albums/" + str + ".txt";		
					StreamReader^ din2 = File::OpenText(filePath);
					String^ str2;
					while ((str2 = din2->ReadLine()) != nullptr) {
						if(k == 0) {
							if(str2->Contains(searchByTextBox->Text)) {
								albums += str + "\n";
							}
						}
						k++;
					}
					k = 0;
					din2->Close();
				}
				
			 }
			 else if(searchByComboBox->SelectedIndex == 1) {
				while ((str = din->ReadLine()) != nullptr) {
					String^ filePath = "albums/" + str + ".txt";		
					StreamReader^ din2 = File::OpenText(filePath);
					String^ str2;
					while ((str2 = din2->ReadLine()) != nullptr) {
						if(k == 1) {
							if(str2->Contains(searchByTextBox->Text)) {
								albums += str + "\n";
							}
						}
						k++;
					}
					k = 0;
					din2->Close();
				}
				
			 
			 }
			else if(searchByComboBox->SelectedIndex == 2) {
				while ((str = din->ReadLine()) != nullptr) {
					String^ filePath = "albums/" + str + ".txt";		
					StreamReader^ din2 = File::OpenText(filePath);
					String^ str2;
					while ((str2 = din2->ReadLine()) != nullptr) {
						if(k == 2) {
							if(str2->Contains(searchByTextBox->Text)) {
								albums += str + "\n";
							}
						}
						k++;
					}
					k = 0;
					din2->Close();
				}
				
			}
			else if(searchByComboBox->SelectedIndex == 3){
				while ((str = din->ReadLine()) != nullptr) {
					String^ filePath = "albums/" + str + ".txt";		
					StreamReader^ din2 = File::OpenText(filePath);
					String^ str2;
					while ((str2 = din2->ReadLine()) != nullptr) {
						if(k == 4) {
							if(str2->Contains(searchByTextBox->Text)) {
								albums += str + "\n";
							}
						}
						k++;
					}
					k = 0;
					din2->Close();
				}
			}
			
			if(albums == "") {
				MessageBox::Show("Nie znaleziono albumów spe³niaj¹cych dane kryteria.", "Nie znaleziono", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			else {
				MessageBox::Show("Nastêpuj¹ce albumy spe³niaj¹ dane kryteria: \n" + albums, "Wyniki wyszukiwania", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
			din->Close();
			
		 }

private: System::Void deleteAllButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
			StreamReader^ din = File::OpenText("albums/albumsList.txt");
			String^ str;
							
			while ((str = din->ReadLine()) != nullptr) {
				String^ filePath = "albums/" + str + ".txt";
				File::Delete(filePath);
				}		
						
			din->Close();
			
			StreamWriter^ albumsListFile = gcnew StreamWriter("albums/albumsList.txt");
			albumsListFile->Write("");;
			albumsListFile->Close();

			MessageBox::Show("Wszystkie albumy zosta³y usuniête.", "Usuniêto", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		 }

	private: System::Void alfabethicalOrderButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if(alfabeticalOrderComboBox->SelectedIndex == 1) {			 
			StreamReader^ din = File::OpenText("albums/albumsList.txt");
			String^ str;
			int k = 0;		
			while ((str = din->ReadLine()) != nullptr) {
				k++;
			}		
			din->Close();
			
			array<String^>^ albumsListArray = gcnew array<String^>(k);
			
			din = File::OpenText("albums/albumsList.txt");

			for(int i = 0; i < k; i++) {
				albumsListArray[i] = din->ReadLine();
			}
			din->Close();
			Array::Sort(albumsListArray);
			String^ sortedAlbums;
			
			for(int i = 0; i < k; i++) {
				sortedAlbums += albumsListArray[i] + "\n";
			}
			
			MessageBox::Show("Lista wszystkich albumów alfabetycznie: \n" + sortedAlbums, "Albumy alfabetycznie", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			String^ readFile= File::ReadAllText("albums/albumsList.txt");
			MessageBox::Show("Lista wszystkich albumów chronologicznie: \n" + readFile, "Albumy chronologicznie", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		 }
};
}
