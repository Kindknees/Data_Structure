#pragma once
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

int* arr;	//建立動態陣列指標
vector <double> SelectionTime;	//用於紀錄每次執行的時間，及圖表之Y軸
vector <int> SelectionNumber;	//用於紀錄每次執行時的數量，即圖表之X軸
vector <double> BubbleTime;
vector <int> BubbleNumber;
vector <double> QuickTime;
vector <int> QuickNumber;

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
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton4;



	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(399, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate Random Number";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(589, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(175, 62);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Selection Sort";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(779, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(175, 62);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Bubble Sort";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"n =";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1162, 471);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->listBox5);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->listBox4);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->listBox3);
			this->tabPage1->Controls->Add(this->listBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1154, 442);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Sort";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(247, 87);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 39);
			this->button8->TabIndex = 22;
			this->button8->Text = L"Re-run";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(30, 131);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(86, 19);
			this->checkBox2->TabIndex = 21;
			this->checkBox2->Text = L"self-check";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->HorizontalScrollbar = true;
			this->listBox5->ItemHeight = 15;
			this->listBox5->Location = System::Drawing::Point(969, 87);
			this->listBox5->Name = L"listBox5";
			this->listBox5->ScrollAlwaysVisible = true;
			this->listBox5->Size = System::Drawing::Size(175, 349);
			this->listBox5->TabIndex = 20;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(969, 16);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(175, 62);
			this->button6->TabIndex = 19;
			this->button6->Text = L"Quick Sort";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(247, 33);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 41);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Load Chart";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(132, 163);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(57, 25);
			this->textBox3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 15);
			this->label3->TabIndex = 13;
			this->label3->Text = L"search integer:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(30, 96);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(86, 19);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"echo print";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(218, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 28);
			this->button4->TabIndex = 11;
			this->button4->Text = L"search";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->HorizontalScrollbar = true;
			this->listBox4->ItemHeight = 15;
			this->listBox4->Location = System::Drawing::Point(18, 207);
			this->listBox4->Name = L"listBox4";
			this->listBox4->ScrollAlwaysVisible = true;
			this->listBox4->Size = System::Drawing::Size(375, 214);
			this->listBox4->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(132, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 25);
			this->textBox2->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 15);
			this->label2->TabIndex = 8;
			this->label2->Text = L"(optional) range =";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->HorizontalScrollbar = true;
			this->listBox3->ItemHeight = 15;
			this->listBox3->Location = System::Drawing::Point(779, 87);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(175, 349);
			this->listBox3->TabIndex = 7;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(589, 87);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(175, 349);
			this->listBox2->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 25);
			this->textBox1->TabIndex = 5;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::Window;
			this->listBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(399, 87);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(175, 349);
			this->listBox1->TabIndex = 4;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->panel1);
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1154, 442);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Chart";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(21, 315);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(181, 53);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Load Chart";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(22, 32);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(181, 234);
			this->panel1->TabIndex = 2;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(16, 195);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(48, 19);
			this->radioButton5->TabIndex = 6;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Bar";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(16, 151);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(54, 19);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Line";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 62);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(58, 19);
			this->radioButton2->TabIndex = 4;
			this->radioButton2->Text = L"Point";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(16, 106);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(64, 19);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->Text = L"Spline";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(16, 17);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(73, 19);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Column";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(227, 21);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(891, 404);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1172, 495);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"111701031 黃浚瑀";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//functions
	void SelectionSort(int list[], int n)
	{
		int min;
		clock_t start, end;
		start = clock();

		for (int i = 0; i <= n; i++)
		{
			min = i;
			for (int j = i + 1; j < n; j++)
			{
				if (list[min] > list[j])
					min = j;
			}
			swap(list[min], list[i]);
		}
		end = clock();
		double duration = (double)(end - start) / CLOCKS_PER_SEC;	//執行時間

		if (checkBox1->Checked)	//看要不要echo print
		{
			for (int i = 0; i < n; i++)
			{
				listBox2->Items->Add("data[" + (i + 1) + "] " + list[i]);
			}
		}
		listBox2->Items->Add("CPU time:" + duration + "sec.");

		//記錄每一次的執行時間和數量於vector中
		if (SelectionNumber.empty())	//若這是第一次紀錄，那就直接加進vector
		{
			SelectionNumber.push_back(n);
			SelectionTime.push_back(duration);
		}
		else	//若這是第二次以上紀錄，則按照大小順序插入vector中
		{
			for (int i = 0; i < SelectionNumber.size(); i++)
			{
				if (SelectionNumber[i] > n)
				{
					SelectionNumber.insert(SelectionNumber.begin() + i, n);
					SelectionTime.insert(SelectionTime.begin() + i, duration);
					break;
				}
				else if (i == SelectionNumber.size() - 1)
				{
					SelectionNumber.push_back(n);
					SelectionTime.push_back(duration);
					break;
				}
			}
		}
		if (checkBox2->Checked)		//self check
		{
			int pivot = list[0];
			for (int i = 1; i < n; i++)
			{
				if (pivot > list[i])
				{
					listBox2->Items->Add("Wrong sorted!");
					break;
				}
				else
				{
					if (i < n - 1)
					{
						pivot = list[i];
						continue;
					}
					else
					{
						listBox2->Items->Add("Correctly sorted!");
					}
				}
			}
		}
	}

	void BubbleSort(int list[], int n)
	{
		clock_t start, end;
		start = clock();
		for (int i = n - 1; i > 0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (list[j] > list[j + 1])
				{
					swap(list[j], list[j + 1]);
				}
			}
		}
		end = clock();
		double duration = (double)(end - start) / CLOCKS_PER_SEC;
		if (checkBox1->Checked)
		{
			for (int i = 0; i < n; i++)
			{
				listBox3->Items->Add("data[" + (i + 1) + "] " + list[i]);
			}
		}
		listBox3->Items->Add("CPU time:" + duration + "sec.");

		//記錄每一次的執行時間和數量於vector中
		if (BubbleNumber.empty())	//若這是第一次紀錄，那就直接加進vector
		{
			BubbleNumber.push_back(n);
			BubbleTime.push_back(duration);
		}
		else	//若這是第二次以上紀錄，則按照大小順序插入vector中
		{
			for (int i = 0; i < BubbleNumber.size(); i++)
			{
				if (BubbleNumber[i] > n)
				{
					BubbleNumber.insert(BubbleNumber.begin() + i, n);
					BubbleTime.insert(BubbleTime.begin() + i, duration);
					break;
				}
				else if (i == BubbleNumber.size() - 1)
				{
					BubbleNumber.push_back(n);
					BubbleTime.push_back(duration);
					break;
				}
			}
		}
		if (checkBox2->Checked)		//self check
		{
			int pivot = list[0];
			for (int i = 1; i < n; i++)
			{
				if (pivot > list[i])
				{
					listBox3->Items->Add("Wrong sorted!");
					break;
				}
				else
				{
					if (i < n - 1)
					{
						pivot = list[i];
						continue;
					}
					else
					{
						listBox3->Items->Add("Correctly sorted!");
					}
				}
			}
		}
	}

	vector <int> BinarySearch(int list[], int n, int target)
	{
		sort(list, list + n);
		int left = 0, right = n - 1, middle;
		vector <int> numbers;	//用來存放找到目標的位置

		while (left <= right)
		{
			middle = (left + right) / 2;
			if (list[middle] == target)
			{
				break;
			}
			else if (list[middle] < target)
			{
				left = middle + 1;
			}
			else
			{
				right = middle - 1;
			}
		}

		//此時已經找到其中一個了，但可能陣列中有好幾個一樣的數字
		if (list[middle] == target)	
		{
			numbers.push_back(middle);
			int temp = middle + 1;	//向middle的右邊繼續尋找其他可能
			while ((list[temp] == list[middle]) && (temp < n))
			{
				numbers.push_back(temp);
				temp++;
			}
			temp = middle - 1;	//向middle的左邊繼續尋找其他可能
			while ((list[temp] == list[middle]) && (temp >= 0))
			{
				numbers.push_back(temp);
				temp--;
			}
			sort(numbers.begin(), numbers.end());
			for (int i = 0; i < numbers.size(); i++)
				numbers[i] += 1;
		}
		return numbers;
	}

	int Partition(int arr[], int start, int end)	//用於quicksort
	{
		int pivot = arr[start];
		int count = 0;
		for (int i = start + 1; i <= end; i++) 
		{
			if (arr[i] <= pivot)
				count++;
		}
		int pivotIndex = start + count;
		swap(arr[pivotIndex], arr[start]);

		int i = start, j = end;
		while (i < pivotIndex && j > pivotIndex) 
		{
			while (arr[i] <= pivot) 
				i++;
			while (arr[j] > pivot) 
				j--;
			if (i < pivotIndex && j > pivotIndex) 
				swap(arr[i++], arr[j--]);
		}

		return pivotIndex;
	}

	void QuickSort(int arr[], int start, int end)
	{
		if (start >= end)
			return;

		int p = Partition(arr, start, end);

		QuickSort(arr, start, p - 1);

		QuickSort(arr, p + 1, end);
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//button to generate random numbers

		delete[] arr;	//清空全域動態陣列占用之記憶體
		int n, step = 0, repetition = 1;
		int range = 0;
		srand(time(NULL));
		try		//檢測n的輸入是否合乎要求
		{
			n = System::Int32::Parse(textBox1->Text);
			arr = new int[n];	//建立動態陣列
		}
		catch (const System::Exception^ e)
		{
			MessageBox::Show("n 輸入的格式錯誤，請輸入一個數字。", "格式錯誤", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		try		//檢測range的輸入是否合乎要求
		{
			range = System::Int32::Parse(textBox2->Text);
		}
		catch (const System::Exception^ e)
		{
			range = 0;
		}
		for (int i = 0; i < n; i++)
		{
			if (range != 0)
				arr[i] = rand() % range + 1;
			else
				arr[i] = rand();
		}
		if (checkBox1->Checked)		//echo print or not
		{
			for (int i = 0; i < n; i++)
			{
				listBox1->Items->Add("data[" + (i + 1) + "] " + arr[i]);
			}
		}
		listBox1->Items->Add(n + " numbers are generated");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//button of selection sort

		int n = int::Parse(textBox1->Text);
		int* list1 = new int[n];	//建立新的動態陣列進行排序
		for (int i = 0; i < n; i++)
		{
			list1[i] = arr[i];
		}
		SelectionSort(list1, n);
		delete[] list1;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//button of bubble sort

		int n = int::Parse(textBox1->Text);
		int* list = new int[n];
		for (int i = 0; i < n; i++)		//建立新的動態陣列進行排序
		{
			list[i] = arr[i];
		}
		BubbleSort(list, n);
		delete[] list;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//button of searching number
		int n, target;
		try		//檢測n的輸入是否合乎要求
		{
			n = System::Int32::Parse(textBox1->Text);
		}
		catch (const System::Exception^ e)
		{
			MessageBox::Show("n 輸入的格式錯誤，請輸入一個數字。", "格式錯誤", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		try		//檢測target的輸入是否合乎要求
		{
			target = System::Int32::Parse(textBox3->Text);
		}
		catch (const System::Exception^ e)
		{
			MessageBox::Show("Search 輸入的格式錯誤，請輸入一個數字。", "格式錯誤", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int* list = new int[n];
		for (int i = 0; i < n; i++)
		{
			list[i] = arr[i];
		}
		vector <int> locations = BinarySearch(list, n, target);
		if (locations.empty() == false)
		{
			for (int i = 0; i < locations.size(); i++)
			{
				listBox4->Items->Add(target + " has been found in data[" + locations[i] + "] ");
			}

		}
		else
			listBox4->Items->Add(target + " has Not been found in data");
		delete[] list;

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//draw charts

		String^ selection = "Selection"; // String in VSC++
		String^ bubble = "Bubble";
		String^ quick = "Quick";
		chart1->Series->Clear();
		chart1->Series->Add(selection);
		chart1->Series->Add(bubble);
		chart1->Series->Add(quick);

		for (int i = 0; i < SelectionNumber.size(); i++)
		{
			chart1->Series[selection]->Points->AddXY(SelectionNumber[i], SelectionTime[i]);
			chart1->Series[bubble]->Points->AddXY(BubbleNumber[i], BubbleTime[i]);
			chart1->Series[quick]->Points->AddXY(QuickNumber[i], QuickTime[i]);
		}

		if (radioButton1->Checked)
		{
			for (int i = 0; i < chart1->Series->Count; i++)
				chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
		}
		else if (radioButton2->Checked)
		{
			for (int i = 0; i < chart1->Series->Count; i++)
				chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
		}
		else if (radioButton3->Checked)
		{
			for (int i = 0; i < chart1->Series->Count; i++)
				chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
		}
		else if (radioButton4->Checked)
		{
			for (int i = 0; i < chart1->Series->Count; i++)
				chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		}
		else if (radioButton5->Checked)
		{
			for (int i = 0; i < chart1->Series->Count; i++)
				chart1->Series[i]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
		}
		chart1->ChartAreas["ChartArea1"]->AxisX->Title = "Numbers";
		chart1->ChartAreas["ChartArea1"]->AxisY->Title = "Time";
		tabControl1->SelectedTab = tabPage2;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//button of quicksort

		int n = int::Parse(textBox1->Text);
		int* list = new int[n];
		clock_t start, end;
		for (int i = 0; i < n; i++)		//建立新的動態陣列進行排序
		{
			list[i] = arr[i];
		}
		start = clock();
		QuickSort(list, 0, n-1);
		end = clock();
		double duration = (double)(end - start) / CLOCKS_PER_SEC;
		
		if (checkBox1->Checked)
		{
			for (int i = 0; i < n; i++)
			{
				listBox5->Items->Add("data[" + (i + 1) + "] " + list[i]);
			}
		}
		listBox5->Items->Add("CPU time:" + duration + "sec.");

		if (QuickNumber.empty())	//記錄每一次的執行時間和數量於vector中
		{
			QuickNumber.push_back(n);
			QuickTime.push_back(duration);
		}
		else
		{
			for (int i = 0; i < QuickNumber.size(); i++)
			{
				if (QuickNumber[i] > n)
				{
					QuickNumber.insert(QuickNumber.begin() + i, n);
					QuickTime.insert(QuickTime.begin() + i, duration);
					break;
				}
				else if (i == QuickNumber.size() - 1)
				{
					QuickNumber.push_back(n);
					QuickTime.push_back(duration);
					break;
				}
			}
		}
		if (checkBox2->Checked)		//self check
		{
			int pivot = list[0];
			for (int i = 1; i < n; i++)
			{
				if (pivot > list[i])
				{
					listBox5->Items->Add("Wrong sorted!");
					break;
				}
				else
				{
					if (i < n - 1)
					{
						pivot = list[i];
						continue;
					}
					else
					{
						listBox5->Items->Add("Correctly sorted!");
					}
				}
			}
		}
		delete[] list;
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SelectionTime.clear();	
	SelectionNumber.clear();
	BubbleTime.clear();
	BubbleNumber.clear();
	QuickTime.clear();
	QuickNumber.clear();
}
};
};


