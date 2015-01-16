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
	/// Summary for edit
	/// </summary>
	public ref class edit : public System::Windows::Forms::Form
	{
	public:
		edit(void)
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
		~edit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  albumNameLabel;
	private: System::Windows::Forms::TextBox^  albumNameTextBox;
	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  artistTextBox;


	private: System::Windows::Forms::DataGridView^  albumEditDGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tytu³;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Wykonawca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Gatunek;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rokwydania;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rodzaj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Przes³uchany;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Datadodania;
	private: System::Windows::Forms::Button^  saveButton;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(edit::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->albumNameLabel = (gcnew System::Windows::Forms::Label());
			this->albumNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->artistTextBox = (gcnew System::Windows::Forms::TextBox());
			this->albumEditDGV = (gcnew System::Windows::Forms::DataGridView());
			this->Tytu³ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Wykonawca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gatunek = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rokwydania = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rodzaj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Przes³uchany = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Datadodania = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->albumEditDGV))->BeginInit();
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
			this->titleLabel->MinimumSize = System::Drawing::Size(764, 50);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->titleLabel->Size = System::Drawing::Size(764, 50);
			this->titleLabel->TabIndex = 13;
			this->titleLabel->Text = L"      Edytowanie albumu...";
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
			this->albumNameLabel->MinimumSize = System::Drawing::Size(750, 30);
			this->albumNameLabel->Name = L"albumNameLabel";
			this->albumNameLabel->Size = System::Drawing::Size(750, 30);
			this->albumNameLabel->TabIndex = 14;
			this->albumNameLabel->Text = L"Podaj tytu³:";
			this->albumNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// albumNameTextBox
			// 
			this->albumNameTextBox->Location = System::Drawing::Point(142, 56);
			this->albumNameTextBox->Name = L"albumNameTextBox";
			this->albumNameTextBox->Size = System::Drawing::Size(542, 20);
			this->albumNameTextBox->TabIndex = 15;
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
			this->searchButton->Location = System::Drawing::Point(12, 175);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->searchButton->Size = System::Drawing::Size(200, 60);
			this->searchButton->TabIndex = 16;
			this->searchButton->Text = L"Wyszukaj";
			this->searchButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->searchButton->UseVisualStyleBackColor = false;
			this->searchButton->Click += gcnew System::EventHandler(this, &edit::searchButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::Color::White;
			this->cancelButton->FlatAppearance->BorderSize = 0;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->cancelButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cancelButton.Image")));
			this->cancelButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->cancelButton->Location = System::Drawing::Point(536, 176);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->cancelButton->Size = System::Drawing::Size(200, 60);
			this->cancelButton->TabIndex = 17;
			this->cancelButton->Text = L"Anuluj";
			this->cancelButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &edit::cancelButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(0, 79);
			this->label1->MinimumSize = System::Drawing::Size(750, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(750, 30);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Podaj wykonawcê:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// artistTextBox
			// 
			this->artistTextBox->Location = System::Drawing::Point(142, 86);
			this->artistTextBox->Name = L"artistTextBox";
			this->artistTextBox->Size = System::Drawing::Size(542, 20);
			this->artistTextBox->TabIndex = 19;
			// 
			// albumEditDGV
			// 
			this->albumEditDGV->AllowUserToDeleteRows = false;
			this->albumEditDGV->BackgroundColor = System::Drawing::Color::White;
			this->albumEditDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->albumEditDGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Tytu³, this->Wykonawca, 
				this->Gatunek, this->Rokwydania, this->Rodzaj, this->Przes³uchany, this->Datadodania});
			this->albumEditDGV->Location = System::Drawing::Point(3, 112);
			this->albumEditDGV->Name = L"albumEditDGV";
			this->albumEditDGV->Size = System::Drawing::Size(743, 52);
			this->albumEditDGV->TabIndex = 22;
			// 
			// Tytu³
			// 
			this->Tytu³->HeaderText = L"Tytu³";
			this->Tytu³->Name = L"Tytu³";
			// 
			// Wykonawca
			// 
			this->Wykonawca->HeaderText = L"Wykonawca";
			this->Wykonawca->Name = L"Wykonawca";
			// 
			// Gatunek
			// 
			this->Gatunek->HeaderText = L"Gatunek";
			this->Gatunek->Name = L"Gatunek";
			// 
			// Rokwydania
			// 
			this->Rokwydania->HeaderText = L"Rok wydania";
			this->Rokwydania->Name = L"Rokwydania";
			// 
			// Rodzaj
			// 
			this->Rodzaj->HeaderText = L"Rodzaj";
			this->Rodzaj->Name = L"Rodzaj";
			// 
			// Przes³uchany
			// 
			this->Przes³uchany->HeaderText = L"Przes³uchany";
			this->Przes³uchany->Name = L"Przes³uchany";
			// 
			// Datadodania
			// 
			this->Datadodania->HeaderText = L"Data dodania";
			this->Datadodania->Name = L"Datadodania";
			this->Datadodania->ReadOnly = true;
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::Color::White;
			this->saveButton->FlatAppearance->BorderSize = 0;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Calibri Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->saveButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveButton.Image")));
			this->saveButton->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->saveButton->Location = System::Drawing::Point(276, 175);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->saveButton->Size = System::Drawing::Size(200, 60);
			this->saveButton->TabIndex = 23;
			this->saveButton->Text = L"Zapisz zmiany";
			this->saveButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &edit::saveButton_Click_1);
			// 
			// edit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(748, 248);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->albumEditDGV);
			this->Controls->Add(this->artistTextBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->albumNameTextBox);
			this->Controls->Add(this->albumNameLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"edit";
			this->Text = L"edit";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->albumEditDGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
			
	private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
				
			String^ readFile= File::ReadAllText("albums/albumsList.txt");
				
			if((albumNameTextBox->Text == "") || (artistTextBox->Text == "")) {
				MessageBox::Show("Wype³nij wszystkie pola!", "Puste pola", MessageBoxButtons::OK, MessageBoxIcon::Warning);	
				albumNameTextBox->Focus();
			}
			
			else {
				if(!(readFile->Contains(albumNameTextBox->Text + "  - " + artistTextBox->Text)))  {
					 MessageBox::Show("Taki album nie istnieje w bazie.",
							"Album nie istnieje", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);	
					 albumNameTextBox->Focus();
				}
				
				else {
					String^ albumName = albumNameTextBox->Text;
					String^ artistName = artistTextBox->Text;
				
					StreamReader^ din = File::OpenText("albums/" + albumName + "-" + artistName + ".txt");
								
					String^ str;
					int i = 0;	
					
					while ((str = din->ReadLine()) != nullptr) {
						albumEditDGV->Rows[0]->Cells[i]->Value = str;
						i++;	
					}
					
					din->Close();
				}
			}		 			
		 }
	
	private: System::Void saveButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		String^ albumName = albumNameTextBox->Text;
		String^ artistName = artistTextBox->Text;
			
		String^ filePath = "albums/" + albumName + "-" + artistName + ".txt";
			
		Object^ newAlbumName = albumEditDGV->Rows[0]->Cells[0]->Value;
		Object^ newArtistName = albumEditDGV->Rows[0]->Cells[1]->Value;
			
		if((albumName != newAlbumName) || (artistName != newArtistName)) {
			File::Delete(filePath);
				 
			StreamReader^ din = File::OpenText("albums/albumsList.txt");
			String^ words = "";
			String^ str;
							
			while ((str = din->ReadLine()) != nullptr) {
				if(str != (albumName + "  - " + artistName)) {
					words += str + "\n";
				}		
			}	
				
			words += newAlbumName + "  - " + newArtistName + "\n";	
			din->Close();
				
			StreamWriter^ albumsListFile = gcnew StreamWriter("albums/albumsList.txt");
			albumsListFile->Write(words);
			albumsListFile->Close();

			StreamWriter^ albumFile = gcnew StreamWriter("albums/" + newAlbumName + "-" + newArtistName + ".txt");
					
			for(int i = 0; i < 6; i++) {
				albumFile->WriteLine(albumEditDGV->Rows[0]->Cells[i]->Value);		
				}
					
			albumFile->Close(); 
		}
			
		else {			
			StreamWriter^ albumFile = gcnew StreamWriter(filePath);
					
			for(int i = 0; i < 6; i++) {
				albumFile->WriteLine(albumEditDGV->Rows[0]->Cells[i]->Value);		
			}
					
			albumFile->Close(); 
		}
			
		this->Close();
	}
};
}
