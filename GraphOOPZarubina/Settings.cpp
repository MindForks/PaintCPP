#include "Settings.h"

Pen ^ GraphicsCpp::Settings::GetSelectionPen()
{
	return selectionPen;
}

void GraphicsCpp::Settings::SetSelectionPenColor(Color color)
{
	selectionPen->Color = color;
}

String ^ GraphicsCpp::Settings::GetSerializationFilePath()
{
	return serializationFilePath;
}

String ^ GraphicsCpp::Settings::GetSerializationFileExtenstion()
{
	return serializationFileExtenstion;
}
