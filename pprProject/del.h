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
	/// Summary for del
	/// </summary>
	public ref class del : public System::Windows::Forms::Form
	{
	public:
		del(void)
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
		~del()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;
	private: System::Windows::Forms::Label^  albumNameLabel;

	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::TextBox^  albumNameTextBox;
	private: System::Windows::Forms::Label^  artistLabel;
	private: System::Windows::Forms::TextBox^  artistTextBox;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(del::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->albumNameLabel = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->albumNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->artistLabel = (gcnew System::Windows::Forms::Label());
			this->artistTextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->titleLabel->TabIndex = 13;
			this->titleLabel->Text = L"      Usuwanie albumu...";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->albumNameLabel->TabIndex = 14;
			this->albumNameLabel->Text = L"Podaj tytuł:";
			this->albumNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->addButton->Location = System::Drawing::Point(12, 122);
			this->addButton->Name = L"addButton";
			this->addButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->addButton->Size = System::Drawing::Size(170, 60);
			this->addButton->TabIndex = 16;
			this->addButton->Text = L"Usuń";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &del::addButton_Click);
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
			this->cancelButton->Location = System::Drawing::Point(202, 122);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->cancelButton->Size = System::Drawing::Size(170, 60);
			this->cancelButton->TabIndex = 17;
			this->cancelButton->Text = L"Anuluj";
			this->cancelButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &del::cancelButton_Click);
			// 
			// albumNameTextBox
			// 
			this->albumNameTextBox->Location = System::Drawing::Point(132, 56);
			this->albumNameTextBox->Name = L"albumNameTextBox";
			this->albumNameTextBox->Size = System::Drawing::Size(240, 20);
			this->albumNameTextBox->TabIndex = 18;
			// 
			// artistLabel
			// 
			this->artistLabel->AutoSize = true;
			this->artistLabel->BackColor = System::Drawing::Color::White;
			this->artistLabel->Font = (gcnew System::Drawing::Font(L"Calibri Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->artistLabel->Location = System::Drawing::Point(0, 79);
			this->artistLabel->MinimumSize = System::Drawing::Size(390, 30);
			this->artistLabel->Name = L"artistLabel";
			this->artistLabel->Size = System::Drawing::Size(390, 30);
			this->artistLabel->TabIndex = 19;
			this->artistLabel->Text = L"Podaj wykonawcę:";
			this->artistLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// artistTextBox
			// 
			this->artistTextBox->Location = System::Drawing::Point(132, 85);
			this->artistTextBox->Name = L"artistTextBox";
			this->artistTextBox->Size = System::Drawing::Size(240, 20);
			this->artistTextBox->TabIndex = 20;
			// 
			// del
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(384, 196);
			this->Controls->Add(this->artistTextBox);
			this->Controls->Add(this->artistLabel);
			this->Controls->Add(this->albumNameTextBox);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->albumNameLabel);
			this->Controls->Add(this->titleLabel);
			this->Name = L"del";
			this->Text = L"del";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
				this->Close();
			 }

	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
				
		String^ albumName = albumNameTextBox->Text;
		String^ artistName = artistTextBox->Text;				
			 			 
		if((albumName == "") || (artistName == "")) {
			MessageBox::Show("Wypełnij wszystkie pola!", "Puste pola", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		else {
			String^ readFile= File::ReadAllText("albums/albumsList.txt");

			if(!(readFile->Contains(albumName + "  - " + artistName))) {
				MessageBox::Show("Taki album nie istnieje w bazie.", "Album nie istnieje", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);		
			}
					
			else {					
				MessageBox::Show("Czy na pewno chcesz usunąć album " + albumName + "?", "Usuwanie albumu", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
														
				if(true /*warunek yes z messagebox*/) {						
					String^ filePath = "albums/" + albumName + "-" + artistName + ".txt";
					File::Delete(filePath);
							
					StreamReader^ din = File::OpenText("albums/albumsList.txt");
					String^ words = "";
					String^ str;
							
					while ((str = din->ReadLine()) != nullptr) {
						if(str != (albumName + "  - " + artistName)) {
							words += str + "\n";
						}	
					}
					
					din->Close();
							
					StreamWriter^ albumsListFile = gcnew StreamWriter("albums/albumsList.txt");
					albumsListFile->Write(words);
					albumsListFile->Close();

					MessageBox::Show("Album '" + albumName + "' został usunięty.", "Usunięto album", MessageBoxButtons::OK, MessageBoxIcon::Information);
					
					this->Close();
				}
				
				else {
					this->Close();
				}				
			}			 
		}
	}
					 
};
}
