#include "Caretaker.h"


using namespace System;
using namespace System::Collections;

using namespace System::IO;
using namespace System::Runtime::Serialization;


namespace GraphicsCpp {
	
	void Caretaker::CheckAndCreateDirectory()
	{
		if (!Directory::Exists(Settings::GetSerializationFilePath()))
		{
			Directory::CreateDirectory(Settings::GetSerializationFilePath());
		}
	}
	
	void Caretaker::AddSnaphot(Figure^ figure, String^ snapshotName)
	{		//this->snaphotList->Add(snap);

		Snapshot^ snap = gcnew Snapshot(figure->Copy(), snapshotName);
		String^ pathToSave = Settings::GetSerializationFilePath() + snapshotName + Settings::GetSerializationFileExtenstion();
		CheckAndCreateDirectory();

		FileStream ^ fs = gcnew FileStream(pathToSave, FileMode::Create, FileAccess::Write);
		XmlSerializer^ formatter = gcnew XmlSerializer(Snapshot::typeid);
		formatter->Serialize(fs, snap);
		fs->Close();
	}	

	Figure^ Caretaker::RestoreFromSnapshot(String^ snapshotName)
	{
		FileStream ^ fs = gcnew FileStream(Settings::GetSerializationFilePath() + snapshotName, FileMode::OpenOrCreate);
		XmlSerializer^ formatter = gcnew XmlSerializer(Snapshot::typeid);
		Snapshot ^  des = (Snapshot ^)formatter->Deserialize(fs);
		fs->Close();

		return des->figure;
	}
	
	List<String^>^ Caretaker::GetSavedSnapshotsName()
	{
		List<String^>^ result = gcnew List<String^>();
		CheckAndCreateDirectory();
		DirectoryInfo^ di = gcnew DirectoryInfo(Settings::GetSerializationFilePath());

		auto fi = di->GetFiles("*" + Settings::GetSerializationFileExtenstion());
		for each (FileInfo^ file in fi) {
			result->Add(file->Name);
		}
		return result;
	}
	
	bool Caretaker::CheckIsFileExists(String ^ snapshotName)
	{
		if (File::Exists(Settings::GetSerializationFilePath() + snapshotName))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void Caretaker::DeleteSnaphot(String ^ snapshotName)
	{
		File::Delete(Settings::GetSerializationFilePath() + snapshotName);
	}
	
	int Caretaker::GetNextSaveName()
	{
		int nextname;

		List<String^>^ allnames = GetSavedSnapshotsName();
		if (allnames->Count != 0)
		{
			nextname = Convert::ToInt32(allnames[allnames->Count - 1]->Split('.')[0]);
			nextname += 1;
		}
		else
		{
			nextname = 1;
		}

		return nextname;
	}
}