#include<stdio.h>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
#pragma once

struct offset
{
	int x, y;
};
enum direction {N, NE, E, SE, S, SW, W, NW};
struct position
{
	int x, y;
	direction dir;
};
int** maze;
int top, stack_size;
position* stack = nullptr;
int height = 0, width = 0;
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ Load_Maze;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ Save_Maze;
	private: System::Windows::Forms::Button^ GenerateMaze;
	private: System::Windows::Forms::Button^ FindTour;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->Load_Maze = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->Save_Maze = (gcnew System::Windows::Forms::Button());
			this->GenerateMaze = (gcnew System::Windows::Forms::Button());
			this->FindTour = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Location = System::Drawing::Point(16, 17);
			this->listBox1->Name = L"listBox1";
			this->listBox1->ScrollAlwaysVisible = true;
			this->listBox1->Size = System::Drawing::Size(970, 454);
			this->listBox1->TabIndex = 0;
			// 
			// Load_Maze
			// 
			this->Load_Maze->Location = System::Drawing::Point(12, 173);
			this->Load_Maze->Name = L"Load_Maze";
			this->Load_Maze->Size = System::Drawing::Size(134, 40);
			this->Load_Maze->TabIndex = 1;
			this->Load_Maze->Text = L"Load Maze";
			this->Load_Maze->UseVisualStyleBackColor = true;
			this->Load_Maze->Click += gcnew System::EventHandler(this, &Form1::Load_Maze_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(166, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(939, 520);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(931, 491);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Memo Maze";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(931, 491);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Grid Maze";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(22, 15);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(959, 461);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->dataGridView5);
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(931, 491);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Colored Maze";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(15, 13);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 27;
			this->dataGridView5->Size = System::Drawing::Size(959, 463);
			this->dataGridView5->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->listBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(931, 491);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Mouse Maze";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 15;
			this->listBox2->Location = System::Drawing::Point(20, 12);
			this->listBox2->Name = L"listBox2";
			this->listBox2->ScrollAlwaysVisible = true;
			this->listBox2->Size = System::Drawing::Size(900, 469);
			this->listBox2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->dataGridView2);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(931, 491);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Grid Mouse";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(11, 13);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 27;
			this->dataGridView2->Size = System::Drawing::Size(909, 461);
			this->dataGridView2->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->dataGridView3);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(931, 491);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Mouse in Color Grid";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(14, 13);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 27;
			this->dataGridView3->Size = System::Drawing::Size(906, 463);
			this->dataGridView3->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dataGridView4);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(931, 491);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"animation";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(13, 14);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 27;
			this->dataGridView4->Size = System::Drawing::Size(906, 458);
			this->dataGridView4->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(80, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 25);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 15);
			this->label1->TabIndex = 5;
			this->label1->Text = L"width";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"height";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(80, 68);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(66, 25);
			this->textBox2->TabIndex = 7;
			// 
			// Save_Maze
			// 
			this->Save_Maze->Location = System::Drawing::Point(12, 231);
			this->Save_Maze->Name = L"Save_Maze";
			this->Save_Maze->Size = System::Drawing::Size(134, 40);
			this->Save_Maze->TabIndex = 8;
			this->Save_Maze->Text = L"Save Maze";
			this->Save_Maze->UseVisualStyleBackColor = true;
			this->Save_Maze->Click += gcnew System::EventHandler(this, &Form1::Save_Maze_Click);
			// 
			// GenerateMaze
			// 
			this->GenerateMaze->Location = System::Drawing::Point(12, 113);
			this->GenerateMaze->Name = L"GenerateMaze";
			this->GenerateMaze->Size = System::Drawing::Size(134, 40);
			this->GenerateMaze->TabIndex = 9;
			this->GenerateMaze->Text = L"Generate Maze";
			this->GenerateMaze->UseVisualStyleBackColor = true;
			this->GenerateMaze->Click += gcnew System::EventHandler(this, &Form1::GenerateMaze_Click);
			// 
			// FindTour
			// 
			this->FindTour->BackColor = System::Drawing::Color::Silver;
			this->FindTour->Location = System::Drawing::Point(12, 287);
			this->FindTour->Name = L"FindTour";
			this->FindTour->Size = System::Drawing::Size(134, 40);
			this->FindTour->TabIndex = 10;
			this->FindTour->Text = L"Find a Tour";
			this->FindTour->UseVisualStyleBackColor = false;
			this->FindTour->Click += gcnew System::EventHandler(this, &Form1::FindTour_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 349);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Animation";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::animation_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(12, 436);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(134, 56);
			this->trackBar1->TabIndex = 12;
			this->trackBar1->Value = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 408);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 15);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Speed";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 463);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 15);
			this->label4->TabIndex = 14;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(132, 463);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(14, 15);
			this->label5->TabIndex = 15;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(118, 495);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 15);
			this->label6->TabIndex = 16;
			this->label6->Text = L"fastest";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 495);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 15);
			this->label7->TabIndex = 17;
			this->label7->Text = L"slowest";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1118, 534);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->FindTour);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->GenerateMaze);
			this->Controls->Add(this->Save_Maze);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->Load_Maze);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void CreateMaze()
	{
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				maze[i][j] = int::Parse(dataGridView1->Rows[i]->Cells[j]->Value->ToString());
			}
		}
	}

	void push(position step)
	{
		top++;
		stack[top] = step;
	}

	position pop()
	{
		position temp;
		if (top == -1)
		{
			temp = { -1, -1, N };
			top--;
			return temp;
		}
		else
		{
			top--;
			return stack[top + 1];
		}
	}

	void DrawAnswerMaze()
	{
		String^ str = "";
		listBox2->Items->Add("width: " + (width - 2) + " height: " + (height - 2));
		for (int i = 0; i < height; i++)
		{
			str = "";
			for (int j = 0; j < width; j++)
			{
				str += Convert::ToString(maze[i][j]) + " ";
			}
			listBox2->Items->Add(str);
		}
		dataGridView2->Rows->Clear();	//清空數據
		dataGridView2->Refresh();
		dataGridView2->RowCount = height + 1;
		dataGridView2->ColumnCount = width;
		dataGridView2->ColumnHeadersVisible = false;
		dataGridView2->RowHeadersVisible = false;
		dataGridView2->AllowUserToAddRows = false; 
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (maze[i][j] == 3)
					dataGridView2->Rows[i]->Cells[j]->Value = "@";
				else
					dataGridView2->Rows[i]->Cells[j]->Value = maze[i][j];
			}
		}

		dataGridView3->Rows->Clear();
		dataGridView3->Refresh();
		dataGridView3->RowCount = height + 1;
		dataGridView3->ColumnCount = width;
		dataGridView3->ColumnHeadersVisible = false;
		dataGridView3->RowHeadersVisible = false;
		dataGridView3->AllowUserToAddRows = false;
		for (int i = 0; i < height; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if (maze[i][j] == 3)
				{
					dataGridView3->Rows[i]->Cells[j]->Value = "@";
					dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::LightYellow;
				}
				else if (maze[i][j] == 1)
					dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::DarkGray;
				else if (maze[i][j] == 2)
					dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::Brown;
				else
					dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::LightYellow;
			}
		}
	}

	private: System::Void Load_Maze_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
			String^ firstLine = reader->ReadLine(); // 一次讀檔案中的一行
			cli::array<String^>^ width_and_height = firstLine->Split(' ');
			width = int::Parse(width_and_height[0]) + 2;
			height = int::Parse(width_and_height[1]) + 2;
			int maxsize = width * height / 2;
			textBox1->Text = width_and_height[0];
			textBox2->Text = width_and_height[1];
			
			maze = new int* [height];
			for (int i = 0; i < height; i++)
			{
				maze[i] = new int[width];
			}

			for (int i = 1; i < height - 1; i++)
			{
				cli::array<String^>^ maze_content = reader->ReadLine()->Split(' ');
				for (int j = 1; j < width - 1; j++)
				{
					maze[i][j] = int::Parse(maze_content[j-1]);
				}
			}
			for (int i = 0; i < width; i++)	//建立maze的圍牆
			{
				maze[0][i] = 2;
				maze[height - 1][i] = 2;
			}
			for (int i = 1; i < height - 1; i++)
			{
				maze[i][0] = 2;
				maze[i][width - 1] = 2;
			}
			maze[1][0] = 0;
			maze[height - 2][width - 1] = 0;
			dataGridView1->Rows->Clear();
			dataGridView1->Refresh();
			dataGridView1->RowCount = height + 1; // 要多加 1，不然他會IndexOutOfRange，可能是dataGridView本身的設定問題
			dataGridView1->ColumnCount = width;
			dataGridView1->ColumnHeadersVisible = false; // 隱藏columns
			dataGridView1->RowHeadersVisible = false; // 隱藏index
			dataGridView1->AllowUserToAddRows = false; // 去掉最後一行空白行

			dataGridView5->Rows->Clear();
			dataGridView5->Refresh();
			dataGridView5->RowCount = height + 1; 
			dataGridView5->ColumnCount = width;
			dataGridView5->ColumnHeadersVisible = false; 
			dataGridView5->RowHeadersVisible = false;
			dataGridView5->AllowUserToAddRows = false; 

			
			//show on grid maze
			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++)
				{
					dataGridView1->Rows[i]->Cells[j]->Value = maze[i][j];
				}
			}
			//show on listbox1
			String^ str;
			listBox1->Items->Add("width: " + (width - 2) + " height: " + (height - 2));
			for (int i = 0; i < height; i++)
			{
				str = "";
				for (int j = 0; j < width; j++)
				{
					str += (Convert::ToString(maze[i][j]) + " ");
				}
				listBox1->Items->Add(str);
			}
			listBox1->Items->Add(" ");
			//show on colored maze
			for (int i = 0; i < height; i++)
			{
				for (int j = 0; j < width; j++)
				{
					if (maze[i][j] == 1)
						dataGridView5->Rows[i]->Cells[j]->Style->BackColor = Color::DarkGray;
					else if (maze[i][j] == 2)
						dataGridView5->Rows[i]->Cells[j]->Style->BackColor = Color::Brown;
					else
						dataGridView5->Rows[i]->Cells[j]->Style->BackColor = Color::LightYellow;
				}
			}
		}
	}
		   // 存檔
	private: System::Void Save_Maze_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		StreamReader^ reader = gcnew StreamReader(openFileDialog1->FileName);
		String^ firstLine = reader->ReadLine();

		cli::array<String^>^ width_and_height = firstLine->Split(' ');
		textBox1->Text = width_and_height[0];
		textBox2->Text = width_and_height[1];
		width = int::Parse(width_and_height[0]);
		height = int::Parse(width_and_height[1]);

		// 讓系統知道存放路徑
		try
		{
			StreamWriter^ writer = gcnew StreamWriter(Directory::GetCurrentDirectory() + "- output.txt");
			// 第一行先填入width和height

			String^ firstLine = width + " " + height;
			writer->WriteLine(firstLine);

			// 填入迷宮內容

			for (int i = 1; i < dataGridView1->RowCount - 2; i++)
			{
				String^ outputString = "";
				for (int j = 1; j < dataGridView1->ColumnCount - 1; j++)
				{
					outputString += dataGridView1->Rows[i]->Cells[j]->Value + " ";
				}
				writer->WriteLine(outputString);
			}

			// 寫完記得關檔
			writer->Close();
			MessageBox::Show("Save successfully !");
		}
		catch (Exception^ e)
		{
			MessageBox::Show("Save failed !");
		}
	}

	bool NextMove(int x, int y)
	{
		if ((y + 2 < height) && maze[y + 2][x] == 1)
			return true;
		else if ((y - 2 > 0) && maze[y - 2][x] == 1)
			return true;
		else if ((x + 2 < width) && maze[y][x + 2] == 1)
			return true;
		else if ((x - 2 > 0) && maze[y][x - 2] == 1)
			return true;
		return false;
	}

private: System::Void GenerateMaze_Click(System::Object^ sender, System::EventArgs^ e) 
{
	width = int::Parse(textBox1->Text) + 2;
	height = int::Parse(textBox2->Text) + 2;
	maze = new int* [height];
	for (int i = 0; i < height; i++) //建立空maze
	{
		maze[i] = new int[width];
		for (int j = 1; j < width - 1; j++)
		{
			maze[i][j] = 1;
		}
	}
	for (int i = 0; i < width; i++)	//建立maze的圍牆
	{
		maze[0][i] = 2;
		maze[height - 1][i] = 2;
	}
	for (int i = 1; i < height - 1; i++)
	{
		maze[i][0] = 2;
		maze[i][width - 1] = 2;
	}
	maze[1][0] = 0;
	maze[height - 2][width - 1] = 0;

	dataGridView1->Rows->Clear();
	dataGridView1->Refresh();
	dataGridView1->RowCount = height + 1; 
	dataGridView1->ColumnCount = width;
	dataGridView1->ColumnHeadersVisible = false; 
	dataGridView1->RowHeadersVisible = false; 
	dataGridView1->AllowUserToAddRows = false; 

	dataGridView5->Rows->Clear();
	dataGridView5->Refresh();
	dataGridView5->RowCount = height + 1;
	dataGridView5->ColumnCount = width;
	dataGridView5->ColumnHeadersVisible = false;
	dataGridView5->RowHeadersVisible = false;
	dataGridView5->AllowUserToAddRows = false;

	//開始generate maze
	if (stack != nullptr)
		delete[] stack;
	stack = new position[width*height];
	offset move[8];
	move[N] = { 0, -2 };
	move[NE] = { 1, -1 };
	move[E] = { 2, 0 };
	move[SE] = { 1, 1 };
	move[S] = { 0, 2 };
	move[SW] = { -1, 1 };
	move[W] = { -2, 0 };
	move[NW] = { -1, -1 };
	
	srand(time(NULL));
	top = -1;
	position step;
	direction nextdir = direction::N;
	offset current = { 1, 1 };
	if (width % 2 == 0)
	{
		current.x += 1;
		maze[current.y][current.x] = 0;
	}
	if (height % 2 == 0)
	{
		current.y += 1;
		maze[current.y][current.x] = 0;
	}
	step = { current.x, current.y, nextdir };
	push(step);
	
	maze[1][1] = 0;

	while (top != -1)
	{
		step = pop();
		current = { step.x, step.y };
		
		while (NextMove(current.x, current.y))
		{
			nextdir = static_cast<direction> ((rand() % 4) * 2);	//*2是為了限制方向只有東西南北
			step = { current.x + move[nextdir].x, current.y + move[nextdir].y, nextdir};
			if ((step.x < width) && (step.x > 0) && (step.y < height) && (step.y > 0))
			{
				if (maze[current.y + move[nextdir].y / 2][current.x + move[nextdir].x / 2] == 1)
					if (maze[step.y][step.x] == 1)
					{
						push(step);
						maze[current.y + ((move[nextdir].y) / 2)][current.x + ((move[nextdir].x) / 2)] = 0;
						maze[step.y][step.x] = 0;
						current = { step.x, step.y };
					}
			}
		}
	}
	maze[height - 2][width - 1] = 0;
	maze[height - 2][width - 2] = 0;
	//for even numbers
	if (width % 2 == 0)
	{
		for (int i = 2; i < width - 2; i++)
		{
			if ((maze[i][2] == 0) && (maze[i][1] == 1))
			{
				maze[i][1] = rand() % 2;
			}
		}
	}
	if (height % 2 == 0)
	{
		for (int i = 2; i < height - 2; i++)
		{
			if ((maze[2][i] == 0) && (maze[1][i] == 1))
			{
				maze[1][i] = rand() % 2;
			}
		}
	}


	//show on listbox 1
	String^ str;
	listBox1->Items->Add("width: " + (width - 2) + " height: " + (height - 2));
	for (int i = 0; i < height; i++)
	{
		str = "";
		for (int j = 0; j < width; j++)
		{
			str += (Convert::ToString(maze[i][j]) + " ");
		}
		listBox1->Items->Add(str);
	}
	listBox1->Items->Add(" ");
	//show on grid maze
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			dataGridView1->Rows[i]->Cells[j]->Value = maze[i][j];
		}
	}
	//show on colored maze
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			 if (maze[i][j] == 1)
				dataGridView5->Rows[i]->Cells[j]->Style->BackColor = Color::DarkGray;
			else if (maze[i][j] == 2)
				dataGridView5->Rows[i]->Cells[j]->Style->BackColor = Color::Brown;
			else
				dataGridView5->Rows[i]->Cells[j]->Style->BackColor = Color::LightYellow;
		}
	}
	delete[] stack;
	stack = nullptr;
	for (int i = 0; i < height; i++)
	{
		delete maze[i];
	}
	delete[] maze;
}
private: System::Void FindTour_Click(System::Object^ sender, System::EventArgs^ e) 
{
	width = int::Parse(textBox1->Text) + 2;
	height = int::Parse(textBox2->Text) + 2;
	if (stack != nullptr)
		delete[] stack;
	stack = new position[width*height];
	offset move[8];
	move[N] = { 0, -1 };
	move[NE] = { 1, -1 };
	move[E] = { 1, 0 };
	move[SE] = { 1, 1 };
	move[S] = { 0, 1 };
	move[SW] = { -1, 1 };
	move[W] = { -1, 0 };
	move[NW] = { -1, -1 };

	maze = new int* [height];
	for (int i = 0; i < height; i++)
	{
		maze[i] = new int[width];
	}
	CreateMaze();

	int** mark = new int* [height];
	for (int i = 0; i < height; i++)
	{
		mark[i] = new int[width];
	}
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			mark[i][j] = maze[i][j];
		}
	}

	top = -1;
	position step;
	step = { 1, 1, N };
	push(step);
	direction nextdir = direction::N;
	offset current = { 1, 1 };
	mark[height - 2][width - 1] = 3;
	bool found = false;

	while (top != -1)
	{
		step = pop();
		current.x = step.x;
		current.y = step.y;
		nextdir = step.dir;
		while (nextdir <= direction::NW)
		{
			step = { current.x + move[nextdir].x, current.y + move[nextdir].y, nextdir };
			if ((step.y > 0) && (step.y < height) && (step.x > 0) && (step.x < width))
			{
				if ((mark[step.y][step.x] == 0) && (maze[step.y][step.x] == 0))
				{
					mark[step.y][step.x] = 1;
					step.x = current.x;
					step.y = current.y;
					step.dir = static_cast<direction>(static_cast<int>(step.dir) + 1);
					push(step);
					current.x += move[nextdir].x;
					current.y += move[nextdir].y;
					nextdir = direction::N;
					//如果找到出口了
					if ((current.x == width - 2) && (current.y == height - 2))
					{
						step.x = current.x;
						step.y = current.y;
						push(step);
						stack_size = top;
						while (top != -1)
						{
							step = pop();
							mark[step.y][step.x] = 3;
						}
						maze[1][0] = 3;
						maze[1][1] = 3;
						for (int i = 0; i < height; i++)
						{
							for (int j = 0; j < width; j++)
							{
								if (mark[i][j] == 3)
									maze[i][j] = 3;
							}
						}
						DrawAnswerMaze();
						found = true;
						break;
					}
					continue;
				}
			}
			nextdir = static_cast<direction>(static_cast<int>(nextdir) + 1);
		}
	}
	if (found == false)
	{
		System::Windows::Forms::MessageBox::Show("No Solution! Please check the maze again.", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	for (int i = 0; i < height; i++)
	{
		delete[] maze[i];
		delete[] mark[i];
	}
	delete[] maze;
	delete[] mark;
}
private: System::Void animation_Click(System::Object^ sender, System::EventArgs^ e) 
{
	tabControl1->SelectedTab = tabPage6;
	dataGridView4->Rows->Clear();
	dataGridView4->Refresh();
	dataGridView4->RowCount = height + 1;
	dataGridView4->ColumnCount = width;
	dataGridView4->ColumnHeadersVisible = false;
	dataGridView4->RowHeadersVisible = false;
	dataGridView4->AllowUserToAddRows = false;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			dataGridView4->Rows[i]->Cells[j]->Style->BackColor = dataGridView5->Rows[i]->Cells[j]->Style->BackColor;
		}
	}
	dataGridView4->Refresh();
	float stop = (10 - trackBar1->Value) * 500;
	dataGridView4->FirstDisplayedScrollingColumnIndex = 0;
	for (int i = 0; i < stack_size; i++)
	{
		System::Threading::Thread::Sleep(stop);
		dataGridView4->Rows[stack[i].y]->Cells[stack[i].x]->Value = "@";
		dataGridView4->Refresh();
	}
	System::Threading::Thread::Sleep(stop);
	dataGridView4->Rows[height - 2]->Cells[width - 1]->Value = "@";
	dataGridView4->Refresh();
}
};

}
