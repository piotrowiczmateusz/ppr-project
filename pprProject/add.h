#pragma once

namespace pprProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	
	/// Summary for add
	/// </summary>
	public ref class add : public System::Windows::Forms::Form
	{
	public:
		add(void)
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
		~add()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  albumNameLabel;
	private: System::Windows::Forms::Label^  artistLabel;


	private: System::Windows::Forms::Label^  yearLabel;
	private: System::Windows::Forms::Label^  genreLabel;
	private: System::Windows::Forms::Label^  typeLabel;
	private: System::Windows::Forms::TextBox^  yearTextBox;

	private: System::Windows::Forms::TextBox^  albumNameTextBox;
	private: System::Windows::Forms::TextBox^  artistTextBox;

	private: System::Windows::Forms::TextBox^  genreTextBox;



	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::Button^  cancelButton;

	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::TextBox^  typeTextBox;
	private: System::Windows::Forms::Label^  ListenedLabel;
	private: System::Windows::Forms::CheckBox^  listenedCheckBox;


	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(add::typeid));
			this->albumNameLabel = (gcnew System::Windows::Forms::Label());
			this->artistLabel = (gcnew System::Windows::Forms::Label());
			this->yearLabel = (gcnew System::Windows::Forms::Label());
			this->genreLabel = (gcnew System::Windows::Forms::Label());
			this->typeLabel = (gcnew System::Windows::Forms::Label());
			this->yearTextBox = (gcnew System::Windows::Forms::TextBox());
			this->albumNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->artistTextBox = (gcnew System::Windows::Forms::TextBox());
			this->genreTextBox = (gcnew System::Windows::Forms::TextBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->typeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->ListenedLabel = (gcnew System::Windows::Forms::Label());
			this->listenedCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// albumNameLabel
			// 
			this->albumNameLabel->AutoSize = true;
			this->albumNameLabel->BackColor = System::Drawing::Color::White;
			this->albumNameLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->albumNameLabel->Location = System::Drawing::Point(0, 50);
			this->albumNameLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->albumNameLabel->Name = L"albumNameLabel";
			this->albumNameLabel->Size = System::Drawing::Size(390, 30);
			this->albumNameLabel->TabIndex = 0;
			this->albumNameLabel->Text = L"Tytuł albumu:";
			this->albumNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// artistLabel
			// 
			this->artistLabel->AutoSize = true;
			this->artistLabel->BackColor = System::Drawing::Color::White;
			this->artistLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->artistLabel->Location = System::Drawing::Point(0, 80);
			this->artistLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->artistLabel->Name = L"artistLabel";
			this->artistLabel->Size = System::Drawing::Size(390, 30);
			this->artistLabel->TabIndex = 2;
			this->artistLabel->Text = L"Artysta";
			this->artistLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// yearLabel
			// 
			this->yearLabel->AutoSize = true;
			this->yearLabel->BackColor = System::Drawing::Color::White;
			this->yearLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->yearLabel->Location = System::Drawing::Point(0, 139);
			this->yearLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->yearLabel->Name = L"yearLabel";
			this->yearLabel->Size = System::Drawing::Size(390, 30);
			this->yearLabel->TabIndex = 3;
			this->yearLabel->Text = L"Rok wydania:";
			this->yearLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// genreLabel
			// 
			this->genreLabel->AutoSize = true;
			this->genreLabel->BackColor = System::Drawing::Color::White;
			this->genreLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->genreLabel->Location = System::Drawing::Point(0, 110);
			this->genreLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->genreLabel->Name = L"genreLabel";
			this->genreLabel->Size = System::Drawing::Size(390, 30);
			this->genreLabel->TabIndex = 4;
			this->genreLabel->Text = L"Gatunek:";
			this->genreLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// typeLabel
			// 
			this->typeLabel->AutoSize = true;
			this->typeLabel->BackColor = System::Drawing::Color::White;
			this->typeLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->typeLabel->Location = System::Drawing::Point(0, 169);
			this->typeLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->typeLabel->Name = L"typeLabel";
			this->typeLabel->Size = System::Drawing::Size(390, 30);
			this->typeLabel->TabIndex = 5;
			this->typeLabel->Text = L"Rodzaj albumu:";
			this->typeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// yearTextBox
			// 
			this->yearTextBox->Location = System::Drawing::Point(119, 145);
			this->yearTextBox->Name = L"yearTextBox";
			this->yearTextBox->Size = System::Drawing::Size(240, 20);
			this->yearTextBox->TabIndex = 6;
			// 
			// albumNameTextBox
			// 
			this->albumNameTextBox->Location = System::Drawing::Point(119, 56);
			this->albumNameTextBox->Name = L"albumNameTextBox";
			this->albumNameTextBox->Size = System::Drawing::Size(240, 20);
			this->albumNameTextBox->TabIndex = 7;
			// 
			// artistTextBox
			// 
			this->artistTextBox->Location = System::Drawing::Point(119, 86);
			this->artistTextBox->Name = L"artistTextBox";
			this->artistTextBox->Size = System::Drawing::Size(240, 20);
			this->artistTextBox->TabIndex = 8;
			// 
			// genreTextBox
			// 
			this->genreTextBox->Location = System::Drawing::Point(119, 116);
			this->genreTextBox->Name = L"genreTextBox";
			this->genreTextBox->Size = System::Drawing::Size(240, 20);
			this->genreTextBox->TabIndex = 9;
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
			this->addButton->Location = System::Drawing::Point(12, 238);
			this->addButton->Name = L"addButton";
			this->addButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->addButton->Size = System::Drawing::Size(170, 60);
			this->addButton->TabIndex = 10;
			this->addButton->Text = L"Dodaj";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &add::addButton_Click);
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
			this->cancelButton->Location = System::Drawing::Point(202, 238);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->cancelButton->Size = System::Drawing::Size(170, 60);
			this->cancelButton->TabIndex = 11;
			this->cancelButton->Text = L"Anuluj";
			this->cancelButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &add::button1_Click);
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
			this->titleLabel->TabIndex = 12;
			this->titleLabel->Text = L"      Dodawanie albumu...";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// typeTextBox
			// 
			this->typeTextBox->Location = System::Drawing::Point(119, 175);
			this->typeTextBox->Name = L"typeTextBox";
			this->typeTextBox->Size = System::Drawing::Size(240, 20);
			this->typeTextBox->TabIndex = 13;
			// 
			// ListenedLabel
			// 
			this->ListenedLabel->AutoSize = true;
			this->ListenedLabel->BackColor = System::Drawing::Color::White;
			this->ListenedLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->ListenedLabel->Location = System::Drawing::Point(0, 198);
			this->ListenedLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->ListenedLabel->Name = L"ListenedLabel";
			this->ListenedLabel->Size = System::Drawing::Size(390, 30);
			this->ListenedLabel->TabIndex = 14;
			this->ListenedLabel->Text = L"Przesłuchany:";
			this->ListenedLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// listenedCheckBox
			// 
			this->listenedCheckBox->AutoSize = true;
			this->listenedCheckBox->Location = System::Drawing::Point(119, 203);
			this->listenedCheckBox->Name = L"listenedCheckBox";
			this->listenedCheckBox->Size = System::Drawing::Size(15, 14);
			this->listenedCheckBox->TabIndex = 15;
			this->listenedCheckBox->UseVisualStyleBackColor = true;
			// 
			// add
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(384, 312);
			this->Controls->Add(this->listenedCheckBox);
			this->Controls->Add(this->ListenedLabel);
			this->Controls->Add(this->typeTextBox);
			this->Controls->Add(this->titleLabel);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->genreTextBox);
			this->Controls->Add(this->artistTextBox);
			this->Controls->Add(this->albumNameTextBox);
			this->Controls->Add(this->yearTextBox);
			this->Controls->Add(this->typeLabel);
			this->Controls->Add(this->genreLabel);
			this->Controls->Add(this->yearLabel);
			this->Controls->Add(this->artistLabel);
			this->Controls->Add(this->albumNameLabel);
			this->MinimumSize = System::Drawing::Size(400, 200);
			this->Name = L"add";
			this->Text = L"add";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {		
			this->Close();
			 }
	
	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		if((albumNameTextBox->Text == "") || (artistTextBox->Text == "") || (genreTextBox->Text == "") || (yearTextBox->Text == "") || (typeTextBox->Text == "")) {
			MessageBox::Show("Wypełnij wszystkie pola!", "Puste pola", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
			 
		else {		
			String^ albumName = albumNameTextBox->Text;
			String^ artistName = artistTextBox->Text;
			String^ genre = genreTextBox->Text;
			String^ year = yearTextBox->Text;
			String^ type = typeTextBox->Text;			
			String^ readFile= File::ReadAllText("albums/albumsList.txt");
			String^ listened = "";
			if(listenedCheckBox->Checked == true) {
				listened = "Tak";
			}
			else {
				listened = "Nie";
			}
			DateTime^ added = DateTime::Now;

			if(readFile->Contains(albumName + " - " + artistName)) {			
				MessageBox::Show("Taki album już istnieje w bazie.", "Album już istnieje", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
					
			else {
				String^ filePath = "albums/" + albumName + "-" + artistName + ".txt";
						
				StreamWriter^ albumFile = gcnew StreamWriter(filePath);
				albumFile->WriteLine(albumName);
				albumFile->WriteLine(artistName);
				albumFile->WriteLine(genre);
				albumFile->WriteLine(year);
				albumFile->WriteLine(type);						
				albumFile->WriteLine(listened);	
				albumFile->WriteLine(added);
				albumFile->Close(); 
						
				StreamWriter^ albumsListFile = File::AppendText("albums/albumsList.txt");
				albumsListFile->WriteLine(albumName + "  - " + artistName);
				albumsListFile->Close();
						
				String^ newAlbum = 
					"Tytuł albumu: " + albumName + "\n" +
					"Wykonawca: " + artistName + "\n" +
					"Gatunek: " + genre + "\n" +
					"Rok wydania: " + year + "\n" +
					"Rodzaj albumu: " + type + "\n" + 
					"Przesłuchany: " + listened + "\n" + 
					"Dodany: " + added;			
						
				MessageBox::Show(newAlbum, "Album został dodany do bazy!", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				this->Close();
			}						
		 }
	}
};
}
