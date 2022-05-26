#include "MyForm.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DaftarHarga::MyForm form; //Sesuai dengan nama project
	Application::Run(% form);
}
