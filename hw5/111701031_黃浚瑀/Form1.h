#pragma once
#include<stdlib.h>

struct node
{
	int data;
	node* next;
};

node* first, * last, *top, *topq, *lastq;
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
			first = NewNode(0);
			first->next = first;
			last = first;

			top = NewNode(0);
			top->next = top;

			topq = NewNode(0);
			topq->next = topq;
			lastq = topq;
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
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ListBox^ listBox2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button13;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1177, 537);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button13);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1169, 508);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"singly linked list";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(961, 146);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(171, 29);
			this->button13->TabIndex = 17;
			this->button13->Text = L"Reverse all";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(743, 146);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(171, 29);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Clear list";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(528, 146);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(171, 29);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Insert n random numbers";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label4->Location = System::Drawing::Point(248, 146);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"range:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(332, 145);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(131, 25);
			this->textBox4->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(63, 145);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 25);
			this->textBox3->TabIndex = 12;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label3->Location = System::Drawing::Point(17, 145);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"n:";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(961, 83);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(171, 29);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Search and delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(743, 83);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(171, 29);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Search and insert before";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(528, 83);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 29);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Search and insert after";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(303, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 29);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Search target";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(84, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(131, 25);
			this->textBox2->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label2->Location = System::Drawing::Point(17, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"target:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(528, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 29);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Insert last";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Insert first";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(18, 191);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(1129, 304);
			this->listBox1->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(84, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(131, 25);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label1->Location = System::Drawing::Point(17, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"element:";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->button10);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1169, 508);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"linked stack";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label6->Location = System::Drawing::Point(19, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"pop result:";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(315, 100);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(165, 28);
			this->button10->TabIndex = 4;
			this->button10->Text = L"pop";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(315, 35);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(165, 28);
			this->button9->TabIndex = 3;
			this->button9->Text = L"push";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(106, 35);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(134, 25);
			this->textBox5->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label5->Location = System::Drawing::Point(19, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 17);
			this->label5->TabIndex = 1;
			this->label5->Text = L"element:";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(11, 213);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(1145, 289);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->button11);
			this->tabPage3->Controls->Add(this->button12);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->listBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1169, 508);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"limked queue";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label8->Location = System::Drawing::Point(35, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(74, 17);
			this->label8->TabIndex = 8;
			this->label8->Text = L"pop result:";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(331, 101);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(165, 28);
			this->button11->TabIndex = 7;
			this->button11->Text = L"pop";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(331, 36);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(165, 28);
			this->button12->TabIndex = 6;
			this->button12->Text = L"push";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(122, 35);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(134, 25);
			this->textBox6->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 10));
			this->label7->Location = System::Drawing::Point(35, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"element:";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->HorizontalScrollbar = true;
			this->listBox3->ItemHeight = 15;
			this->listBox3->Location = System::Drawing::Point(3, 216);
			this->listBox3->Name = L"listBox3";
			this->listBox3->ScrollAlwaysVisible = true;
			this->listBox3->Size = System::Drawing::Size(1145, 289);
			this->listBox3->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1201, 559);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		node* NewNode(int element)
		{
			node* p = new node;
			p->data = element;
			p->next = nullptr;
			return p;
		}

		void insertFirst(int element)
		{
			node* p = NewNode(element);
			p->next = first->next;
			first->next = p;
			if (last == first)
				last = p;
		}

		void insertLast(int element)
		{
			node* p = NewNode(element);
			p->next = last->next;
			last->next = p;
			last = p;
		}

		void printList(node* first)
		{
			node* p;
			String^ list = "";
			for (p = first->next; p != first; p = p->next)
			{
				list += p->data + "==>";
			}
			listBox1->Items->Add(list + "<");
		}

		node* SearchTarget(int target)
		{
			node* p;
			for (p = first->next; (p != first && p->data != target); p = p->next);
			if (p == first)
				return nullptr;
			return p;
		}

		node* SearchTarget_before(int target)
		{
			node* p;
			for (p = first->next; (p != first && p->next->data != target); p = p->next);
			if (p == first)
				return nullptr;
			return p;
		}

		void search_insert_after(int element, node* x)
		{
			node* p = NewNode(element);
			p->next = x->next;
			x->next = p;
		}

		void delete_after(node* x)
		{
			node* p = x->next;
			x->next = p->next;
			if (p == last)
				last = x;
			free (p);
		}

		void ClearList(node* first)
		{
			node* p;
			for (p = first->next; p != first; p = first->next)
			{
				first->next = p->next;
				free(p);
			}
			last = first;
		}

		void push(int element)
		{
			node* p = NewNode(element);
			p->next = top->next;
			top->next = p;
		}

		void printStack(node* first)
		{
			node* p;
			String^ list = "";
			for (p = first->next; p != first; p = p->next)
			{
				list += p->data + "==>";
			}
			listBox2->Items->Add(list + "<");
		}

		int pop()
		{
			node* p = top->next;
			if (p == top)
				return -1;
			int result = p -> data;
			top->next = p->next;
			free(p);
			return result;
		}

		void AddQueue(int element)
		{
			node* p = NewNode(element);
			p->next = lastq->next;
			lastq->next = p;
			lastq = p;
		}

		void PrintQueue(node* first)
		{
			node* p;
			String^ list = "";
			for (p = first->next; p != first; p = p->next)
			{
				list += p->data + "==>";
			}
			listBox3->Items->Add(list + "<");
		}

		int PopQueue()
		{
			node* p = topq->next;	
			if (p == topq)
				return -1;
			int result = p->data;
			topq->next = p->next;
			if (topq->next == topq)
				lastq = topq;
			free(p);
			return result;
		}

		bool reverse()
		{
			if (first == last)
				return false;
			node* p, * q, * r;
			p = first;
			q = p->next;
			r = q->next;
			while (q != first)
			{
				q->next = p;
				p = q;
				q = r;
				r = r->next;
			}
			last = first->next;
			first->next = p;
			return true;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//insert first
		int element = Convert::ToInt64(textBox1->Text);
		insertFirst(element);
		printList(first);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//insert last
		int element = Convert::ToInt64(textBox1->Text);
		insertLast(element);
		printList(first);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		
		int target = Convert::ToInt64(textBox2->Text);
		node* x;
		x = SearchTarget(target);
		if (x)
			listBox1->Items->Add(x->data + " has been found");
		else
			listBox1->Items->Add(target + " has NOT been found");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//search insert after
		int element = Convert::ToInt64(textBox1->Text);
		int target = Convert::ToInt64(textBox2->Text);
		node* x;
		x = SearchTarget(target);
		if (x)
			search_insert_after(element, x);
		else
			listBox1->Items->Add(target + " has NOT been found");
		printList(first);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//search insert before
		int element = Convert::ToInt64(textBox1->Text);
		int target = Convert::ToInt64(textBox2->Text);
		node* x;
		x = SearchTarget_before(target);
		if (x)
			search_insert_after(element, x);
		else
			listBox1->Items->Add(target + " has NOT been found");
		printList(first);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//search and delete
		int target = Convert::ToInt64(textBox2->Text);
		node* x;
		x = SearchTarget_before(target);
		if (x)
			delete_after(x);
		else
			listBox1->Items->Add(target + " has NOT been found");
		printList(first);
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//insert random
		int n = Convert::ToInt64(textBox3->Text);
		int range = Convert::ToInt64(textBox4->Text);
		int* data = new int[n];
		String^ str = "";

		for (int i = 0; i < n; i++)
		{
			data[i] = rand() % range + 1;
			str += Convert::ToString(data[i]) + " ";
			insertLast(data[i]);
		}
		listBox1->Items->Add("Random numbers: " + str);
		printList(first);

	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		ClearList(first);
		printList(first);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//push stack
		int element = Convert::ToInt64(textBox5->Text);
		push(element);
		printStack(top);
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//pop stack
		int result = pop();
		if (result == -1)
			listBox2->Items->Add("Stack is empty");
		else
			printStack(top);
		label6->Text = "pop result: " + Convert::ToString(result);
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		//push queue
		int element = Convert::ToInt64(textBox6->Text);
		AddQueue(element);
		PrintQueue(topq);

	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//pop queue
		int result = PopQueue();
		if (result == -1)
			listBox3->Items->Add("Queue is empty");
		else
			PrintQueue(topq);
		label8->Text = "pop result: " + Convert::ToString(result);
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//reverse all
		bool result = reverse();
		if (result)
			printList(first);
		else
			listBox1->Items->Add("Linked list is empty!");
	}
};
}
