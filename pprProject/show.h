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
	private: System::Windows::Forms::DataGridView^  albumInfoDGV;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Tytu³;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Wykonawca;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Gatunek;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rokwydania;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Rodzaj;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Przes³uchany;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Datadodania;
	private: System::Windows::Forms::Button^  searchButton;
	private: System::Windows::Forms::Button^  Exit;





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
			this->albumInfoDGV = (gcnew System::Windows::Forms::DataGridView());
			this->Tytu³ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Wykonawca = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gatunek = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rokwydania = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Rodzaj = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Przes³uchany = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Datadodania = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->albumInfoDGV))->BeginInit();
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
			this->titleLabel->MinimumSize = System::Drawing::Size(768, 50);
			this->titleLabel->Name = L"titleLabel";
			this->titleLabel->Padding = System::Windows::Forms::Padding(8, 0, 0, 0);
			this->titleLabel->Size = System::Drawing::Size(768, 50);
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
			this->albumNameLabel->MinimumSize = System::Drawing::Size(768, 30);
			this->albumNameLabel->Name = L"albumNameLabel";
			this->albumNameLabel->Size = System::Drawing::Size(768, 30);
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
			this->albumInfoTitle->MinimumSize = System::Drawing::Size(740, 30);
			this->albumInfoTitle->Name = L"albumInfoTitle";
			this->albumInfoTitle->Size = System::Drawing::Size(740, 30);
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
			this->artistLabel->MinimumSize = System::Drawing::Size(768, 30);
			this->artistLabel->Name = L"artistLabel";
			this->artistLabel->Size = System::Drawing::Size(768, 30);
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
			// albumInfoDGV
			// 
			this->albumInfoDGV->AllowUserToDeleteRows = false;
			this->albumInfoDGV->BackgroundColor = System::Drawing::Color::White;
			this->albumInfoDGV->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->albumInfoDGV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->Tytu³, this->Wykonawca, 
				this->Gatunek, this->Rokwydania, this->Rodzaj, this->Przes³uchany, this->Datadodania});
			this->albumInfoDGV->Enabled = false;
			this->albumInfoDGV->Location = System::Drawing::Point(5, 148);
			this->albumInfoDGV->Name = L"albumInfoDGV";
			this->albumInfoDGV->ReadOnly = true;
			this->albumInfoDGV->Size = System::Drawing::Size(743, 57);
			this->albumInfoDGV->TabIndex = 24;
			// 
			// Tytu³
			// 
			this->Tytu³->HeaderText = L"Tytu³";
			this->Tytu³->Name = L"Tytu³";
			this->Tytu³->ReadOnly = true;
			// 
			// Wykonawca
			// 
			this->Wykonawca->HeaderText = L"Wykonawca";
			this->Wykonawca->Name = L"Wykonawca";
			this->Wykonawca->ReadOnly = true;
			// 
			// Gatunek
			// 
			this->Gatunek->HeaderText = L"Gatunek";
			this->Gatunek->Name = L"Gatunek";
			this->Gatunek->ReadOnly = true;
			// 
			// Rokwydania
			// 
			this->Rokwydania->HeaderText = L"Rok wydania";
			this->Rokwydania->Name = L"Rokwydania";
			this->Rokwydania->ReadOnly = true;
			// 
			// Rodzaj
			// 
			this->Rodzaj->HeaderText = L"Rodzaj";
			this->Rodzaj->Name = L"Rodzaj";
			this->Rodzaj->ReadOnly = true;
			// 
			// Przes³uchany
			// 
			this->Przes³uchany->HeaderText = L"Przes³uchany";
			this->Przes³uchany->Name = L"Przes³uchany";
			this->Przes³uchany->ReadOnly = true;
			// 
			// Datadodania
			// 
			this->Datadodania->HeaderText = L"Data dodania";
			this->Datadodania->Name = L"Datadodania";
			this->Datadodania->ReadOnly = true;
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
			this->searchButton->Location = System::Drawing::Point(377, 49);
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
			this->Exit->Location = System::Drawing::Point(570, 49);
			this->Exit->Name = L"Exit";
			this->Exit->Padding = System::Windows::Forms::Padding(0, 0, 8, 0);
			this->Exit->Size = System::Drawing::Size(170, 60);
			this->Exit->TabIndex = 26;
			this->Exit->Text = L"WyjdŸ";
			this->Exit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exit->UseVisualStyleBackColor = false;
			this->Exit->Click += gcnew System::EventHandler(this, &show::Exit_Click_1);
			// 
			// show
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(752, 211);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->searchButton);
			this->Controls->Add(this->albumInfoDGV);
			this->Controls->Add(this->artistTextBox);
			this->Controls->Add(this->artistLabel);
			this->Controls->Add(this->albumInfoTitle);
			this->Controls->Add(this->albumNameTextBox);
			this->Controls->Add(this->albumNameLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"show";
			this->Text = L"show";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->albumInfoDGV))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void searchButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		String^ readFile= File::ReadAllText("albums/albumsList.txt");
				
		if((albumNameTextBox->Text == "") || (artistTextBox->Text == "")) {
			MessageBox::Show("Wype³nij wszystkie pola!", "Puste pola", MessageBoxButtons::OK, MessageBoxIcon::Warning);			
		}
			
		else {
			if(!(readFile->Contains(albumNameTextBox->Text + "  - " + artistTextBox->Text)))  {
				MessageBox::Show("Taki album nie istnieje w bazie.",
					"Album nie istnieje", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);					
		}
			
			else {
				String^ albumName = albumNameTextBox->Text;
				String^ artistName = artistTextBox->Text;
				
				StreamReader^ din = File::OpenText("albums/" + albumName + "-" + artistName + ".txt");
								
				String^ str;
				int i = 0;	
				
				while ((str = din->ReadLine()) != nullptr) {
					albumInfoDGV->Rows[0]->Cells[i]->Value = str;
					i++;						
				}
				
				din->Close();
			}

		}
	}
	
	private: System::Void Exit_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 this->Close();
	}

};
}
