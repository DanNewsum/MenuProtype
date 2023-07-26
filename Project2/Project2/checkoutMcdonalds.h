#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for checkoutMcdonalds
	/// </summary>
	public ref class checkoutMcdonalds : public System::Windows::Forms::Form
	{
	public:
		checkoutMcdonalds(double mealValueCount, double burgerValueCount, double friesValueCount, double drinkValueCount)
		{
			InitializeComponent();

			// Create a Dictionary to store the prices of each item
			System::Collections::Generic::Dictionary<System::String^, double>^ prices = gcnew System::Collections::Generic::Dictionary<System::String^, double>();
			// Create a Dictionary to store the quantities of each item
			System::Collections::Generic::Dictionary<System::String^, double>^ quantities = gcnew System::Collections::Generic::Dictionary<System::String^, double>();

			// Define the prices for each item
			prices["Meal"] = 9.00;
			prices["Burger"] = 5.00;
			prices["Fries"] = 2.50;
			prices["Drink"] = 2.50;

			// Define the quantity for each item
			quantities["Meal"] = mealValueCount;
			quantities["Burger"] = burgerValueCount;
			quantities["Fries"] = friesValueCount;
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

		checkoutMcdonalds(void)
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
		~checkoutMcdonalds()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(92, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &checkoutMcdonalds::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"McDonalds Total";
			this->label1->Click += gcnew System::EventHandler(this, &checkoutMcdonalds::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(125, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 32);
			this->label2->TabIndex = 2;
			



			this->label2->Click += gcnew System::EventHandler(this, &checkoutMcdonalds::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(89, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Thank you for Ordering";
			// 
			// checkoutMcdonalds
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 213);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"checkoutMcdonalds";
			this->Text = L"checkoutMcdonalds";
			this->Load += gcnew System::EventHandler(this, &checkoutMcdonalds::checkoutMcdonalds_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkoutMcdonalds_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
