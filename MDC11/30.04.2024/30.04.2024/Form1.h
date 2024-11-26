#pragma once

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

	private: System::Windows::Forms::TextBox^ afisaj;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ egal;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ adunare;

	private: System::Windows::Forms::Button^ scadere;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		double numar;
		char operatie;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
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
			this->egal = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Location = System::Drawing::Point(269, 21);
			this->afisaj->Multiline = true;
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(318, 111);
			this->afisaj->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(269, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(350, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 43);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(431, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 43);
			this->button3->TabIndex = 4;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(269, 204);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 43);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(350, 204);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 43);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(431, 204);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 43);
			this->button6->TabIndex = 7;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(269, 253);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 43);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(350, 253);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 43);
			this->button8->TabIndex = 9;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(431, 253);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 43);
			this->button9->TabIndex = 10;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(269, 302);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 43);
			this->button10->TabIndex = 11;
			this->button10->Text = L"CLR";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// egal
			// 
			this->egal->Location = System::Drawing::Point(430, 302);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(75, 43);
			this->egal->TabIndex = 12;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = true;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(350, 302);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 43);
			this->button12->TabIndex = 13;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(512, 204);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 43);
			this->button13->TabIndex = 14;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(512, 157);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 43);
			this->button14->TabIndex = 15;
			this->button14->Text = L"*";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// adunare
			// 
			this->adunare->Location = System::Drawing::Point(512, 253);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(75, 43);
			this->adunare->TabIndex = 16;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = true;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// scadere
			// 
			this->scadere->Location = System::Drawing::Point(511, 302);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(75, 43);
			this->scadere->TabIndex = 17;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = true;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1175, 454);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->egal);
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
			this->Controls->Add(this->afisaj);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { 
		afisaj->Text +="4";
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { 
	afisaj->Text +="1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { 
	afisaj->Text +="2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) { 
	afisaj->Text +="3";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) { 
	afisaj->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "9";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "0";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Clear();
}
private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty)
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))			{
			int stocare = numar;
			afisaj->Text = "";
			operatie = '+';
		}
		else
		{
			MessageBox::Show("Introdu un numar valid", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	else
	{
		MessageBox::Show("Introdu o valoare inainte de a efectua adunarea", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error)
	}
private: System::Void scadere_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (double::TryParse(afisaj->Text, numar))
		{
			int stocare = numar;
			afisaj->Text = " ";
			operatie = '-';
		}
		else
		{
			MessageBox::Show("Introdu un numar valid", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	else
    {
		MessageBox::Show("Introdu o valoare inainte de a efectua scaderea", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error)
    }
private: System::Void egal_Click(System::Object ^ sender, System::EventArgs ^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text)) {
		double numar;
		if (Double::TryParse(afisaj->Text, numar)) {
			double rezultat;
			switch (operatie) {
			case '+':
				rezultat = stocare + numar;
				break;
			case '-':
				rezultat = stocare - numar;
				break;
			case '*':
				rezultat = stocare * numar;
				break;
			case'/':
				if (numar != 0) {
					rezultat = stocare / numar;
				}
				else {
					MessageBox::Show("Nu se poate imparti la zero!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error)
						return;
				}
				break;
			default:
				MessageBox::Show("Operatie nedefinita", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Error)
					return;
			}
			afisaj->Text = rezultat.ToString();
			stocare = 0;
}
		private: System::Void button16_Click(System::Object ^ sender, System::EventArgs ^ e) {
		}
		private: System::Void button11_Click(System::Object ^ sender, System::EventArgs ^ e) {
		}
		}
	}
