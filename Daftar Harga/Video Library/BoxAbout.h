#pragma once

namespace DaftarHarga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BoxAbout
	/// </summary>
	public ref class BoxAbout : public System::Windows::Forms::Form
	{
	public:
		BoxAbout(void)
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
		~BoxAbout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ aboutLabel1;
	protected:
	private: System::Windows::Forms::Label^ aboutLabel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ aboutLabel3;
	private: System::Windows::Forms::Button^ aboutBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BoxAbout::typeid));
			this->aboutLabel1 = (gcnew System::Windows::Forms::Label());
			this->aboutLabel2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->aboutLabel3 = (gcnew System::Windows::Forms::Label());
			this->aboutBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// aboutLabel1
			// 
			this->aboutLabel1->AutoSize = true;
			this->aboutLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutLabel1->Location = System::Drawing::Point(40, 27);
			this->aboutLabel1->Name = L"aboutLabel1";
			this->aboutLabel1->Size = System::Drawing::Size(145, 24);
			this->aboutLabel1->TabIndex = 0;
			this->aboutLabel1->Text = L"List Daftar Harga";
			// 
			// aboutLabel2
			// 
			this->aboutLabel2->AutoSize = true;
			this->aboutLabel2->Location = System::Drawing::Point(138, 62);
			this->aboutLabel2->Name = L"aboutLabel2";
			this->aboutLabel2->Size = System::Drawing::Size(47, 13);
			this->aboutLabel2->TabIndex = 1;
			this->aboutLabel2->Text = L"Ver 1.00";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->panel1->Location = System::Drawing::Point(191, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2, 100);
			this->panel1->TabIndex = 2;
			// 
			// aboutLabel3
			// 
			this->aboutLabel3->AutoSize = true;
			this->aboutLabel3->Location = System::Drawing::Point(211, 62);
			this->aboutLabel3->Name = L"aboutLabel3";
			this->aboutLabel3->Size = System::Drawing::Size(137, 13);
			this->aboutLabel3->TabIndex = 3;
			this->aboutLabel3->Text = L"Rendy Hartono Putra, 2022";
			// 
			// aboutBtn
			// 
			this->aboutBtn->BackColor = System::Drawing::Color::White;
			this->aboutBtn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->aboutBtn->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutBtn->Location = System::Drawing::Point(288, 121);
			this->aboutBtn->Name = L"aboutBtn";
			this->aboutBtn->Size = System::Drawing::Size(75, 23);
			this->aboutBtn->TabIndex = 4;
			this->aboutBtn->Text = L"Ok";
			this->aboutBtn->UseVisualStyleBackColor = false;
			this->aboutBtn->Click += gcnew System::EventHandler(this, &BoxAbout::aboutBtn_Click);
			// 
			// BoxAbout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(415, 156);
			this->ControlBox = false;
			this->Controls->Add(this->aboutBtn);
			this->Controls->Add(this->aboutLabel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->aboutLabel2);
			this->Controls->Add(this->aboutLabel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BoxAbout";
			this->ShowInTaskbar = false;
			this->Text = L"About";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aboutBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
