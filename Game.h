#pragma once
#include <cstdlib> 
#include <ctime>  
#include <vector>
namespace kurs2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			numbers = gcnew List<int>();
			InitializeLabels(); // Инициализация меток
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}












	protected:

	protected:

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		List<int>^ numbers;
		array<Label^>^ labels; // Массив меток для отображения чисел
	private: System::Windows::Forms::Button^ button_brat;
	private: System::Windows::Forms::Button^ button1;
		   int currentLabelIndex; // Индекс текущей метки для обновления
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->button_brat = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_brat
			// 
			this->button_brat->Location = System::Drawing::Point(1338, 416);
			this->button_brat->Name = L"button_brat";
			this->button_brat->Size = System::Drawing::Size(75, 23);
			this->button_brat->TabIndex = 12;
			this->button_brat->Text = L"button13";
			this->button_brat->UseVisualStyleBackColor = true;
			this->button_brat->Click += gcnew System::EventHandler(this, &Game::button_brat_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(120, 535);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1499, 745);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_brat);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Game_Load(System::Object^ sender, System::EventArgs^ e) {
		// Инициализация массива чисел от 1 до 11
		for (int i = 1; i <= 11; i++)
		{
			numbers->Add(i);
		}
		// Генерация случайного индекса
		Random^ rand = gcnew Random();
		int randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		int randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		if (currentLabelIndex < 12) // Проверяем, что индекс метки не превышает 10
		{
			labels[currentLabelIndex]->Text = randomNumber.ToString();
			currentLabelIndex++; // Переходим к следующей метке
		}

		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		if (currentLabelIndex < 12) // Проверяем, что индекс метки не превышает 10
		{
			labels[currentLabelIndex]->Text = randomNumber.ToString();
			currentLabelIndex++; // Переходим к следующей метке
		}

		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		if (currentLabelIndex < 12) // Проверяем, что индекс метки не превышает 10
		{
			labels[currentLabelIndex]->Text = randomNumber.ToString();
			currentLabelIndex++; // Переходим к следующей метке
		}

		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		if (currentLabelIndex < 12) // Проверяем, что индекс метки не превышает 10
		{
			labels[currentLabelIndex]->Text = randomNumber.ToString();
			currentLabelIndex++; // Переходим к следующей метке
		}

		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
	}
		   void InitializeLabels()
		   {
			   labels = gcnew array<Label^>(12); // Создаем массив из 12 меток
			   int startX = 100; // Начальная позиция по X
			   int startY = 400; // Начальная позиция по Y для нижнего ряда
			   int offsetX = 30; // Смещение по X для каждой метки
			   int offsetY = 30; // Смещение по Y для верхнего ряда
			   for (int i = 0; i < 6; i++)
			   {
				   // Четные номера (0, 2, 4, ...) — нижний ряд
				   labels[i * 2] = (gcnew Label());
				   labels[i * 2]->Location = System::Drawing::Point(startX + (i * offsetX), startY); // Нижний ряд
				   labels[i * 2]->Size = System::Drawing::Size(20, 20);
				   this->Controls->Add(labels[i * 2]); // Добавляем метки на форму

				   // Нечетные номера (1, 3, 5, ...) — верхний ряд
				   labels[i * 2 + 1] = (gcnew Label());
				   labels[i * 2 + 1]->Location = System::Drawing::Point(startX + (i * offsetX), startY - offsetY); // Верхний ряд
				   labels[i * 2 + 1]->Size = System::Drawing::Size(20, 20);
				   this->Controls->Add(labels[i * 2 + 1]); // Добавляем метки на форму
			   }
			   
		   };
	private: System::Void button_brat_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numbers->Count == 0)
		{
			MessageBox::Show("Все числа использованы!");
			return;
		}

		// Генерация случайного индекса
		Random^ rand = gcnew Random();
		int randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		int randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		if (currentLabelIndex < 12) // Проверяем, что индекс метки не превышает 12
		{
			labels[currentLabelIndex]->Text = randomNumber.ToString();
			currentLabelIndex++; // Переходим к следующей метке
		}

		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
		randomIndex = rand->Next(0, numbers->Count); // Генерация индекса от 0 до Count-1

		// Получение случайного числа
		randomNumber = numbers[randomIndex];

		// Обновление текста текущей метки
		if (currentLabelIndex < 12) // Проверяем, что индекс метки не превышает 12
		{
			labels[currentLabelIndex]->Text = randomNumber.ToString();
			currentLabelIndex++; // Переходим к следующей метке
		}

		// Удаление элемента из списка
		numbers->RemoveAt(randomIndex); // Удаление элемента из списка
	}

};
}
