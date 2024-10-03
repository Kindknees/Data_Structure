#pragma once
#include <stdlib.h>
#include <time.h>

struct node
{
	node* left;
	int data;
	node* right;
};

struct stack_node
{
	node* data;
	stack_node* next;
};

struct queue_node
{
	node* data;
	queue_node* next;
};

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(12, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"element";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(7, 249);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Random generate and insert";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(105, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 25);
			this->textBox1->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(280, 10);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(926, 634);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(918, 605);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Sequences of BST (recurrsive)";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(15, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(891, 574);
			this->listBox1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(918, 605);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Sequences of BST (nonrecurrsively)";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(14, 15);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(891, 574);
			this->listBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(23, 80);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Insert into binary tree";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(23, 130);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Delete from binary tree";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->panel1->Location = System::Drawing::Point(26, 284);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(233, 185);
			this->panel1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(43, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 34);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Insert";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(102, 82);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(115, 30);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(115, 30);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(19, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Range";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(19, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Number";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(16, 552);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(235, 34);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Print sequences";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(105, 515);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(57, 19);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Infix";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(187, 515);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(64, 19);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Prefix";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(11, 515);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(69, 19);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Postfix";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button5->Location = System::Drawing::Point(23, 183);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(235, 34);
			this->button5->TabIndex = 11;
			this->button5->Text = L"Search";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->button6->Location = System::Drawing::Point(16, 606);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(235, 34);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Level order";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1218, 658);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"111701031 黃浚瑀";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		node* re_root = nullptr, * non_root = nullptr;
		stack_node* head = nullptr;
		bool deleted = false;	//檢查有沒有成功刪除，若欲刪掉的數字不在樹裡則為flase
		queue_node* front = nullptr, *rear = front;
		
		node* NewNode(int element)
		{
			node* p = new node;
			p->data = element;
			p->left = nullptr;
			p->right = nullptr;
			return p;
		}

		node* re_insert(node* p, node* next)
		{
			if (next == nullptr)
				return p;
			else if (p->data < next->data)
			{
				next->left = re_insert(p, next->left);
			}
			else if (p->data > next->data)
			{
				next->right = re_insert(p, next->right);
			}
			return next;
		}

		void non_insert(node* p, node* first)
		{
			node* q = first, *r;
			while (q != nullptr)
			{
				r = q;
				if (p->data < q->data)
					q = q->left;
				else if (p->data > q->data)
					q = q->right;
				else
					return;
			}

			if (p->data < r->data)
				r->left = p;
			else
				r->right = p;
		}

		String^ re_infix(node* p, String^ str)
		{
			if (p != nullptr)
			{
				str = re_infix(p->left, str);
				str += Convert::ToString(p->data) + " ";
				str = re_infix(p->right, str);
			}
			return str;
		}

		String^ re_prefix(node* p, String^ str)
		{
			if (p != nullptr)
			{
				str += Convert::ToString(p->data) + " ";
				str = re_prefix(p->left, str);
				str = re_prefix(p->right, str);
			}
			return str;
		}

		String^ re_postfix(node* p, String^ str)
		{
			if (p != nullptr)
			{
				str = re_postfix(p->left, str);
				str = re_postfix(p->right, str);
				str += Convert::ToString(p->data) + " ";
			}
			return str;
		}

		stack_node* NewStackNode(node* p)
		{
			stack_node* q = new stack_node;
			q->data = p;
			q->next = nullptr;
			return q;
		}

		void push(node* p)	//used in stack
		{
			stack_node* q = NewStackNode(p);
			q->next = head;
			head = q;
		}

		node* pop()	//used in stack
		{
			if (head == nullptr)
				return nullptr;
			stack_node* p = head;
			head = head->next;
			node* result = p->data;
			free(p);
			return result;
		}

		String^ non_infix(node* q, String^ str)		//一開始q是nonrecurrent的root
		{
			do
			{
				while (q != nullptr)
				{
					push(q);
					q = q->left;
				}
				q = pop();
				str += Convert::ToString(q->data) + " ";
				q = q->right;
			} while ((head != nullptr) || (q != nullptr));
			return str;
		}

		String^ non_prefix(node* q, String^ str)
		{
			do
			{
				while (q != nullptr)
				{
					str += Convert::ToString(q->data) + " ";
					if (q->right != nullptr)
						push(q->right);
					q = q->left;
				}
				q = pop();
			} while (head != nullptr || q != nullptr);
			return str;
		}

		String^ non_postfix(node* q, String^ str)
		{
			List<String^>^ temp = gcnew List<String^>();
			do
			{
				while (q != nullptr)
				{
					temp->Add(Convert::ToString(q->data));
					if (q->left != nullptr)
						push(q->left);
					q = q->right;
				}
				q = pop();
			} while (head != nullptr || q != nullptr);

			for (int i = temp->Count - 1; i >= 0; i--)
				str += temp[i] + " ";
			return str;
		}

		node* re_DeleteElement(node* p, int element)
		{
			if (p == nullptr)
				return nullptr;
			if (element < p->data)
				p->left = re_DeleteElement(p->left, element);
			else if (element > p->data)
				p->right = re_DeleteElement(p->right, element);
			else
			{
				deleted = true;
				if ((p->left == nullptr) || (p->right == nullptr))
				{
					node* temp = p->left ? p->left : p->right;
					if (temp == nullptr)	//leaf
					{
						temp = p;
						p = nullptr;
					}
					else    //一個節點
					{
						p = temp;
					}
					free(temp);
				}
				else    //有兩個節點
				{
					node* temp;
					for (temp = p->right; temp && temp->left != nullptr; temp = temp->left);
					p->data = temp->data;
					p->right = re_DeleteElement(p->right, temp->data);					
				}
			}
			return p;
		}

		node* non_DeleteElement(int element)
		{
			node* p = non_root, *father;
			//開始尋找
			while (p != nullptr)
			{
				father = p;
				if (p->data < element)
					p = p->right;
				else if (p->data > element)
					p = p->left;
				if (p->data == element)
					break;
			}
			//沒找到
			if (p == nullptr)
				return nullptr;

			//如果找到了
			if (p->left == nullptr && p->right == nullptr)	//leaf
			{
				if (father->left == p)
					father->left = nullptr;
				else
					father->right = nullptr;
				free(p);
			}
			else if (p->left != nullptr) 	//左邊有子樹
			{
				node* k = p->left, *k_father = k;
				while (k->right != nullptr)
				{
					k_father = k;
					k = k->right;
				}
				k_father->right = k->left;
				
				if (father->left == p)
					father->left = k;	
				else
					father->right = k;
				k->left = p->left;
				k->right = p->right;
				free(p);
			}
			else
			{
				node* k = p->right, * k_father = k;
				while (k->left != nullptr)
				{
					k_father = k;
					k = k->left;
				}
				k_father->left = k->right;

				if (father->left == p)
					father->left = k;
				else
					father->right = k;
				k->left = p->left;
				k->right = p->right;
				free(p);
			}

		}

		bool re_search(int element, node* p)
		{
			if (p == nullptr)
				return false;
			else if (p->data == element)
				return true;
			else if (p->data < element)
				return re_search(element, p->right);
			else
				return re_search(element, p->left);
		}


		bool non_search(int element, node* p)
		{
			while (p != nullptr)
			{
				if (p->data == element)
					break;
				else if (p->data < element)
					p = p->right;
				else
					p = p->left;
			}
			if (p == nullptr)
				return false;
			return true;
		}

		void AddQueue(node* p)
		{
			queue_node* q = new queue_node;
			q->data = p;
			q->next = nullptr;
			if (front == nullptr)
			{
				front = q;
				rear = q;
				return;
			}
			rear->next = q;
			rear = q;
		}

		node* DeleteQ()
		{
			node* result = front->data;
			queue_node* q = front;
			front = front->next;
			free(q);
			return result;
		}

		String^ LevelOrder(node* p)
		{
			String^ str = "";
			if (p != nullptr)
			{
				AddQueue(p);
				node* q;
				while (front != nullptr)
				{
					q = DeleteQ();
					str += q->data + " ";
					if (q->left != nullptr)
						AddQueue(q->left);
					if (q->right != nullptr)
						AddQueue(q->right);
				}
			}
			return str;
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//recurssively find and insert

		int element = Convert::ToInt64(textBox1->Text);
		node* p = NewNode(element);
		if (re_root == nullptr)	//代表插入的是第一個
			re_root = p;
		else
			re_insert(p, re_root);
		listBox1->Items->Add(element + " has been inserted!");

		//nonrecurssive
		node* q = NewNode(element);
		if (non_root == nullptr)	//代表插入的是第一個
			non_root = q;
		else
			non_insert(q, non_root);
		listBox2->Items->Add(element + " has been inserted!");
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//print sequences

		String^ str = "";
		if (checkBox1->Checked)	//infix
		{
			str = "";
			str = re_infix(re_root, str);
			listBox1->Items->Add("Infix: " + str);

			str = "";
			str = non_infix(non_root, str);
			listBox2->Items->Add("Infix: " + str);
		}

		if (checkBox2->Checked)	//prefix
		{
			str = "";
			str = re_prefix(re_root, str);
			listBox1->Items->Add("Prefix: " + str);

			str = "";
			str = non_prefix(non_root, str);
			listBox2->Items->Add("Prefix: " + str);
		}

		if (checkBox3->Checked)	//postfix
		{
			str = "";
			str = re_postfix(re_root, str);
			listBox1->Items->Add("Postfix: " + str);

			str = "";
			str = non_postfix(non_root, str);
			listBox2->Items->Add("Postfix: " + str);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//random insert

		srand(time(nullptr));
		int numbers = Convert::ToInt64(textBox2->Text);
		int element;
		node* p, *q;

		for (int i = 0; i < numbers; i++)	
		{
			element = rand() % (Convert::ToInt64(textBox3->Text));

			//recurrsive
			p = NewNode(element);		
			if (re_root == nullptr)
				re_root = p;
			else
				re_insert(p, re_root);
			listBox1->Items->Add(element + " has been inserted!");

			//nonrecurrsive
			q = NewNode(element);
			if (non_root == nullptr)
				non_root = q;
			else
				non_insert(q, non_root);
			listBox2->Items->Add(element + " has been inserted!");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//delete

		//recurrsive
		int element = Convert::ToInt64(textBox1->Text);
		deleted = false;
		node* p = re_DeleteElement(re_root, element);
		if (deleted == true)
			listBox1->Items->Add(element + " has been deleted!");
		else
			listBox1->Items->Add(element + " is not in BST!");
		deleted = false;

		//nonrecurrsive
		node* q = non_DeleteElement(element);
		listBox2->Items->Add(element + " has been deleted!");

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//search

		int element = Convert::ToInt64(textBox1->Text);
		
		//recurrsive
		bool result = re_search(element, re_root);
		if (result)
			listBox1->Items->Add(element + " is in the BST!");
		else
			listBox1->Items->Add(element + " is NOT in the BST!");

		//nonrecurrsive
		result = non_search(element, non_root);
		if (result)
			listBox2->Items->Add(element + " is in the BST!");
		else
			listBox2->Items->Add(element + " is NOT in the BST!");
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//levelorder

		String^ str = "";
		str = LevelOrder(re_root);
		listBox1->Items->Add("Level order:" + str);
		listBox2->Items->Add("Level order:" + str);
	}
};
}
