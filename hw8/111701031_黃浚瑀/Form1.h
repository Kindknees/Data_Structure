#pragma once
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<vector>

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			checkBoxes = gcnew array<CheckBox^> { checkBox2, checkBox3, checkBox4, checkBox5, checkBox6, checkBox7 };
			sort_names = gcnew array<String^> {"insertion sort", "Selection sort", "Bubble sort", "Quick sort", "Heap sort", "Merge sort"};
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox8;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: array<CheckBox^>^ checkBoxes;
	private: array<String^>^ sort_names;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(16, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(42, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"times =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(42, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"n =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(42, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"range 1~n =";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 25);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(161, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(140, 25);
			this->textBox2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(161, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 25);
			this->textBox3->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(16, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 22);
			this->label5->TabIndex = 7;
			this->label5->Text = L"sorting";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(100, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 36);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Draw diagram";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(12, 444);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"check";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(20, 469);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(320, 124);
			this->listBox1->TabIndex = 12;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(346, 14);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1077, 597);
			this->tabControl1->TabIndex = 13;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1069, 568);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"diagrams";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(11, 11);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(768, 544);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->listBox8);
			this->tabPage2->Controls->Add(this->listBox7);
			this->tabPage2->Controls->Add(this->listBox6);
			this->tabPage2->Controls->Add(this->listBox5);
			this->tabPage2->Controls->Add(this->listBox4);
			this->tabPage2->Controls->Add(this->listBox3);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1069, 568);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"data";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label14->Location = System::Drawing::Point(935, 14);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 44);
			this->label14->TabIndex = 26;
			this->label14->Text = L"merge\r\nsort";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label13->Location = System::Drawing::Point(785, 12);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 44);
			this->label13->TabIndex = 25;
			this->label13->Text = L"heap\r\nsort";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label12->Location = System::Drawing::Point(628, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 44);
			this->label12->TabIndex = 24;
			this->label12->Text = L"quick\r\nsort";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label11->Location = System::Drawing::Point(491, 14);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(67, 44);
			this->label11->TabIndex = 23;
			this->label11->Text = L"bubble\r\nsort";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label10->Location = System::Drawing::Point(337, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(81, 44);
			this->label10->TabIndex = 22;
			this->label10->Text = L"selection\r\nsort";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label9->Location = System::Drawing::Point(182, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 44);
			this->label9->TabIndex = 21;
			this->label9->Text = L"insertion\r\nsort";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label8->Location = System::Drawing::Point(45, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(81, 44);
			this->label8->TabIndex = 20;
			this->label8->Text = L"random\r\nnumbers";
			// 
			// listBox8
			// 
			this->listBox8->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox8->FormattingEnabled = true;
			this->listBox8->HorizontalScrollbar = true;
			this->listBox8->ItemHeight = 19;
			this->listBox8->Location = System::Drawing::Point(922, 71);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(115, 479);
			this->listBox8->TabIndex = 19;
			// 
			// listBox7
			// 
			this->listBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox7->FormattingEnabled = true;
			this->listBox7->HorizontalScrollbar = true;
			this->listBox7->ItemHeight = 19;
			this->listBox7->Location = System::Drawing::Point(767, 71);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(115, 479);
			this->listBox7->TabIndex = 18;
			// 
			// listBox6
			// 
			this->listBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox6->FormattingEnabled = true;
			this->listBox6->HorizontalScrollbar = true;
			this->listBox6->ItemHeight = 19;
			this->listBox6->Location = System::Drawing::Point(612, 71);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(115, 479);
			this->listBox6->TabIndex = 17;
			// 
			// listBox5
			// 
			this->listBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox5->FormattingEnabled = true;
			this->listBox5->HorizontalScrollbar = true;
			this->listBox5->ItemHeight = 19;
			this->listBox5->Location = System::Drawing::Point(471, 73);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(115, 479);
			this->listBox5->TabIndex = 16;
			// 
			// listBox4
			// 
			this->listBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->ItemHeight = 19;
			this->listBox4->Location = System::Drawing::Point(320, 71);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(115, 479);
			this->listBox4->TabIndex = 15;
			// 
			// listBox3
			// 
			this->listBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox3->FormattingEnabled = true;
			this->listBox3->HorizontalScrollbar = true;
			this->listBox3->ItemHeight = 19;
			this->listBox3->Location = System::Drawing::Point(175, 71);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(115, 479);
			this->listBox3->TabIndex = 14;
			// 
			// listBox2
			// 
			this->listBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 19;
			this->listBox2->Location = System::Drawing::Point(36, 71);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(115, 479);
			this->listBox2->TabIndex = 13;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox2->Location = System::Drawing::Point(6, 24);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(137, 26);
			this->checkBox2->TabIndex = 14;
			this->checkBox2->Text = L"Insertion sort";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox3->Location = System::Drawing::Point(7, 70);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(140, 26);
			this->checkBox3->TabIndex = 15;
			this->checkBox3->Text = L"Selection sort";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox4->Location = System::Drawing::Point(7, 113);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(123, 26);
			this->checkBox4->TabIndex = 16;
			this->checkBox4->Text = L"Bubble sort";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox5->Location = System::Drawing::Point(159, 24);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(112, 26);
			this->checkBox5->TabIndex = 17;
			this->checkBox5->Text = L"Quick sort";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox6->Location = System::Drawing::Point(159, 61);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(110, 26);
			this->checkBox6->TabIndex = 18;
			this->checkBox6->Text = L"Heap sort";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox7);
			this->groupBox1->Controls->Add(this->checkBox5);
			this->groupBox1->Controls->Add(this->checkBox6);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Location = System::Drawing::Point(38, 241);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(285, 145);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->checkBox7->Location = System::Drawing::Point(159, 113);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(120, 26);
			this->checkBox7->TabIndex = 20;
			this->checkBox7->Text = L"Merge sort";
			this->checkBox7->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(161, 178);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(140, 25);
			this->textBox4->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(42, 176);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 22);
			this->label7->TabIndex = 20;
			this->label7->Text = L"step =";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1435, 612);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void insertion_sort(int sorted[], int n)
		{
			for (int i = 1; i < n; i++)
			{
				int target = sorted[i];
				int j;
				for (j = i; j > 0 && sorted[j - 1] > target; j--)
				{
					sorted[j] = sorted[j - 1];
				}
				sorted[j] = target;
			}
		}

		void selection_sort(int sorted[], int n)
		{
			int min;
			for (int i = 0; i < n - 1; i++)
			{
				min = i;
				for (int j = i + 1; j < n; j++)
				{
					if (sorted[j] < sorted[min])
						min = j;
				}
				std::swap(sorted[i], sorted[min]);
			}
		}

		void bubble_sort(int sorted[], int n)
		{
			for (int i = n - 1; i > 0; i--)
			{
				for (int j = 0; j < i; j++)
				{
					if (sorted[j] > sorted[j + 1])
					{
						std::swap(sorted[j], sorted[j + 1]);
					}
				}
			}
		}

		void quick_sort(int sorted[], int left, int right)
		{
			int i, j;
			if (left < right)
			{
				i = left + 1;
				j = right;
				int target = sorted[left];
				do
				{
					while ((sorted[i] < target) && (i <= j))
						i++;
					while ((sorted[j] >= target) && (i <= j))
						j--;
					if (i < j)
						std::swap(sorted[i], sorted[j]);
					
				} while (i < j);

				if (left < j)
					std::swap(sorted[left], sorted[j]);
				quick_sort(sorted, left, j - 1);
				quick_sort(sorted, j + 1, right);
			}
		}

		void restore(int sorted[], int s, int t)
		{
			int i = s, j;
			while (i <= t / 2)
			{
				j = 2 * i;
				if (j < t && sorted[j] > sorted[j + 1])
					j++;
				if (sorted[i] < sorted[j])
					break;
				std::swap(sorted[i], sorted[j]);
				i = j;
			}
		}

		void heap_sort(int sorted[], int n)
		{
			for (int i = n / 2; i >= 1; i--)
				restore(sorted, i, n);
			for (int i = n; i >= 1; i--)
			{
				listBox7->Items->Add(sorted[1]);
				sorted[1] = sorted[i];
				restore(sorted, 1, i - 1);
			}
		}

		void merge(int arr[], int left, int mid, int right) {
			int n1 = mid - left + 1;
			int n2 = right - mid;

			std::vector<int> L(n1);
			std::vector<int> R(n2);

			// Copy data to temporary arrays L[] and R[]
			for (int i = 0; i < n1; i++)
				L[i] = arr[left + i];
			for (int j = 0; j < n2; j++)
				R[j] = arr[mid + 1 + j];

			// Merge the temporary arrays back into arr[left..right]
			int i = 0; // Initial index of first subarray
			int j = 0; // Initial index of second subarray
			int k = left; // Initial index of merged subarray

			while (i < n1 && j < n2) {
				if (L[i] <= R[j]) {
					arr[k] = L[i];
					i++;
				}
				else {
					arr[k] = R[j];
					j++;
				}
				k++;
			}

			// Copy the remaining elements of L[], if there are any
			while (i < n1) {
				arr[k] = L[i];
				i++;
				k++;
			}

			// Copy the remaining elements of R[], if there are any
			while (j < n2) {
				arr[k] = R[j];
				j++;
				k++;
			}
		}

		void merge_sort(int arr[], int left, int right) {
			if (left >= right)
				return;

			int mid = left + (right - left) / 2;

			merge_sort(arr, left, mid);
			merge_sort(arr, mid + 1, right);

			merge(arr, left, mid, right);
		}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	int times = int::Parse(textBox1->Text);
	int n = int::Parse(textBox2->Text);
	int range = int::Parse(textBox3->Text);
	int step = int::Parse(textBox4->Text);
	clock_t start, end;
	srand(time(nullptr));
	chart1->Series->Clear();
	
	double* record[6];	//紀錄時間用
	for (int i = 0; i < 6; i++)	//第一格為0代表不進行這個sort
		record[i] = new double[times + 1];
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < (times + 1); j++)
			record[i][j] = 0;
	}
	
	for (int i = 0; i < 6; i++) //檢查有沒有被打勾
	{
		if (checkBoxes[i]->Checked)
		{
			record[i][0] = 1;
			chart1->Series->Add(sort_names[i]);
		}
	}
	
	for (int i = 0; i < times; i++)
	{
		listBox2->Items->Add("times: " + (i + 1));
		int* arr = new int[n + step * i];
		for (int j = 0; j < (n+step*i); j++)
			arr[j] = rand() % range + 1;
		for (int j = 0; j < n + step * i; j++)
			listBox2->Items->Add(arr[j]);
		
		if (checkBox2->Checked)	//insertion sort
		{
			listBox3->Items->Add("times: " + (i + 1));
			int* sorted = new int[n + step * i];
			for (int j = 0; j < (n + step * i); j++)
				sorted[j] = arr[j];

			start = clock();
			insertion_sort(sorted, n + step * i);
			end = clock();

			double duration = (double)(end - start) / CLOCKS_PER_SEC;
			record[0][i + 1] = duration;
			for (int j = 0; j < n + step * i; j++)
				listBox3->Items->Add(sorted[j]);
			listBox3->Items->Add("run time:" + duration);
			delete[] sorted;
		}
		
		if (checkBox3->Checked)	//selection sort
		{
			listBox4->Items->Add("times: " + (i + 1));
			int* sorted = new int[n + step * i];
			for (int j = 0; j < (n + step * i); j++)
				sorted[j] = arr[j];

			start = clock();
			selection_sort(sorted, n + step * i);
			end = clock();

			double duration = (double)(end - start) / CLOCKS_PER_SEC;
			record[1][i + 1] = duration;
			for (int j = 0; j < n + step * i; j++)
				listBox4->Items->Add(sorted[j]);
			listBox4->Items->Add("run time:" + duration);
			delete[] sorted;
		}

		if (checkBox4->Checked)	//bubble sort
		{
			listBox5->Items->Add("times: " + (i + 1));
			int* sorted = new int[n + step * i];
			for (int j = 0; j < (n + step * i); j++)
				sorted[j] = arr[j];

			start = clock();
			bubble_sort(sorted, n + step * i);
			end = clock();

			double duration = (double)(end - start) / CLOCKS_PER_SEC;
			record[2][i + 1] = duration;
			for (int j = 0; j < n + step * i; j++)
				listBox5->Items->Add(sorted[j]);
			listBox5->Items->Add("run time:" + duration);
			delete[] sorted;
		}
		
		if (checkBox5->Checked)	//quick sort
		{
			listBox6->Items->Add("times: " + (i + 1));
			int* sorted = new int[n + step * i];
			for (int j = 0; j < (n + step * i); j++)
				sorted[j] = arr[j];

			start = clock();
			quick_sort(sorted, 0, n + step * i - 1);
			end = clock();

			double duration = (double)(end - start) / CLOCKS_PER_SEC;
			record[3][i + 1] = duration;
			for (int j = 0; j < n + step * i; j++)
				listBox6->Items->Add(sorted[j]);
			listBox6->Items->Add("run time:" + duration);
			delete[] sorted;
		}

		if (checkBox6->Checked)	//heap sort
		{
			listBox7->Items->Add("times: " + (i + 1));
			int* sorted = new int[n + step * i + 1];
			for (int j = 1; j < (n + step * i) + 1; j++)
				sorted[j] = arr[j-1];

			start = clock();
			heap_sort(sorted, n + step * i);
			end = clock();

			double duration = (double)(end - start) / CLOCKS_PER_SEC;
			listBox7->Items->Add("run time:" + duration);
			record[4][i + 1] = duration;
			delete[] sorted;
		}

		if (checkBox7->Checked)	//merge sort
		{
			listBox8->Items->Add("times: " + (i + 1));
			int* sorted = new int[n + step * i];
			for (int j = 0; j < (n + step * i); j++)
				sorted[j] = arr[j];

			start = clock();
			merge_sort(sorted, 0, n + step * i - 1);
			end = clock();

			double duration = (double)(end - start) / CLOCKS_PER_SEC;
			record[5][i + 1] = duration;
			for (int j = 0; j < n + step * i; j++)
				listBox8->Items->Add(sorted[j]);
			listBox8->Items->Add("run time:" + duration);
			delete[] sorted;
		}

		delete[] arr;
	}

	//輸出listbox1
	for (int i = 0; i < 6; i++)
	{
		if (record[i][0] == 1)
		{
			listBox1->Items->Add(sort_names[i] + " finish!");
		}
	}
	
	//輸出圖
	for (int i = 0; i < chart1->Series->Count; i++)
		chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
	for (int i = 0; i < 6; i++)
	{
		if (record[i][0] == 1)	//如果有進行這個sort
		{
			for (int j = 1; j < times + 1; j++)
			{
				chart1->Series[sort_names[i]]->Points->AddXY(n + step * (j-1), record[i][j]);
			}
		}
	}

	for (int i = 0; i < 6; i++)
		delete[] record[i];
}
};
}
