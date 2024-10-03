#pragma once
#include<time.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

struct polynode
{
	int coef, expo;
	polynode* next;
};

polynode* head, *last;

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
			head = NewNode(-1, -1);
			head->next = head;
			last = head;
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;



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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 13);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1156, 507);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1148, 478);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Power";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(190, 6);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(940, 454);
			this->listBox1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkBox4);
			this->panel1->Controls->Add(this->checkBox3);
			this->panel1->Controls->Add(this->checkBox2);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(21, 252);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(147, 194);
			this->panel1->TabIndex = 8;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(18, 161);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(88, 19);
			this->checkBox4->TabIndex = 4;
			this->checkBox4->Text = L"fast power";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(18, 126);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(110, 19);
			this->checkBox3->TabIndex = 3;
			this->checkBox3->Text = L"library math.h";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(18, 87);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(76, 19);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"for-loop";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(18, 50);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(85, 19);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"recurrsive";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 15);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Algorithms in power";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(43, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(116, 25);
			this->textBox1->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(79, 188);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(90, 25);
			this->textBox3->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label1->Location = System::Drawing::Point(4, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"x = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label3->Location = System::Drawing::Point(3, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"iteration = ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->button1->Location = System::Drawing::Point(8, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"x^n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(43, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(116, 25);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label2->Location = System::Drawing::Point(4, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"n = ";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1148, 478);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Polynomials";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(111, 172);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 25);
			this->textBox6->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label7->Location = System::Drawing::Point(14, 172);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 17);
			this->label7->TabIndex = 17;
			this->label7->Text = L"coef range = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(111, 51);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label5->Location = System::Drawing::Point(72, 52);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"x = ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(111, 116);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 25);
			this->textBox5->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label6->Location = System::Drawing::Point(72, 116);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 17);
			this->label6->TabIndex = 15;
			this->label6->Text = L"n = ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->button2->Location = System::Drawing::Point(17, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(186, 60);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Generate random coef\r\nand compute";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->button3->Location = System::Drawing::Point(17, 335);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(186, 60);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Load coef from file \r\nand compute";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->HorizontalScrollbar = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(230, 6);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(911, 454);
			this->listBox2->TabIndex = 0;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1169, 532);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		long long int recurrsive_power(long long int x, long long int n)
		{
			if (n == 0)
				return 1;
			else
				return x * recurrsive_power(x, n - 1);
		}

		long long int hornor(long long int x, long long int n, int a[])
		{
			long long int result = a[n-1];
			for (int i = n - 1; i > 0; i--)
				result = result * x + a[i-1];
			return result;
		}

		long long int fast_pow(long long int x, long long int n)
		{
			if (n == 1)
				return x;
			long long int result;
			if (n & 1)
			{
				result = fast_pow(x, (n - 1) / 2);
				return result * result * x;
			}
			
			result = fast_pow(x, n / 2);
			return result * result;
		}

		

		polynode* NewNode(int coef, int expo)
		{
			polynode* p = new polynode;
			p->coef = coef;
			p->expo = expo;
			return p;
		}

		void insert(polynode* p)	//將node插入list中
		{
			polynode* q = head;
			if (last == head)
			{
				p->next = head->next;
				head->next = p;
				last = p;
				return;
			}
			while ((q != last) && (q->next->expo <= p->expo))
			{
				q = q->next;
				if (q->next->expo == p->expo)
				{
					q = q->next;
					q->coef += p->coef;
					break;
				}
			}
			if (q == last)
				last = p;
			p->next = q->next;
			q->next = p;
		}

		void DeleteList()
		{
			polynode* p = head->next;
			while (p != head)
			{
				head->next = p->next;
				free(p);
				p = head->next;
			}
			last = head;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//x^n

		long long int ans;
		int x = Convert::ToInt64(textBox1->Text);
		int n = Convert::ToInt64(textBox2->Text);
		long long int iteration = Convert::ToInt64(textBox3->Text);
		clock_t start, end;
		double duration;
		listBox1->Items->Add("x= " + x + ", n= " + n + ", iteration= " + iteration);
		if (checkBox1->Checked)	//recurrsive
		{
			ans = 0;
			start = clock();
			for (int i = 0; i < iteration; i++)
				ans = recurrsive_power(x, n);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			listBox1->Items->Add("Recurrsive ans: " + ans + " Time: " + duration);
		}
		if (checkBox2->Checked)	//for-loop
		{
			start = clock();
			for (int i = 0; i < iteration; i++)
			{
				ans = 1;
				for (int j = 0; j < n; j++)
				{
					ans *= x;
				}
			}
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			listBox1->Items->Add("For-loop ans: " + ans + " Time: " + duration);
		}
		if (checkBox3->Checked)	//library
		{
			ans = 0;
			start = clock();
			for (int i = 0; i < iteration; i++)
				ans = pow(x, n);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			listBox1->Items->Add("Library math.h ans: " + ans + " Time: " + duration);
		}
		if (checkBox4->Checked) //fast_pow
		{
			ans = 0;
			start = clock();
			for (int i = 0; i < iteration; i++)
				ans = fast_pow(x, n);
			end = clock();
			duration = (double)(end - start) / CLOCKS_PER_SEC;
			listBox1->Items->Add("Fast power ans: " + ans + " Time: " + duration);
		}
		listBox1->Items->Add(" ");
	}; 
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Load coef from file and compute

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
			cli::array<String^>^ x_value = reader->ReadLine()->Split(' ');
			cli::array<String^>^ coefs = reader->ReadLine()->Split(' ');
			cli::array<String^>^ expos = reader->ReadLine()->Split(' ');
			int size = coefs->Length;
			int x = Convert::ToInt64(x_value[0]);
			textBox4->Text = Convert::ToString(x);

			polynode* p;
			for (int i = 0; i < size; i++)
			{
				p = NewNode(Convert::ToInt64(coefs[i]), Convert::ToInt64(expos[i]));
				insert(p);
			}

			String^ str = "";
			int ans = 0;
			for (p = head->next; p != last; p = p->next)
			{
				str += "(" + Convert::ToString(p->coef) + ")x^(" + Convert::ToString(p->expo) + ") + ";
				ans += (p->coef) * pow(x, p->expo);
			}
			str += "(" + Convert::ToString(p->coef) + ")x^" + Convert::ToString(p->expo);
			ans += (p->coef) * pow(x, p->expo);

			listBox2->Items->Add("Formulations:" + str);
			listBox2->Items->Add("Answers: " + ans);
			listBox2->Items->Add(" ");
			DeleteList();
		}
		else
			MessageBox::Show("Fail to load file!", "warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//Generate random coef and compute

		int x = Convert::ToInt64(textBox4->Text);
		int n = Convert::ToInt64(textBox5->Text);
		int range = Convert::ToInt64(textBox6->Text);
		srand(time(nullptr));
		int coef;
		String^ str = "";
		int ans = 0;
		
		for (int i = 0; i < n; i++)
		{
			coef = rand() % range;
			if (rand() & 1)
				coef = -coef;
			str += "(" + Convert::ToString(coef) + ")x^(" + Convert::ToString(i) + ")";
			if (i != n - 1)
				str += " + ";
			ans += coef * pow(x, i);
		}

		listBox2->Items->Add("Formulations:" + str);
		listBox2->Items->Add("Answers: " + ans);
		listBox2->Items->Add(" ");
	}
}; };
