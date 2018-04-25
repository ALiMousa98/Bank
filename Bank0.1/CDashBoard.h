#pragma once

namespace Bank01 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CDashBoard
	/// </summary>
	public ref class CDashBoard : public System::Windows::Forms::Form
	{
	public:
		CDashBoard(void)
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
		~CDashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  CDBTopBar;
	private: System::Windows::Forms::Button^  CDBExit;
	private: System::Windows::Forms::Panel^  CDBMAIN;
	private: System::Windows::Forms::Panel^  CDBSidePanel;

	private: System::Windows::Forms::Panel^  CDBHR;
	private: System::Windows::Forms::Button^  CDBADDAccount;
	private: System::Windows::Forms::Panel^  CDBLine;


	private: System::Windows::Forms::FlowLayoutPanel^  CDBAccountsList;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ComboBox^  CDBAccountType;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  CDBATlabel;
	private: System::Windows::Forms::TextBox^  CDBBlance;
	private: System::Windows::Forms::TextBox^  CDBDuration;
	private: System::Windows::Forms::Label^  CDBlabel;
	private: System::Windows::Forms::Button^  CDBAccountSave;
	private: System::Windows::Forms::Panel^  CDBAccountDetails;









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
			this->CDBTopBar = (gcnew System::Windows::Forms::Panel());
			this->CDBExit = (gcnew System::Windows::Forms::Button());
			this->CDBMAIN = (gcnew System::Windows::Forms::Panel());
			this->CDBSidePanel = (gcnew System::Windows::Forms::Panel());
			this->CDBAccountsList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->CDBLine = (gcnew System::Windows::Forms::Panel());
			this->CDBHR = (gcnew System::Windows::Forms::Panel());
			this->CDBADDAccount = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->CDBATlabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CDBAccountType = (gcnew System::Windows::Forms::ComboBox());
			this->CDBBlance = (gcnew System::Windows::Forms::TextBox());
			this->CDBDuration = (gcnew System::Windows::Forms::TextBox());
			this->CDBlabel = (gcnew System::Windows::Forms::Label());
			this->CDBAccountSave = (gcnew System::Windows::Forms::Button());
			this->CDBAccountDetails = (gcnew System::Windows::Forms::Panel());
			this->CDBTopBar->SuspendLayout();
			this->CDBMAIN->SuspendLayout();
			this->CDBSidePanel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// CDBTopBar
			// 
			this->CDBTopBar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->CDBTopBar->Controls->Add(this->CDBExit);
			this->CDBTopBar->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBTopBar->Location = System::Drawing::Point(0, 0);
			this->CDBTopBar->Name = L"CDBTopBar";
			this->CDBTopBar->Size = System::Drawing::Size(831, 39);
			this->CDBTopBar->TabIndex = 0;
			// 
			// CDBExit
			// 
			this->CDBExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->CDBExit->Cursor = System::Windows::Forms::Cursors::Default;
			this->CDBExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->CDBExit->FlatAppearance->BorderSize = 0;
			this->CDBExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBExit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CDBExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(222)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(222)));
			this->CDBExit->Location = System::Drawing::Point(773, 0);
			this->CDBExit->Name = L"CDBExit";
			this->CDBExit->Size = System::Drawing::Size(58, 39);
			this->CDBExit->TabIndex = 0;
			this->CDBExit->Text = L"X";
			this->CDBExit->UseVisualStyleBackColor = false;
			this->CDBExit->Click += gcnew System::EventHandler(this, &CDashBoard::CDBExit_Click);
			// 
			// CDBMAIN
			// 
			this->CDBMAIN->Controls->Add(this->panel1);
			this->CDBMAIN->Controls->Add(this->CDBSidePanel);
			this->CDBMAIN->Dock = System::Windows::Forms::DockStyle::Fill;
			this->CDBMAIN->Location = System::Drawing::Point(0, 39);
			this->CDBMAIN->Name = L"CDBMAIN";
			this->CDBMAIN->Size = System::Drawing::Size(831, 477);
			this->CDBMAIN->TabIndex = 1;
			// 
			// CDBSidePanel
			// 
			this->CDBSidePanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->CDBSidePanel->Controls->Add(this->CDBAccountsList);
			this->CDBSidePanel->Controls->Add(this->CDBLine);
			this->CDBSidePanel->Controls->Add(this->CDBHR);
			this->CDBSidePanel->Controls->Add(this->CDBADDAccount);
			this->CDBSidePanel->Dock = System::Windows::Forms::DockStyle::Left;
			this->CDBSidePanel->Location = System::Drawing::Point(0, 0);
			this->CDBSidePanel->Name = L"CDBSidePanel";
			this->CDBSidePanel->Size = System::Drawing::Size(264, 477);
			this->CDBSidePanel->TabIndex = 0;
			this->CDBSidePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CDashBoard::panel1_Paint);
			// 
			// CDBAccountsList
			// 
			this->CDBAccountsList->AutoScroll = true;
			this->CDBAccountsList->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBAccountsList->Location = System::Drawing::Point(0, 53);
			this->CDBAccountsList->Name = L"CDBAccountsList";
			this->CDBAccountsList->Size = System::Drawing::Size(264, 421);
			this->CDBAccountsList->TabIndex = 5;
			// 
			// CDBLine
			// 
			this->CDBLine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(90)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->CDBLine->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBLine->Location = System::Drawing::Point(0, 52);
			this->CDBLine->Name = L"CDBLine";
			this->CDBLine->Size = System::Drawing::Size(264, 1);
			this->CDBLine->TabIndex = 4;
			// 
			// CDBHR
			// 
			this->CDBHR->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBHR->Location = System::Drawing::Point(0, 49);
			this->CDBHR->Name = L"CDBHR";
			this->CDBHR->Size = System::Drawing::Size(264, 3);
			this->CDBHR->TabIndex = 3;
			// 
			// CDBADDAccount
			// 
			this->CDBADDAccount->BackColor = System::Drawing::Color::Transparent;
			this->CDBADDAccount->Dock = System::Windows::Forms::DockStyle::Top;
			this->CDBADDAccount->FlatAppearance->BorderSize = 0;
			this->CDBADDAccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBADDAccount->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->CDBADDAccount->Location = System::Drawing::Point(0, 0);
			this->CDBADDAccount->Name = L"CDBADDAccount";
			this->CDBADDAccount->Size = System::Drawing::Size(264, 49);
			this->CDBADDAccount->TabIndex = 2;
			this->CDBADDAccount->Text = L"ADD NEW ACCOUNT";
			this->CDBADDAccount->UseVisualStyleBackColor = false;
			this->CDBADDAccount->Click += gcnew System::EventHandler(this, &CDashBoard::CDBADDAccount_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->CDBAccountDetails);
			this->panel1->Controls->Add(this->CDBAccountSave);
			this->panel1->Controls->Add(this->CDBDuration);
			this->panel1->Controls->Add(this->CDBlabel);
			this->panel1->Controls->Add(this->CDBBlance);
			this->panel1->Controls->Add(this->CDBAccountType);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->CDBATlabel);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->panel1->Location = System::Drawing::Point(261, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(570, 477);
			this->panel1->TabIndex = 2;
			// 
			// CDBATlabel
			// 
			this->CDBATlabel->AutoSize = true;
			this->CDBATlabel->Location = System::Drawing::Point(74, 51);
			this->CDBATlabel->Name = L"CDBATlabel";
			this->CDBATlabel->Size = System::Drawing::Size(133, 16);
			this->CDBATlabel->TabIndex = 0;
			this->CDBATlabel->Text = L"Choose Account Type :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(74, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Blance :";
			// 
			// CDBAccountType
			// 
			this->CDBAccountType->FormattingEnabled = true;
			this->CDBAccountType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Saving Account", L"Credit Account", L"Loan Account" });
			this->CDBAccountType->Location = System::Drawing::Point(319, 43);
			this->CDBAccountType->Name = L"CDBAccountType";
			this->CDBAccountType->Size = System::Drawing::Size(209, 24);
			this->CDBAccountType->TabIndex = 2;
			// 
			// CDBBlance
			// 
			this->CDBBlance->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->CDBBlance->Location = System::Drawing::Point(319, 106);
			this->CDBBlance->Name = L"CDBBlance";
			this->CDBBlance->Size = System::Drawing::Size(209, 23);
			this->CDBBlance->TabIndex = 3;
			this->CDBBlance->TextChanged += gcnew System::EventHandler(this, &CDashBoard::textBox1_TextChanged);
			// 
			// CDBDuration
			// 
			this->CDBDuration->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->CDBDuration->Location = System::Drawing::Point(319, 173);
			this->CDBDuration->Name = L"CDBDuration";
			this->CDBDuration->Size = System::Drawing::Size(209, 23);
			this->CDBDuration->TabIndex = 5;
			// 
			// CDBlabel
			// 
			this->CDBlabel->AutoSize = true;
			this->CDBlabel->Location = System::Drawing::Point(74, 177);
			this->CDBlabel->Name = L"CDBlabel";
			this->CDBlabel->Size = System::Drawing::Size(60, 16);
			this->CDBlabel->TabIndex = 4;
			this->CDBlabel->Text = L"Duration :";
			// 
			// CDBAccountSave
			// 
			this->CDBAccountSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->CDBAccountSave->FlatAppearance->BorderSize = 0;
			this->CDBAccountSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CDBAccountSave->Location = System::Drawing::Point(394, 332);
			this->CDBAccountSave->Name = L"CDBAccountSave";
			this->CDBAccountSave->Size = System::Drawing::Size(134, 40);
			this->CDBAccountSave->TabIndex = 6;
			this->CDBAccountSave->Text = L"SAVE";
			this->CDBAccountSave->UseVisualStyleBackColor = false;
			// 
			// CDBAccountDetails
			// 
			this->CDBAccountDetails->Dock = System::Windows::Forms::DockStyle::Right;
			this->CDBAccountDetails->Location = System::Drawing::Point(-1, 0);
			this->CDBAccountDetails->Name = L"CDBAccountDetails";
			this->CDBAccountDetails->Size = System::Drawing::Size(569, 475);
			this->CDBAccountDetails->TabIndex = 7;
			// 
			// CDashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(831, 516);
			this->Controls->Add(this->CDBMAIN);
			this->Controls->Add(this->CDBTopBar);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"CDashBoard";
			this->Text = L"CDashBoard";
			this->CDBTopBar->ResumeLayout(false);
			this->CDBMAIN->ResumeLayout(false);
			this->CDBSidePanel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void CDBExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}



private: System::Void CDBAddAcount(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void CDBSideBar_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void CDBADDAccount_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
