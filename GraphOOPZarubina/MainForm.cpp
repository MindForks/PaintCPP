#include "MainForm.h"


[CourseWork::STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CourseWork::MainForm);
	return 0;
}
