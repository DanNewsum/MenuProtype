#pragma once
#include <map>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for chipolteCheckout
	/// </summary>
	public ref class chipolteCheckout : public System::Windows::Forms::Form
	{
	public:
		chipolteCheckout(double quesadillaValueCount, double burritoValueCount, double nachoValueCount, double drinkValueCount)
		{
			InitializeComponent();

			// Create a Dictionary to store the prices of each item
			System::Collections::Generic::Dictionary<System::String^, double>^ prices = gcnew System::Collections::Generic::Dictionary<System::String^, double>();
			// Create a Dictionary to store the quantities of each item
			System::Collections::Generic::Dictionary<System::String^, double>^ quantities = gcnew System::Collections::Generic::Dictionary<System::String^, double>();

			// Define the prices for each item
			prices["Quesadilla"] = 7.00;
			prices["Burrito"] = 8.00;
			prices["Nacho"] = 7.50;
			prices["Drink"] = 2.50;

			// Define the quantity for each item
			quantities["Quesadilla"] = quesadillaValueCount;
			quantities["Burrito"] = burritoValueCount;
			quantities["Nacho"] = nachoValueCount;
			quantities["Drink"] = drinkValueCount;

			// Initialize total variable to store the total cost
			double total = 0.0;

			// Iterate through each item in the prices dictionary
			for each (System::Collections::Generic::KeyValuePair<System::String^, double> item in prices)
			{
				// Multiply the price of each item by its quantity and add it to the total
				total += item.Value * quantities[item.Key];
			}

			// Display the total in the format "$X.XX"
			this->label2->Text = System::String::Format("${0:F2}", total);
		}


		chipolteCheckout(void)
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
		~chipolteCheckout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(48, 110);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Thank you for Ordering";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(76, 63);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 26);
			this->label2->TabIndex = 10;
			this->label2->Text = L"total";
			this->label2->Click += gcnew System::EventHandler(this, &chipolteCheckout::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(61, 27);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Chipolte Total";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 138);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 38);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chipolteCheckout::button1_Click);
			// 
			// chipolteCheckout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(212, 206);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"chipolteCheckout";
			this->Text = L"chipolteCheckout";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
