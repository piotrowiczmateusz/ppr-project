#pragma once
#include "edit.h"

namespace pprProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for editAlbum
	/// </summary>
	public ref class editAlbum : public System::Windows::Forms::Form
	{
	public:
		editAlbum(void)
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
		~editAlbum()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  titleLabel;





	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::RichTextBox^  albumEditRichTextBox;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(editAlbum::typeid));
			this->titleLabel = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->albumEditRichTextBox = (gcnew System::Windows::Forms::RichTextBox());
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
			this->titleLabel->Text = L"      Edytowanie albumu...";
			this->titleLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->addButton->Location = System::Drawing::Point(12, 210);
			this->addButton->Name = L"addButton";
			this->addButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->addButton->Size = System::Drawing::Size(170, 60);
			this->addButton->TabIndex = 20;
			this->addButton->Text = L"Zapisz";
			this->addButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addButton->UseVisualStyleBackColor = false;
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
			this->cancelButton->Location = System::Drawing::Point(202, 210);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->cancelButton->Size = System::Drawing::Size(170, 60);
			this->cancelButton->TabIndex = 21;
			this->cancelButton->Text = L"Anuluj";
			this->cancelButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &editAlbum::cancelButton_Click);
			// 
			// albumEditRichTextBox
			// 
			this->albumEditRichTextBox->Location = System::Drawing::Point(12, 63);
			this->albumEditRichTextBox->Name = L"albumEditRichTextBox";
			this->albumEditRichTextBox->Size = System::Drawing::Size(360, 141);
			this->albumEditRichTextBox->TabIndex = 22;
			this->albumEditRichTextBox->Text = L"";
			// 
			// editAlbum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(384, 282);
			this->Controls->Add(this->albumEditRichTextBox);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->titleLabel);
			this->Name = L"editAlbum";
			this->Text = L"editAlbum";
			this->Load += gcnew System::EventHandler(this, &editAlbum::editAlbum_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				

private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void editAlbum_Load(System::Object^  sender, System::EventArgs^  e) {
			 albumEditRichTextBox->Text = File::ReadAllText("albums/a-1.txt" );
		 }
};
}
