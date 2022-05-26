#pragma once
#include "BoxAbout.h"

namespace DaftarHarga {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Globalization;
	using namespace System::IO;
	using namespace std;
	

	//copas
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Runtime::Serialization::Formatters::Binary;
	//copas


	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		ListViewItem^ prpCurrentlySelected;
		String^ LastFileDirectory;
		String^ file;


	private: System::Windows::Forms::ToolStripMenuItem^ listStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ascendingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ descendingToolStripMenuItem;



	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnInput;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ListView^ listBarang;
	private: System::Windows::Forms::Label^ labelBarang;

	private: System::Windows::Forms::ColumnHeader^ KolomBarang;
	private: System::Windows::Forms::ColumnHeader^ KolomHarga;


	private: System::Windows::Forms::Label^ labelHarga;
	private: System::Windows::Forms::TextBox^ txtBoxHarga;

	private: System::Windows::Forms::TextBox^ txtBoxBarang;

	private: System::Windows::Forms::ColumnHeader^ KolomNo;
	private: System::Windows::Forms::ColumnHeader^ KolomPcs;
	private: System::Windows::Forms::TextBox^ txtBoxPcs;
	private: System::Windows::Forms::Label^ labelPcs;
	private: System::Windows::Forms::TextBox^ txtBoxNo;
	private: System::Windows::Forms::Label^ labelNo;
	private: System::Windows::Forms::ToolStripMenuItem^ refreshStripMenuItem;
	private: System::Windows::Forms::Button^ btnClear;















		   String^ Filename;
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;













	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::TabControl^ tabControl1;





	private: System::Windows::Forms::TabPage^ tabPage2;












	private: System::Windows::Forms::RichTextBox^ richTextBox1;




	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;

	private: System::Windows::Forms::ToolStripMenuItem^ renameToolStripMenuItem1;


	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem1;








	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;




	private: System::ComponentModel::IContainer^ components;


		   //copas

			//end copas

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

	


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {
				L"01",
					L"Mie Goreng", L"Rp 3500", L"1"
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {
				L"02",
					L"Sabun", L"Rp 4000", L"1"
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {
				L"03",
					L"Telur", L"Rp 6000", L"1/4 kg"
			}, -1));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBarang = (gcnew System::Windows::Forms::ListView());
			this->KolomNo = (gcnew System::Windows::Forms::ColumnHeader());
			this->KolomBarang = (gcnew System::Windows::Forms::ColumnHeader());
			this->KolomHarga = (gcnew System::Windows::Forms::ColumnHeader());
			this->KolomPcs = (gcnew System::Windows::Forms::ColumnHeader());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->refreshStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->listStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ascendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->descendingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->renameToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txtBoxPcs = (gcnew System::Windows::Forms::TextBox());
			this->labelPcs = (gcnew System::Windows::Forms::Label());
			this->txtBoxNo = (gcnew System::Windows::Forms::TextBox());
			this->labelNo = (gcnew System::Windows::Forms::Label());
			this->txtBoxHarga = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxBarang = (gcnew System::Windows::Forms::TextBox());
			this->labelHarga = (gcnew System::Windows::Forms::Label());
			this->labelBarang = (gcnew System::Windows::Forms::Label());
			this->btnInput = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->panel3->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(21, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Program Daftar Harga";
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 23);
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::exitToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Menu;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(944, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(26, 75);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(906, 414);
			this->tabControl1->TabIndex = 5;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->listBarang);
			this->tabPage1->Controls->Add(this->tableLayoutPanel3);
			this->tabPage1->Location = System::Drawing::Point(4, 23);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(898, 387);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"List Harga";
			// 
			// listBarang
			// 
			this->listBarang->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBarang->BackColor = System::Drawing::SystemColors::Window;
			this->listBarang->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->KolomNo, this->KolomBarang,
					this->KolomHarga, this->KolomPcs
			});
			this->listBarang->ContextMenuStrip = this->contextMenuStrip2;
			this->listBarang->GridLines = true;
			this->listBarang->HideSelection = false;
			this->listBarang->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(3) {
				listViewItem1, listViewItem2,
					listViewItem3
			});
			this->listBarang->LabelEdit = true;
			this->listBarang->Location = System::Drawing::Point(6, 22);
			this->listBarang->Name = L"listBarang";
			this->listBarang->Size = System::Drawing::Size(621, 315);
			this->listBarang->TabIndex = 7;
			this->listBarang->UseCompatibleStateImageBehavior = false;
			this->listBarang->View = System::Windows::Forms::View::Details;
			this->listBarang->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::listBarang_MouseDown);
			// 
			// KolomNo
			// 
			this->KolomNo->Text = L"No";
			// 
			// KolomBarang
			// 
			this->KolomBarang->Text = L"Barang";
			this->KolomBarang->Width = 179;
			// 
			// KolomHarga
			// 
			this->KolomHarga->Text = L"Harga";
			this->KolomHarga->Width = 155;
			// 
			// KolomPcs
			// 
			this->KolomPcs->Text = L"Pcs";
			this->KolomPcs->Width = 108;
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->refreshStripMenuItem,
					this->listStripMenuItem, this->toolStripSeparator1, this->renameToolStripMenuItem1, this->deleteToolStripMenuItem1
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(118, 98);
			// 
			// refreshStripMenuItem
			// 
			this->refreshStripMenuItem->Name = L"refreshStripMenuItem";
			this->refreshStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->refreshStripMenuItem->Text = L"Refresh";
			this->refreshStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::refreshStripMenuItem_Click);
			// 
			// listStripMenuItem
			// 
			this->listStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ascendingToolStripMenuItem,
					this->descendingToolStripMenuItem
			});
			this->listStripMenuItem->Name = L"listStripMenuItem";
			this->listStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->listStripMenuItem->Text = L"Sort";
			// 
			// ascendingToolStripMenuItem
			// 
			this->ascendingToolStripMenuItem->Name = L"ascendingToolStripMenuItem";
			this->ascendingToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->ascendingToolStripMenuItem->Text = L"Ascending";
			this->ascendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::ascendingToolStripMenuItem_Click);
			// 
			// descendingToolStripMenuItem
			// 
			this->descendingToolStripMenuItem->Name = L"descendingToolStripMenuItem";
			this->descendingToolStripMenuItem->Size = System::Drawing::Size(136, 22);
			this->descendingToolStripMenuItem->Text = L"Descending";
			this->descendingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::descendingToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(114, 6);
			// 
			// renameToolStripMenuItem1
			// 
			this->renameToolStripMenuItem1->Name = L"renameToolStripMenuItem1";
			this->renameToolStripMenuItem1->Size = System::Drawing::Size(117, 22);
			this->renameToolStripMenuItem1->Text = L"Rename";
			this->renameToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::renameToolStripMenuItem1_Click);
			// 
			// deleteToolStripMenuItem1
			// 
			this->deleteToolStripMenuItem1->Name = L"deleteToolStripMenuItem1";
			this->deleteToolStripMenuItem1->Size = System::Drawing::Size(117, 22);
			this->deleteToolStripMenuItem1->Text = L"Delete";
			this->deleteToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm1::deleteToolStripMenuItem1_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				27.74869F)));
			this->tableLayoutPanel3->Controls->Add(this->panel3, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(650, -7);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 57.14286F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(252, 388);
			this->tableLayoutPanel3->TabIndex = 6;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->btnClear);
			this->panel3->Controls->Add(this->txtBoxPcs);
			this->panel3->Controls->Add(this->labelPcs);
			this->panel3->Controls->Add(this->txtBoxNo);
			this->panel3->Controls->Add(this->labelNo);
			this->panel3->Controls->Add(this->txtBoxHarga);
			this->panel3->Controls->Add(this->txtBoxBarang);
			this->panel3->Controls->Add(this->labelHarga);
			this->panel3->Controls->Add(this->labelBarang);
			this->panel3->Controls->Add(this->btnInput);
			this->panel3->Location = System::Drawing::Point(3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(246, 382);
			this->panel3->TabIndex = 2;
			// 
			// btnClear
			// 
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(132, 317);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(98, 23);
			this->btnClear->TabIndex = 9;
			this->btnClear->Text = L"Clear Data";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm1::btnClear_Click);
			// 
			// txtBoxPcs
			// 
			this->txtBoxPcs->Location = System::Drawing::Point(65, 125);
			this->txtBoxPcs->Name = L"txtBoxPcs";
			this->txtBoxPcs->Size = System::Drawing::Size(46, 20);
			this->txtBoxPcs->TabIndex = 8;
			// 
			// labelPcs
			// 
			this->labelPcs->AutoSize = true;
			this->labelPcs->Location = System::Drawing::Point(20, 128);
			this->labelPcs->Name = L"labelPcs";
			this->labelPcs->Size = System::Drawing::Size(39, 13);
			this->labelPcs->TabIndex = 7;
			this->labelPcs->Text = L"Pcs.";
			// 
			// txtBoxNo
			// 
			this->txtBoxNo->Location = System::Drawing::Point(166, 125);
			this->txtBoxNo->MaxLength = 4;
			this->txtBoxNo->Name = L"txtBoxNo";
			this->txtBoxNo->Size = System::Drawing::Size(46, 20);
			this->txtBoxNo->TabIndex = 6;
			this->txtBoxNo->Text = L"04";
			// 
			// labelNo
			// 
			this->labelNo->AutoSize = true;
			this->labelNo->Location = System::Drawing::Point(129, 128);
			this->labelNo->Name = L"labelNo";
			this->labelNo->Size = System::Drawing::Size(31, 13);
			this->labelNo->TabIndex = 5;
			this->labelNo->Text = L"No.";
			// 
			// txtBoxHarga
			// 
			this->txtBoxHarga->Location = System::Drawing::Point(19, 92);
			this->txtBoxHarga->Name = L"txtBoxHarga";
			this->txtBoxHarga->Size = System::Drawing::Size(193, 20);
			this->txtBoxHarga->TabIndex = 4;
			// 
			// txtBoxBarang
			// 
			this->txtBoxBarang->Location = System::Drawing::Point(19, 41);
			this->txtBoxBarang->Name = L"txtBoxBarang";
			this->txtBoxBarang->Size = System::Drawing::Size(193, 20);
			this->txtBoxBarang->TabIndex = 3;
			// 
			// labelHarga
			// 
			this->labelHarga->AutoSize = true;
			this->labelHarga->Location = System::Drawing::Point(16, 76);
			this->labelHarga->Name = L"labelHarga";
			this->labelHarga->Size = System::Drawing::Size(103, 13);
			this->labelHarga->TabIndex = 2;
			this->labelHarga->Text = L"Harga Barang";
			// 
			// labelBarang
			// 
			this->labelBarang->AutoSize = true;
			this->labelBarang->Location = System::Drawing::Point(16, 25);
			this->labelBarang->Name = L"labelBarang";
			this->labelBarang->Size = System::Drawing::Size(95, 13);
			this->labelBarang->TabIndex = 1;
			this->labelBarang->Text = L"Nama Barang";
			// 
			// btnInput
			// 
			this->btnInput->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnInput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnInput->Location = System::Drawing::Point(60, 223);
			this->btnInput->Name = L"btnInput";
			this->btnInput->Size = System::Drawing::Size(105, 35);
			this->btnInput->TabIndex = 0;
			this->btnInput->Text = L"Tambahkan";
			this->btnInput->UseVisualStyleBackColor = true;
			this->btnInput->Click += gcnew System::EventHandler(this, &MyForm1::btnInput_Click_1);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->linkLabel1);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 23);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(898, 387);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Info";
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->linkLabel1->DisabledLinkColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(106, 251);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(196, 20);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"https://github.com/rendyhp";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm1::linkLabel1_LinkClicked);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->richTextBox1->Location = System::Drawing::Point(6, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(886, 378);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(470, 395);
			this->panel2->TabIndex = 2;
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(121, 97);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"File";
			this->columnHeader1->Width = 139;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Width = 122;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(944, 501);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1920, 1080);
			this->MinimumSize = System::Drawing::Size(960, 540);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Daftar Harga";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->contextMenuStrip2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		prpCurrentlySelected = gcnew ListViewItem;
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BoxAbout^ box = gcnew BoxAbout();
		box->ShowDialog();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender,
		System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start(L"https://github.com/rendyhp");
	}
	
	private: System::Void refreshStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBarang->Sorting = SortOrder::Descending;
		listBarang->Sorting = SortOrder::Ascending;
	}

	private: System::Void deleteToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBarang->SelectedItems->Count > 0)
			listBarang->SelectedItems[0]->Remove();
		else {
			nullptr;
		}
	}
	private: System::Void renameToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (listBarang->SelectedItems->Count > 0)
			listBarang->SelectedItems[0]->BeginEdit();
		else {
			nullptr;
		}
	}

	private: System::Void ascendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBarang->Sorting = SortOrder::Ascending;
	}
	private: System::Void descendingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		listBarang->Sorting = SortOrder::Descending;
	}
		   //penting
	private: System::Void btnInput_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}


	private: System::Void listBarang_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			if (listBarang->SelectedIndices->Count > 0)
				prpCurrentlySelected = listBarang->SelectedItems[0];
			else
				prpCurrentlySelected = nullptr;
		}
	}
private: System::Void btnInput_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
	

	ListViewItem^ newitem = gcnew ListViewItem(txtBoxNo->Text);
	newitem->SubItems->Add(txtBoxBarang->Text);
	newitem->SubItems->Add(L"Rp " + txtBoxHarga->Text);
	newitem->SubItems->Add(txtBoxPcs->Text);

	listBarang->Items->Add(newitem);

	txtBoxBarang->Text = "";
	txtBoxHarga->Text = "";
	txtBoxPcs->Text = "";
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	listBarang->Items->Clear();
	txtBoxNo->Text = "01";
	txtBoxBarang->Text = "";
	txtBoxHarga->Text = "";
	txtBoxPcs->Text = "";
}
};
}
