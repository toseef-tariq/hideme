#pragma once
#include <windows.h>
#include <ShellAPI.h>
#include<string>
#include<string.h>
#include<stdlib.h>
#include <msclr/marshal_cppstd.h>
#include<cstring>
#include "form2.h"
namespace project {
	using namespace std;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Net::Mime;
	using namespace System::Threading;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::IO;  
	/// <summary>
	/// Summary for form3
	/// </summary>
	public ref class form3 : public System::Windows::Forms::Form
	{
	public:
		void count(void)
		{
			String ^ abc;
			 StreamReader^ dim = File::OpenText("count.bin");  
			abc = dim->ReadLine();
			dim->Close();
			int key=Int32::Parse(abc);
			StreamWriter^ sw = gcnew StreamWriter("count.bin"); 
					sw->WriteLine(key+1);  
				    sw->Close();
			
		}
		void welcom(void)
		{
			String ^ abc;
			String ^ welcome="Welcome ";
			 StreamReader^ dim = File::OpenText("cuser.txt");  
			abc = dim->ReadLine();
			dim->Close();
			welcome+=abc;
			welcome+=" ..!";
			label1->Text=welcome;

		}
		form3(void)
		{
			InitializeComponent();
			welcom();
			count();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Label^  label1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(form3::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox1->Location = System::Drawing::Point(48, 220);
			this->textBox1->MaxLength = 30;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(262, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Enter  Email to Send. . .";
			this->textBox1->WordWrap = false;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(340, 220);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(225, 19);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(42, 292);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(523, 96);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(45, 436);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Encrypt";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &form3::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(239, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Decrypt";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &form3::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Teal;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(426, 438);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(139, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &form3::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::Color::DimGray;
			this->button4->Location = System::Drawing::Point(691, 350);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 84);
			this->button4->TabIndex = 6;
			this->button4->Text = L"\r\n\r\n\r\nBrowser";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &form3::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold));
			this->button5->ForeColor = System::Drawing::Color::DimGray;
			this->button5->Location = System::Drawing::Point(806, 350);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 84);
			this->button5->TabIndex = 7;
			this->button5->Text = L"\r\n\r\n\r\nMailBox";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &form3::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::Color::DimGray;
			this->button6->Location = System::Drawing::Point(914, 347);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 85);
			this->button6->TabIndex = 8;
			this->button6->Text = L"\r\n\r\n\r\nUsers";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &form3::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::Color::DimGray;
			this->button7->Location = System::Drawing::Point(695, 484);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(74, 88);
			this->button7->TabIndex = 9;
			this->button7->Text = L"\r\n\r\n\r\nAbout";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &form3::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::Color::DimGray;
			this->button8->Location = System::Drawing::Point(807, 489);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 84);
			this->button8->TabIndex = 10;
			this->button8->Text = L"\r\n\r\n\r\nAdmin";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::LightGray;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::DimGray;
			this->button9->Location = System::Drawing::Point(917, 488);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 84);
			this->button9->TabIndex = 11;
			this->button9->Text = L"\r\n\r\n\r\nSupport";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &form3::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::Color::Transparent;
			this->button10->Location = System::Drawing::Point(806, 12);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(100, 92);
			this->button10->TabIndex = 12;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &form3::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::Color::Transparent;
			this->button11->Location = System::Drawing::Point(940, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 84);
			this->button11->TabIndex = 13;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &form3::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button12->Location = System::Drawing::Point(691, 170);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(133, 162);
			this->button12->TabIndex = 14;
			this->button12->Text = L"\r\n\r\n\r\nLogs";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &form3::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button13->Location = System::Drawing::Point(859, 170);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(133, 162);
			this->button13->TabIndex = 15;
			this->button13->Text = L"\r\n\r\n\r\nCount";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &form3::button13_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::Gray;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::Gray;
			this->linkLabel1->Location = System::Drawing::Point(911, 618);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(104, 15);
			this->linkLabel1->TabIndex = 16;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"www.dapspk.com";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Gray;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &form3::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(58, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 18);
			this->label1->TabIndex = 17;
			// 
			// form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1027, 652);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DashBoard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
			 form2^ f2=gcnew form2();
				f2->ShowDialog();
				this->Close();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 String ^ mail="start mailto:";
				 mail+=textBox1->Text;
				 mail+="?";
				 mail+="subject=Generated_By:DAPS_Information_Technology_Pvt_Ltd&body=hello kfueit";
				   msclr::interop::marshal_context oMarshalContext;

				  const char* pParameter = oMarshalContext.marshal_as<const char*>(mail);

			system (pParameter);	
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	system("start https://www.dapspk.com");
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		
			 int index=0,y=0, key;
			String ^ input1= richTextBox1->Text;
			string input = msclr::interop::marshal_as<string>(input1);				
			int a=input.size();	
		    try{
				key=Int32::Parse(textBox2->Text);
					}
			catch (FormatException^ e) {
				MessageBox::Show("Key Must be Integer Only.");
			}
			String ^ abc="abcdefghijklmnopqrstuvwxyz";	 
			for(int i=0;i<a;i++)
	for(int j=0;j<26;j++)
	{
     if(abc[j]==input[i])
	 {
		 y=(j+key)%26;
		 if(y<0)
		 {
			 y=y+26;	 
		 }
		input[i]=abc[y];
		 break;
	 }
	}	
		String^ MyString = gcnew String(input.c_str());
		richTextBox1->Text=key.ToString(MyString);	
		 button1->Enabled = false;
		
		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


			 
			 int index=0,y=0, key;
			String ^ input1= richTextBox1->Text;
			string input = msclr::interop::marshal_as<string>(input1);				
			int a=input.size();	
		    try{
				key=Int32::Parse(textBox2->Text);
					}
			catch (FormatException^ e) {
				MessageBox::Show("Key Must be Integer Only.");
			}
			String ^ abc="abcdefghijklmnopqrstuvwxyz";	 
			for(int i=0;i<a;i++)
	for(int j=0;j<26;j++)
	{
     if(abc[j]==input[i])
	 {
		 y=(j-key)%26;
		 if(y<0)
		 {
			 y=y+26;	 
		 }
		input[i]=abc[y];
		 break;
	 }
	}	
		String^ MyString = gcnew String(input.c_str());
		richTextBox1->Text=key.ToString(MyString);	
		 button2->Enabled = false;
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 String ^ abc;
			 StreamReader^ dim = File::OpenText("count.bin");  
			abc = dim->ReadLine();
			dim->Close();
			 MessageBox::Show("Total Counts of Login are as Follows:" + Environment::NewLine + abc);



		 } 
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
 button1->Enabled = true;
 button2->Enabled = true;
 textBox2->Text="";
 richTextBox1->Text="";
			 
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Activated: Only for Single User");
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start https://www.fb.com/dapspk");
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 	system("start https://www.google.com");
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start logs.txt");
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Initial Release" + Environment::NewLine + "Version 1.0.2");
		 }
};
}

