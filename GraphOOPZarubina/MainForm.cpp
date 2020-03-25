#include "MainForm.h"


[GraphicsCpp::STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GraphicsCpp::MainForm);
	return 0;
}
