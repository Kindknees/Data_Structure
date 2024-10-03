#pragma once
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<algorithm>

struct node
{
	int number;
	node* next;
};

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(12, 35);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Read G";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(8, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Randomly generated";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(28, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"n =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 115);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 25);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(28, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"range(w(e)) =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(28, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"if w(e) >";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(28, 232);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"w(e) =";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9));
			this->button2->Location = System::Drawing::Point(34, 337);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(303, 38);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Generate G";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(8, 392);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 22);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Shortest path solver";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9));
			this->button3->Location = System::Drawing::Point(34, 485);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(303, 39);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Single source all destinations";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9));
			this->button4->Location = System::Drawing::Point(32, 553);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(303, 39);
			this->button4->TabIndex = 10;
			this->button4->Text = L"All pairs";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9));
			this->button5->Location = System::Drawing::Point(32, 612);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(303, 39);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Transitive closures";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(375, 10);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1037, 645);
			this->tabControl1->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(1029, 616);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"G\'s adjacent matrix";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 22;
			this->listBox1->Location = System::Drawing::Point(12, 18);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(989, 576);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(1029, 616);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Graph in adjacent matrix";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 16);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1004, 591);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(4);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1029, 616);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"SSAD tables";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(15, 14);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(999, 586);
			this->dataGridView2->TabIndex = 1;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1029, 616);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"All pairs";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(7, 9);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 27;
			this->dataGridView3->Size = System::Drawing::Size(1019, 604);
			this->dataGridView3->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1029, 616);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"All pairs table";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(11, 13);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 27;
			this->dataGridView4->Size = System::Drawing::Size(1015, 600);
			this->dataGridView4->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1029, 616);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"TransitiveClosure";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(7, 8);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 27;
			this->dataGridView5->Size = System::Drawing::Size(1015, 600);
			this->dataGridView5->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 155);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 25);
			this->textBox2->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 193);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 25);
			this->textBox3->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(195, 231);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 25);
			this->textBox4->TabIndex = 15;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(195, 276);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(140, 25);
			this->textBox5->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(28, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 22);
			this->label7->TabIndex = 16;
			this->label7->Text = L"source =";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(34, 434);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(116, 26);
			this->checkBox1->TabIndex = 18;
			this->checkBox1->Text = L"Print result";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1432, 669);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int** w = nullptr;
		int n = 0;
		node* head, *last;

		int check_found(bool* arr)	//檢查found是否每個值都是true
		{
			for (int i = 0; i < n; i++)
			{
				if (!arr[i])	//如果有false就直接回傳是哪個值，當作找k的起點
					return i;
				
			}
			return n + 1;
		}

		void NewNode(int data)
		{
			node* temp = new node;
			temp->number = data;
			if (head != nullptr)
				temp->next = head;
			head = temp;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//read file
		if (w != nullptr)
		{
			for (int i = 0; i < n; i++)
				delete w[i];

			delete[] w;
		}

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
			cli::array<String^>^ content = reader->ReadLine()->Split(' ');	// 一次讀檔案中的一行
			n = Int64::Parse(content[0]); 
			int range = Int64::Parse(content[1]);
			int maxRange = Int64::Parse(content[2]);
			int largeInt = Int64::Parse(content[3]);
			textBox1->Text = content[0];
			textBox2->Text = content[1];
			textBox3->Text = content[2];
			textBox4->Text = content[3];


			w = new int* [n];

			for (int i = 0; i < n; i++)
				w[i] = new int[n];
					

			for (int i = 0; i < n; i++)
			{
				cli::array<String^>^ content = reader->ReadLine()->Split(' ');
				for (int j = 0; j < n; j++)
				{
					w[i][j] = int::Parse(content[j]);
				}
			}

			dataGridView1->RowCount = n;
			dataGridView1->ColumnCount = n;
			dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

			for (int i = 0; i < n; i++)
			{
				dataGridView1->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
				dataGridView1->Columns[i]->HeaderCell->Value = i.ToString(); // Setting column headers text.

				for (int j = 0; j < n; j++)
					dataGridView1->Rows[i]->Cells[j]->Value = w[i][j];
			}

		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//random generate w

		if (w != nullptr)
		{
			for (int i = 0; i < n; i++)
				delete w[i];

			delete[] w;
		}

		tabControl1->SelectTab(1);
		n = int::Parse(textBox1->Text);
		int range = int::Parse(textBox2->Text);
		int maxRange = int::Parse(textBox3->Text);
		int largeInt = int::Parse(textBox4->Text);
		srand(time(nullptr));

		w = new int* [n];
		for (int i = 0; i < n; i++)
			w[i] = new int[n];

		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				w[i][j] = rand() % range + 1;
				if (w[i][j] > maxRange) {
					w[i][j] = largeInt;
				}
				w[j][i] = w[i][j];
			}
			w[i][i] = largeInt;
		}

		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = n;
		dataGridView1->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width

		for (int i = 0; i < n; i++) 
		{
			dataGridView1->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
			dataGridView1->Columns[i]->HeaderCell->Value = i.ToString(); // Setting column headers text.

			for (int j = 0; j < n; j++)
				dataGridView1->Rows[i]->Cells[j]->Value = w[i][j];
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//single source all destinations
		tabControl1->SelectTab(2);
		int source = int::Parse(textBox5->Text);

		dataGridView2->RowCount = n;
		dataGridView2->ColumnCount = n + 1;
		dataGridView2->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width
		for (int i = 0; i < n; i++)
		{
			dataGridView2->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
			dataGridView2->Columns[i]->HeaderCell->Value = i.ToString();// Setting column headers text.
		}
		dataGridView2->Columns[n]->HeaderCell->Value = "from";

		//dijkstra algorithmn
		int* d = new int[n];	//distance
		bool* found = new bool[n];
		int* c = new int[n];	//紀錄每個點是的上一個哪一個點
			
		for (int i = 0; i < n; i++)
		{
			found[i] = false;
			d[i] = w[source][i];
			c[i] = source;
		}
		found[source] = true;
		d[source] = 0;

		for (int j = 0; j < n; j++)	//先寫第一行進入datagridview
			dataGridView2->Rows[j]->Cells[0]->Value = d[j];

		int k = check_found(found);	//下一個更新的目標
		int count = 1;	//在寫進datagridview時，用來記錄寫到第幾行
		while (k != n + 1)
		{
			for (int i = k; i < n; i++)
			{
				if (!found[i] && d[i] < d[k])
					k = i;
			}
			found[k] = true;
			dataGridView2->Rows[k]->Cells[count]->Style->BackColor = Color::Aqua;
			for (int i = 0; i < n; i++)
			{
				if (!found[i] && (d[i] > d[k] + w[k][i]))
				{
					d[i] = d[k] + w[k][i];
					c[i] = k;
					dataGridView2->Rows[i]->Cells[count]->Style->BackColor = Color::Yellow;
				}	
			}
			for (int j = 0; j < n; j++)
				dataGridView2->Rows[j]->Cells[count]->Value = d[j];
			k = check_found(found);
			count++;
		}

		for (int i = 0; i < n; i++)
			dataGridView2->Rows[i]->Cells[n]->Value = c[i];

		//print on listbox
		
		if (checkBox1->Checked)
		{
			int* order = new int[n];
			int* d2 = new int[n];
			for (int i = 0; i < n; i++)
			{
				order[i] = i;
				d2[i] = d[i];
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = i; j < n; j++)
				{
					if (d2[i] > d2[j])
					{
						std::swap(d2[i], d2[j]);
						std::swap(order[i], order[j]);
					}
				}
			}
			for (int i = 1; i < n; i++)
			{
				String^ str = "min: ";
				str += order[i];
				listBox1->Items->Add(str);
			}
			
			delete[] d2;
			delete[] order;

			for (int i = 0; i < n; i++)
			{	
				String^ str = "The shortest distance from " + source + " to " + i + " is " + d[i] + " with path " + source;
				if (source == i)
					continue;
				NewNode(i);
				last = head;
				while (head->number != source)
					NewNode(c[head->number]);

				node* p, *q;
				q = head;
				p = head->next;
				for (p = head->next; p != last; p = p->next)
				{
					int distance = d[p->number] - d[q->number];
					str += "--[" + distance + "]-->" + p->number;
					q = p;
				}
				int distance = d[p->number] - d[q->number];
				str += "--[" + distance + "]-->" + i;
				listBox1->Items->Add(str);

				while(head != last)
				{
					node* p = head;
					head = head->next;
					free(p);
				}
				free(head);
				head = nullptr;
				last = nullptr;

			}
			listBox1->Items->Add("");
		}

		delete[] d;
		delete[] found;
		delete[] c;
		
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//all pairs
		//dynamic programming
		tabControl1->SelectTab(3);

		//initialization
		int** a = new int* [n];
		int** c = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
			c[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				a[i][j] = w[i][j];
				c[i][j] = i;
			}
				
		}
		
		//start to do dynamic programming
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if (a[j][k] > (a[j][i] + a[i][k]))
					{
						a[j][k] = a[j][i] + a[i][k];
						c[j][k] = i;
					}
				}
			}
			a[i][i] = 0;
			c[i][i] = i;
		}
		
		//show on datagridview
		dataGridView3->RowCount = n;
		dataGridView3->ColumnCount = n;
		dataGridView3->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width
		dataGridView4->RowCount = n;
		dataGridView4->ColumnCount = n;
		dataGridView4->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
		for (int i = 0; i < n; i++)
		{
			dataGridView3->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
			dataGridView3->Columns[i]->HeaderCell->Value = i.ToString();// Setting column headers text.
			dataGridView4->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
			dataGridView4->Columns[i]->HeaderCell->Value = i.ToString();// Setting column headers text.
			
			for (int j = 0; j < n; j++)
			{
				dataGridView3->Rows[i]->Cells[j]->Value = a[i][j];
				dataGridView4->Rows[i]->Cells[j]->Value = c[i][j];
			}
				
		}

		//print on listbox
		if (checkBox1->Checked)
		{
			for (int i = 0; i < n; i++)	//起點
			{
				for (int j = 0; j < n; j++)	//終點
				{
					String^ str = "The shortest distance from " + i + " to " + j + " is " + a[i][j] + " with path " + i;
					if (j == i)
						continue;
					NewNode(j);
					last = head;
					while (head->number != i)
						NewNode(c[i][head->number]);

					node* p, * q;
					q = head;
					p = head->next;
					for (p = head->next; p != last; p = p->next)
					{
						int distance = a[i][p->number] - a[i][q->number];
						str += "--[" + distance + "]-->" + p->number;
						q = p;
					}
					int distance = a[i][p->number] - a[i][q->number];
					str += "--[" + distance + "]-->" + j;
					listBox1->Items->Add(str);

					while (head != last)
					{
						node* p = head;
						head = head->next;
						free(p);
					}
					free(head);
					head = nullptr;
					last = nullptr;
				}
				listBox1->Items->Add("-------------------");
			}
		}

		for (int i = 0; i < n; i++)
		{
			delete a[i];
			delete c[i];
		}
		delete[] a;
		delete[] c;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//transitive closure
		tabControl1->SelectTab(5);
		int largeint = int::Parse(textBox4->Text);
		int** a = new int* [n];
		for (int i = 0; i < n; i++)
		{
			a[i] = new int[n];
			for (int j = 0; j < n; j++)
			{
				if (w[i][j] != largeint)
					a[i][j] = 1;
				else
					a[i][j] = 0;
			}
			a[i][i] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					if ((a[j][k] == 0) && (a[j][i] == 1 && a[i][k] == 1))
						a[j][k] = 1;
				}
			}
		}

		dataGridView5->RowCount = n;
		dataGridView5->ColumnCount = n;
		dataGridView5->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders; // Fitting row headers width
		for (int i = 0; i < n; i++)
		{
			dataGridView5->Rows[i]->HeaderCell->Value = i.ToString(); // Setting row headers text
			dataGridView5->Columns[i]->HeaderCell->Value = i.ToString();// Setting column headers text.
			
			for (int j = 0; j < n; j++)
				dataGridView5->Rows[i]->Cells[j]->Value = a[i][j];
		}

		for (int i = 0; i < n; i++)
			delete[] a[i];
		delete[] a;
	}
};
}
